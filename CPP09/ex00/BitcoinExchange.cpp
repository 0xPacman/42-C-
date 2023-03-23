/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahjadani <ahjadani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:40:42 by ahjadani          #+#    #+#             */
/*   Updated: 2023/03/18 13:50:15 by ahjadani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.h"

BitcoinExchange::BitcoinExchange()
{
	return ;
}

BitcoinExchange::BitcoinExchange(std::string name)
{
	m_csvfile = "data.csv";
	parseFile(m_csvfile);
	parseInput(name);
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src)
{
	*this = src;
}

BitcoinExchange::BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & obj)
{
	if (this != &obj)
	{
		m_filename = obj.m_filename;
		m_csvfile = obj.m_csvfile;
	}
	return *this;
}

void BitcoinExchange::checkValidTime(Time time) {
    m_error = 0;
    
    if (time.year < 2009 || time.year > 2023) {
        std::cout << "Error: invalid year." << std::endl;
        m_error = 1;
    }
    
    if (time.month < 1 || time.month > 12) {
        std::cout << "Error: invalid month." << std::endl;
        m_error = 1;
    }
    
    if (time.month == 2) {
        if (time.year % 4 == 0) {
            if (time.day < 1 || time.day > 29) {
                std::cout << "Error: invalid day." << std::endl;
                m_error = 1;
            }
        } else {
            if (time.day < 1 || time.day > 28) {
                std::cout << "Error: invalid day." << std::endl;
                m_error = 1;
            }
        }
    } else if (time.month == 4 || time.month == 6 || time.month == 9 || time.month == 11) {
        if (time.day < 1 || time.day > 30) {
            std::cout << "Error: invalid day." << std::endl;
            m_error = 1;
        }
    } else {
        if (time.day < 1 || time.day > 31) {
            std::cout << "Error: invalid day." << std::endl;
            m_error = 1;
        }
    }
}

int BitcoinExchange::string_2_timestamp(const std::string &date_string) {
	std::tm date_tm;
    std::istringstream date_stream(date_string);
	m_error = 0;
    date_stream >> std::get_time(&date_tm, "%Y-%m-%d");
    if (date_stream.fail())
	{
		std::cout << "Error: invalid date format." << std::endl;
		m_error = 1;
	}

    if (date_tm.tm_mon != date_tm.tm_mon || date_tm.tm_mday != date_tm.tm_mday) 
	{
        std::cout << "Error: invalid date." << std::endl;
		m_error = 1;
    }

    Time time;
    time.year = date_tm.tm_year + 1900;
    time.month = date_tm.tm_mon + 1;
    time.day = date_tm.tm_mday;
	checkValidTime(time);
    return std::mktime(&date_tm);
}

void checkForCSVFile()
{
    DIR *dir;
    struct dirent *ent;
    bool found = false;
    
    if ((dir = opendir(".")) != NULL)
    {
        while ((ent = readdir(dir)) != NULL)
        {
            std::string filename(ent->d_name);
            if (filename.size() > 4 && filename.substr(filename.size() - 4) == ".csv")
            {
                std::cout << "Found: " << filename << ", but should be renamed to data.csv" << std::endl;
                found = true;
            }
        }
        closedir(dir);
    }
    
    if (!found)
    {
        std::cout << "Error: file not found" << std::endl;
    }
}

void BitcoinExchange::parseFile(std::string filename)
{
	std::ifstream file(filename);
	std::string line;

	if (!file.is_open())
	{
		checkForCSVFile();
		exit(1);
	}
	std::getline(file, line);
	while (std::getline(file, line))
	{
		line.erase(std::remove_if(line.begin(), line.end(), isspace), line.end());
		std::string date = line.substr(0, line.find(','));
		std::string price = line.substr(line.find(',') + 1);
		int timestamp = string_2_timestamp(date);
		m_data.insert(std::make_pair(timestamp, std::atof(price.c_str())));
	}
}

void BitcoinExchange::parseInput(std::string input)
{

	std::ifstream file(input);
	std::string line;
	if (!file.is_open())
	{
		std::cout << "Error: file not found" << std::endl;
		exit(1);
	}
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::string line2 = line;
		line.erase(std::remove_if(line.begin(), line.end(), isspace), line.end());
		std::string date = line.substr(0, line.find('|'));
		std::string value = line.substr(line.find('|') + 1);
		if (!checkValidLine(line))
		{
			std::cout << "Error: bad input => " << line2 << std::endl;
			continue;
		}
		int timestamp = string_2_timestamp(date);
		if (m_error == 1)
			continue;
		std::map<int, float>::iterator it = m_data.find(timestamp);
		if (std::atof(value.c_str()) < 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
			continue;
		}
		if (std::atof(value.c_str()) >= 2147483648)
		{
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}
		if (it != m_data.end())
			std::cout << date << " => " << value << " = " << std::atof(value.c_str()) * it->second << std::endl;
		else
		{
			std::map<int, float>::iterator it2 = m_data.lower_bound(timestamp);
			if (it2 == m_data.end() || it2 != m_data.begin())
			{
				--it2;
			}
			std::cout << date << " => " << value << " = " << std::atof(value.c_str()) * it2->second << std::endl;
		}
	}
}

bool BitcoinExchange::checkValidLine(std::string line)
{
    size_t pos = line.find('|');
    if (pos == std::string::npos)
        return false;

    std::string value = line.substr(pos + 1);
    bool is_number = true;
    int dot_count = 0;
    for (size_t i = 0; i < strlen(value.c_str()); i++)
    {
        if (!isdigit(value[i]) && value[i] != '.' && value[i] != '-')
        {
            is_number = false;
            break;
        }
        if (value[i] == '.')
            dot_count++;
    }
    if (dot_count > 1 || !is_number)
        return false;

    return true;
}

void BitcoinExchange::debug()
{
	std::cout << "-- Debug ---" << std::endl;
	for (std::map<int, float>::iterator it = m_data.begin(); it != m_data.end(); it++)
	{
		std::cout << "timestamp: " << it->first << " price: " << it->second << std::endl;
	}
}