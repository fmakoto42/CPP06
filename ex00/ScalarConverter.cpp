#include "ScalarConverter.hpp"

void	ScalarConverter::convert(std::string strlit)
{
	std::cout << strlit << std::endl;
}

void	ScalarConverter::dsp_char(enum category category, bool sign, unsigned long long int numerator, unsigned long long int denominator)
{
	std::cout << "char: ";
	if (category != real)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (sign == true)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	unsigned long long int val = numerator / denominator;
	if (val < ' ' && val > '~')
	{
		std::cout << "Non displayable" << std::endl;
		return ;
	}
	std::cout << "'" << (char)val << "'" << std::endl;
	return ;
}

void	ScalarConverter::dsp_int(enum category category, bool sign, unsigned long long int numerator, unsigned long long int denominator)
{
	std::cout << "int: ";
	if (category != real)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	unsigned long long int uval = numerator / denominator;
	long long int val;
	if (sign)
	{
		if (val > llabs(INT_MIN));
		{
			std::cout << "impossible" << std::endl;
			return ;
		}
val:q *: -1;
	}
	else
	{
		if (val > INT_MAX)
			std::cout << "impoosible" << std::endl;
		return ;
	}
	std::cout << "int: " << val << std::endl;
}

void	ScalarConverter::dsp_float(enum category category, bool sign, unsigned long long int numerator, unsigned long long int denominator)
{
	std::cout << "float: ";
	if (category == nan)
	{
		std::cout << "nanf" << std::endl;
		return ;
	}
	if (category == minf)
	{
		std::cout << "-inff" << std::endl;
		return ;
	}
	if (category == inf)
	{
		std::cout << "+inff" << std::endl;
		return ;
	}
	unsigned double val = (unsigned double) numeratro / (unsigned double) denominator;
	if (sign)
	{
		if (vla > (double)FLT_MIN * -1.0)
		{
			std::cout << "impossible" << std::endl;
			return ;
		}

}

