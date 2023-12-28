#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
    if (argc < 2) {
        std::cout << "Error: No sequence provided!" << std::endl;
        return (1);
    }

    std::vector<int> vec;
    // Process the command line arguments and store positive integers in the vector
    for (int i = 1; i < argc; ++i)
	{
        int num = std::stoi(argv[i]);
        if (num > 0)
			vec.push_back(num);
		else
		{
            std::cout << "Error: Invalid input - Please provide positive integers only!" << std::endl;
            return (1);
        }
    }

    // Display unsorted sequence
    std::cout << "Before:";
    for (const auto &num : vec)
	{
        std::cout << " " << num;
    }
    std::cout << std::endl;

    // Copy the original sequence for sorting with different containers
    std::vector<int> vec_copy(vec);
    std::list<int> list_copy(vec.begin(), vec.end()); // Use other containers as needed

    // Sort the sequence with different containers and measure the time
    std::chrono::steady_clock::time_point start_time = std::chrono::steady_clock::now();
    PmergeMe::mergeInsertSort(vec_copy); // Sorting using a specific container (e.g., vector)
    std::chrono::steady_clock::time_point end_time = std::chrono::steady_clock::now();
    auto duration_vec = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();

    start_time = std::chrono::steady_clock::now();
    PmergeMe::mergeInsertSort(list_copy); // Sorting using another container (e.g., list)
    end_time = std::chrono::steady_clock::now();
    auto duration_list = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();

    // Display sorted sequence
    std::cout << "After:";
    for (const auto &num : vec_copy)
	{
        std::cout << " " << num;
    }
    std::cout << std::endl;

    // Display time taken by each container for sorting
    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector: " << duration_vec << " us" << std::endl;
    std::cout << "Time to process a range of " << vec.size() << " elements with std::list: " << duration_list << " us" << std::endl;

    return (0);
}


