#pragma once
#include <string>
#include "NguHanh.h"

class MonPhai
{
protected:
	std::string Ten;
	NguHanh He;
public:
	MonPhai();
	MonPhai(std::string, NguHanh);
	~MonPhai();

	std::string getTen();
	void setTen(std::string);
	NguHanh getHe();
	std::string getHeName();
	void setHe(NguHanh);
};