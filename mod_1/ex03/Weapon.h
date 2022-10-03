#ifndef WEAPON_H
#define WEAPON_H


#include <strings.h>
#include <iostream>

class Weapon {
public:
	Weapon(const std::string &type);
	~Weapon();
	void setType(const std::string &type);
	std::string getType() const;
private:
	std::string _type;
};


#endif
