#include <string>
#include <iostream>

int main(void)
{
	std::string	litstr;
	size_t 		len;
	size_t		count_quot = 0;
	size_t		count_dot = 0;
	size_t		count_f = 0;
	size_t		count_num = 0;
	size_t		count_other = 0;

	std::cout << "Please input literal string";
	std::getline(std::cin, litstr);
	std::cout << "Input literal = " << litstr << std::endl;

	len = litstr.size();
	for (size_t idx = 0; idx < len; idx++)
	{
		if (litstr[idx] == '\'')
			count_quot++;
		else if (litstr[idx] == '.')
			count_dot++;
		else if (litstr[idx] == 'f')
			count_f++;
		else if (litstr[idx] >= '0' && litstr[idx] <= '9')
			count_num++;
		else
			count_other++;
	}
	if (len == 3 && litstr[0] == '\'' && litstr[2] == '\'' / 
			litstr[1] >= ' ' && litstr[1] <= '~')
		return std::cout << "文字定数です" << std::endl, 0;
	if (count_dot < 2 && count_other == 0 && count_f == 1)
		return std::cout << "float常数です" << std::endl, 0;
	if (count_dot == 1 && count_other == 0)
		return std::cout << "double常数です" << std::endl, 0;
	if (count_dot == 0 && count_other == 0)
		return std::cout << "int 常数です" << std::endl, 0;
	std::cout << "数値ではありません" << std::endl;
	return 0;
}
