
#include "Convert.h"

Convert::Convert()
	: _type(Convert::doubleType)
{
}

Convert::Convert(const char *val)
{
	setType(val);
}

Convert::Convert(const Convert &rhs)
	: _type(rhs._type), _val(rhs._val)
{
}

Convert &Convert::operator=(const Convert &rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
		_val = rhs._val;
	}
	return *this;
}

Convert::~Convert()
{
}

void Convert::setType(const char *val)
{
	const std::string str = val;
	_val = atof(val);

	if (_val == 0 && !isdigit(val[0]) && val[1])
		throw Convert::InputException();
	if (_val == 0 && !isdigit(val[0]) && !val[1])
	{
		_type = Convert::charType;
		_val = val[0];
	}
	else if (str.find(".") != std::string::npos)
	{
		if (str.find("f") != std::string::npos)
			_type = Convert::floatType;
		else
			_type = Convert::doubleType;
	}
	else
		_type = Convert::intType;
}

void Convert::ToChar() const
{
	if (_val == static_cast<int>(_val))
	{
		if (_val < 0 || _val > 127)
			std::cout << "char: impossible" << std::endl;
		else if (_val <= 31 || _val == 127)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: " << "'" << static_cast<char>(_val) << "'" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
}

void Convert::ToInt() const
{
	if (_val <= std::numeric_limits<int>::max() && _val >= std::numeric_limits<int>::min())
		std::cout << "int: " << static_cast<int>(_val) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
}

void Convert::ToFloat() const
{
	std::cout << "float: " << static_cast<float>(_val);
	if (static_cast<int>(_val) == _val)
			std::cout << ".0";
	std::cout << "f" << std::endl;
}

void Convert::ToDouble() const
{
	std::cout << "double: " << _val;
	if (static_cast<int>(_val) == _val)
		std::cout << ".0";
	std::cout << std::endl;
}

const char *Convert::InputException::what() const throw()
{
	return ("Invalid input. Please input numeric or character value.");
}
