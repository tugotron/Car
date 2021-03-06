#include"Ratio.h"

void Ratio::init(float _f = 1, unsigned short _s = 1)
{
	first = _f; second = _s; 
}

void Ratio::swap(Ratio &rhs)
{
	Ratio tmp(rhs);
	first = rhs.first;
	second = rhs.second;
	rhs.first = tmp.first;
	rhs.second = tmp.second;
}

Ratio::Ratio()
{
	init();
}

Ratio::Ratio(const Ratio &rhs)
{
	init(rhs.first, rhs.second);
}

Ratio::Ratio(float _f)
{
	init(_f);
}

Ratio::Ratio(float _f, unsigned short _s)
{
	init(_f, _s);
}

Ratio & Ratio::operator=(Ratio rhs)
{
	swap(rhs);
	return *this;
}

std::ostream & operator<<(std::ostream &os, const Ratio &_r)
{
	return os << _r.first << ":" << _r.second;
}


std::istream & operator>>(std::istream &is, Ratio &_r)
{
	cout << "\tInput first part of ratio: ";
	is >> _r.first;
	cout << "\tInput second part of ratio: ";
	is >> _r.second;
	return is;
}

bool operator==(const Ratio &lhs, const Ratio &rhs)
{
	return lhs.first == rhs.first && lhs.second == rhs.second;
}