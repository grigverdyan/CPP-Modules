#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>

class ScalarConverter
{
public:
    static void convert(const std::string& str);

private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter& other);
    ScalarConverter& operator=(const ScalarConverter& rhs);
    ~ScalarConverter();

    static void castNumber(long double number);
    static void castToChar(const std::string& literal);
    static void inf(const std::string& literal);
    static void nan();
    static void allImpossible();
};

#endif // SCALARCONVERTER_HPP