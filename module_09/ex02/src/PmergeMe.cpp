#include "PmergeMe.hpp"
#include <iostream>
#include <stdexcept>
#include <limits>
#include <vector>

/* Compute Jacobsthal numbers for optimized merging order */
int Jacobsthal(int index) 
{
	return static_cast<int>(round((pow(2, index + 1) + pow(-1, index)) / 3));
}

/* Get arguments from input and populate Container */
std::vector<int> getArguments(int argc, char* argv[])
{

	std::string numbers;
	for (int i = 1; i < argc; ++i)
	{
		numbers += std::string(argv[i]) + " ";
	}

	std::stringstream ss(numbers);
	std::string num;
	std::vector<int> range;
	while (std::getline(ss, num, ' '))
	{
		if (num.find_first_not_of("0123456789") != std::string::npos)
		{
			throw std::invalid_argument("not an integer is provided.");
		}
		if (num.empty()) {
			continue;
		}
		long number = stringToInt()(num);
		if (number > std::numeric_limits<int>::max()) {
			throw std::invalid_argument("too large integer is provided.");
		}
		if (number <= 0)
		{
			throw std::invalid_argument("not positive integer is provided.");
		}
		if (std::find(range.begin(), range.end(), number) != range.end()) {
			throw std::invalid_argument("duplicate integer is provided.");
		}
		range.push_back(number);
	}
	
	return range;
}