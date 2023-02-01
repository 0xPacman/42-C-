/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Span.h                                            :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/02/01 14:51:17 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/02/01 14:51:17 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <cmath>
# include <vector>

class Span
{
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &src);
        Span &operator=(const Span &src);
        ~Span();
        int getSize() const;
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        class FullException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class NoSpanException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        void print();
        
    private:
        std::vector<int> m_v;
        unsigned int m_size;
};

#endif