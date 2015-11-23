#pragma once
#include<iostream>

class Ratio
{
private:
	float first;
	unsigned short second;
public:
	Ratio() : first(1), second(1) {}
	Ratio(const Ratio &);
	Ratio(float);
	Ratio(float, unsigned short);

	friend std::ostream & operator<<(std::ostream &, const Ratio &);
	friend std::istream & operator>>(std::istream &, Ratio &);

};