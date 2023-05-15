#include "ScalarConverter.hpp"

static int findtwo(std::string str)
{
    char tmp2;
    int moref = 0, moreinc = 0, moredec = 0, morepoint = 0;
    int j = 0;
    for (size_t i = 0; i < str.size(); i++)
    {
        char tmp = str[i];
        moref = (tmp == 'f') ? moref+=1 : moref; 
        moreinc = (tmp == '+') ? moreinc+= 1 : moreinc;   
        moredec = (tmp == '-') ? moredec+= 1 : moredec;   
        morepoint = (tmp == '.') ? morepoint+= 1 : morepoint;
        j = i;
    }
    j--;
    tmp2 = str[j];
    if(moref > 1 || moreinc > 1 || moredec > 1 || morepoint > 1 || (tmp2 == 'f' && morepoint == 1))
        return(-1);
    return(1);
}


void	ScalarConverter::convert_to_char(std::string &str)
{
	if (is_pseudo_literal(str))
	{
		std::cout << "Impossible" << std::endl;
		return ;
	}
    int num = std::atoi(str.c_str());
    char c = static_cast<char>(num);
    if (!isprint(c) || (std::stoi(str) > 125)){
        std::cout << "Non Displayable" << std::endl;
        return;
    }
	std::cout << c << std::endl;
}

void	ScalarConverter::convert_to_int(std::string &str)
{
	if (is_pseudo_literal(str))
	{
		std::cout << "Impossible" << std::endl;
		return;
	}
	std::cout << std::atoi(str.c_str()) << std::endl;
}

 void	ScalarConverter::convert_to_float(std::string &str)
{
	float number = std::strtof(str.c_str(), nullptr);
	if (number - static_cast<int>(number) == 0)
	{
		std::cout << number << ".0f" << std::endl;
		return ;
	}
	std::cout << number << "f" << std::endl;
}

bool	is_pseudo_literal(std::string &s)
{
	return (s == "nan" || s == "nanf" || s == "+inf" || s == "inf"
		|| s == "-inf" || s == "+inff" || s == "inff" || s == "-inff");
}

void	ScalarConverter::convert_to_double(std::string &str)
{
	double number = std::strtod(str.c_str(), nullptr);
	if (number - static_cast<int>(number) == 0)
	{
		std::cout << number << ".0" << std::endl;
		return ;
	}
	std::cout << number << std::endl;
}

static void	conversion_of_scalar_types(std::string str)
{
	std::cout << std::right <<
		 YEL << "Char   : ", ScalarConverter::convert_to_char(str);
	std::cout << std::right <<
		 YEL << "Int    : ", ScalarConverter::convert_to_int(str);
	std::cout << std::right <<
		 YEL << "Float  : ", ScalarConverter::convert_to_float(str);
	std::cout << std::right <<
		 YEL << "Double : ", ScalarConverter::convert_to_double(str);
}

bool	is_valid(std::string &str)
{
	size_t	i;
	char	c;

	if (is_pseudo_literal(str))
		return (true);
	if (str.length() == 1 && isalpha(str[0])){
		str = std::to_string(static_cast<int>(str[0]));
		return (true);
	}
	if(findtwo(str) != 1)
        return (false);
	for (i = 0; i < str.size(); i++)
	{
		c = str[i];
		if (!isdigit(c) && c != '-' && c != '+' && c != 'f'
			&& c != '.')
			return (false);
	}
	return (true);
}

int main(int ac, char **av)
{
	if (ac != 2 )
	{
		std::cerr << "Bad number of args" << std::endl;
		return (0);
	}
	
	std::string str = (std::string)av[1];
	int num1 = std::atoi(str.c_str());
	std::cout << num1 << std::endl;
	if (is_valid(str)){
		conversion_of_scalar_types(str);
	}
	else
		std::cerr << "Invalid" << std::endl;
}