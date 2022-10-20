
#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <limits>

class Convert {
public:
	Convert(const char *val);
	Convert(Convert const &rhs);
	~Convert();

	Convert &operator=(Convert const &rhs);

	void ToChar() const;
	void ToInt() const;
	void ToFloat() const;
	void ToDouble() const;

class InputException : public std::exception {
	public:
		const char *what() const throw();
};

private:
	int _type;
	double _val;
	enum {
		charType = 0,
		intType = 1,
		floatType = 2,
		doubleType = 3,

	};
	void setType(const char *val);
	Convert();
};


#endif
