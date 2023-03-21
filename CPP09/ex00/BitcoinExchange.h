/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahjadani <ahjadani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:40:40 by ahjadani          #+#    #+#             */
/*   Updated: 2023/03/18 13:48:19 by ahjadani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

# include <iostream>
# include <fstream>
# include <string>
# include <map>
# include <sstream>
# include <ctime>
#include <dirent.h>
#include <chrono>
#include <iomanip>

struct Time {
  int year;
  int month;
  int day;
};

class BitcoinExchange
{
	private:
		std::map<int, float> m_data;
		std::string m_filename;
		std::string m_csvfile;
		int m_error;
		void parseFile(std::string filename);
		void parseInput(std::string input);
	public:
		BitcoinExchange();
		BitcoinExchange(std::string name);
		BitcoinExchange(BitcoinExchange const & src);
		~BitcoinExchange();
		BitcoinExchange & operator=(BitcoinExchange const & obj);
		int string_2_timestamp(const std::string &date_string);
		void checkValidTime(Time time);
		bool checkValidLine(std::string line);
		void debug();
};

#endif
