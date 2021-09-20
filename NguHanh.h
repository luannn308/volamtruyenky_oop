#pragma once
#include <string>
class NguHanh
{
protected:
	std::string Ten;
	std::string Sinh;
	std::string Khac;
public:
	NguHanh();
	NguHanh(std::string, std::string, std::string);
	~NguHanh();
	
	int TuongSinh();
	int TuongKhac();
	std::string getTen();
	void setTen(std::string Name);
	std::string getSinh();
	void SetSinh(std::string);
	std::string getKhac();
	void SetKhac(std::string);
};
