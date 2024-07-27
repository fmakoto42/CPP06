
#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Error" << std::endl;
		std::cout << "Arguments count is must one" << std::endl;
		std::cout << "Usage : ./convert 42.0f (literal string)" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}
