#include "RPN.hpp"

std::stack<int> RPN::stack;

struct const RPN::operations RPN::operations[op_size] = {
	{ '+', &RPN::add },
	{ '-', &RPN::sub },
	{ '*', &RPN::mul },
	{ '/', &RPN::div }
};

int RPN::solve(std::string const &line)
{
    if (line.empty())
        return 0;
    for (std::string::const_iterator it = line.begin(); it != line.end(); ++it)
    {
        if (std::isspace(*it))
            continue;
        else if (std::isdigit(*it))
            pushToken(static_cast<int>(*it - '0')); // to ascii
        else
            operate(static_cast<unsigned char>(*it));
    }
    if (stack.size() > 1)
        throw std::runtime_error("More items than operations");
    int ret = stack.top();
    stack = std::stack<int>();
    return ret;
}

void RPN::pushToken(int token)
{
	stack.push(token);
}

void RPN::operate(unsigned char symbol)
{
	for (short i = 0; i < op_size; ++i)
    {
		if (operations[i].symbol == symbol)
        {
			int lhs = 0, rhs = 0;
			popOperands(lhs, rhs);
			int res = (*(operations[i].calc))(lhs, rhs);
			pushToken(res);
			return;
		}
	}
	throw std::runtime_error("Wrong operator");
}

void RPN::popOperands(int &lhs, int &rhs)
{
	if (stack.size() < 2)
		throw std::runtime_error("Not enough operands");
	rhs = stack.top();
	stack.pop();
	lhs = stack.top();
	stack.pop();
}

int     RPN::add(int const &lhs, int const &rhs)
{
	return lhs + rhs;
}
int     RPN::sub(int const &lhs, int const &rhs)
{
	return lhs - rhs;
}
int     RPN::mul(int const &lhs, int const &rhs)
{
	return lhs * rhs;
}
int     RPN::div(int const &lhs, int const &rhs)
{
	if (rhs == 0)
		throw std::runtime_error("Cannot divide by 0");
	return lhs / rhs;
}