#include "ScalarConverter.hpp"

#include <iostream>
#include <iomanip>
#include <climits>
#include <cfloat>
#include <cstdlib>
#include <limits>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& /* other */) {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& /* rhs */) { return *this; }

ScalarConverter::~ScalarConverter() {}


void ScalarConverter::convert(const std::string& literal)
{
	if (std::isprint(literal[0]) && !std::isdigit(literal[0]))
	{
		if (literal.length() == 1)
		{
			castToChar(literal);
		}
		else if (literal == "-inf" || literal == "-inff" 
				|| literal == "+inf" || literal == "+inff"
				|| literal == "inf" || literal == "inff")
		{
			inf(literal);
		}	
		else if (literal == "nan" || literal == "nanf")
		{
			nan();
		}	
		else
		{
			allImpossible();
		}
	}
	else if (literal[literal.length() - 1] == 'f')
	{
		unsigned long int i = 0;
		while (i < literal.length() - 1 && (std::isdigit(literal[i]) || literal[i] == '.'))
		{
			++i;
		}	
		if (i == literal.length() - 1)
		{
			castNumber(atof(literal.c_str()));
		}	
		else
		{
			allImpossible();
		}
	}
	else if (literal.find('.') != std::string::npos)
	{
		unsigned long int i = 0;
		while (std::isdigit(literal[i]) || literal[i] == '.')
		{
			++i;
		}	
		if (i == literal.length())
		{
			castNumber(atol(literal.c_str()));
		}	
		else
		{
			allImpossible();
		}	
	}
	else if (std::isdigit(literal[0]))
	{
		unsigned long int i = 0;
		while (std::isdigit(literal[i]))
		{
			++i;
		}	
		if (i == literal.length())
		{
			castNumber(atol(literal.c_str()));
		}
		else
		{
			allImpossible();
		}	
	}
	else
	{
		allImpossible();
	}
}

void ScalarConverter::castNumber(long double num)
{
	if (num < 0 || num > 127)
	{
		std::cout << "char: impossible" << std::endl;
	}
	else if (num < 32 || num == 127)
    {
		std::cout << "char: Non displayable" << std::endl;
    }
    else
	{
      	std::cout << "char: " << static_cast<char>(num) << std::endl;
    }

	if (num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min())
	{
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
    	std::cout << "int: " << static_cast<int>(num) << std::endl;
	}

	if (num > std::numeric_limits<float>::max() || num < std::numeric_limits<float>::min())
	{
		std::cout << "float: impossible" << std::endl;
	}
	else
	{
    	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl;
	}

	if (num > std::numeric_limits<double>::max() || num < std::numeric_limits<double>::min())
	{
		std::cout << "double: impossible" << std::endl;
	}
	else
	{
    	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(num) << std::endl;
	}
}


void ScalarConverter::inf(const std::string& literal)
{
	std::cout << "char: impossible" << std::endl;

	if (literal == "-inf" || literal == "-inff") 
    {
		std::cout << "int: " << std::numeric_limits<int>::min() << std::endl;
		std::cout << "float: " << std::numeric_limits<float>::min() << std::endl;
		std::cout << "double: " << std::numeric_limits<double>::min() << std::endl;
	}
    else
    {
		std::cout << "int: " << std::numeric_limits<int>::max() << std::endl;
		std::cout << "float: " << std::numeric_limits<float>::max() << std::endl;
		std::cout << "double: " << std::numeric_limits<double>::max() << std::endl;
	}
}

void ScalarConverter::nan()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

void ScalarConverter::allImpossible()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

void ScalarConverter::castToChar(const std::string& literal)
{
	std::cout << "char: " << literal[0] << std::endl;
	std::cout << "int: " << static_cast<int>(literal[0]) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(literal[0]) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(literal[0]) << std::endl;
}