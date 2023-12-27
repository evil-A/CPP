/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:08:47 by evila-ro          #+#    #+#             */
/*   Updated: 2023/12/27 22:14:11 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPP_HPP
# define RPP_HPP

#include <iostream>
#include <string>
#include <stack>
#include <cctype>
#include <stdexcept>

class RPN
{
    private:
        RPN(void);
        ~RPN(void);
        RPN(RPN const &src);
        RPN &operator=(RPN const &ass);

        static std::stack<int> stack;

        static const int op_size = 4;
        static const struct operations
       {
            unsigned char symbol;
            int (*calc)(int const &lhs, int const &rhs);
        } operations[op_size];

        static void popOperands(int &lhs, int &rhs);
        static void pushToken(int token);

        static void operate(unsigned char symbol);

        static int add(int const &lhs, int const &rhs);
        static int sub(int const &lhs, int const &rhs);
        static int mul(int const &lhs, int const &rhs);
        static int div(int const &lhs, int const &rhs);

    public:
        static int solve(std::string const &input);
};

#endif
