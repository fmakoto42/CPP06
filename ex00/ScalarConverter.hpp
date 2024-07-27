#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <climits>

# define ERRMSG1	"Non displayable"
# define ERRMSG2	"impossible"

class ScalarConverter
{
	private:
		ScalarConverter();
		virtual ~ScalarConverter() = 0;
		enum 	literal_type {t_char, t_int, t_float, t_double, not_number};
		char	literal_char;
		int		literal_int;
		float	literal_float;
		double	literal_double;
		void 	store_literal(std::string input);
		void	dsp_literal(char literal_char);
		void	dsp_literal(int literal_int);
		void	dsp_literal(float literal_float);
		void	dsp_literal(double literal_double);
	public:
		static void convert(std::string input);
};
#endif
