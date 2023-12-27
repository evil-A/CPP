#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Wrong input" << std::endl;
        return (1);
    }
    try
    {
		int result;
        result = RPN::solve(argv[1]);
		std::cout << "Result: " << result << std::endl;
	}
    catch (std::exception &e)
    {
		std::cerr << "Exception: " << e.what() << std::endl;
		return (1);
	}

    return (0);
};