#include "BitcoinExchange.hpp"

int main(int argc, char* argv[]) {
	if (argc != 2) {
		std::cout << "Error: Wrong number of arguments." << std::endl;
		return 1;
	}

	BitcoinExchange memo("data.csv");
	memo.parseInput(argv[1]);

	return 0;
}