//Triad.h
#pragma once
#include "Object.h"
#include <iostream>
#include <sstream>

using namespace std;

class Triad :public Object
{
private:
	double first, second, third;
public:
	void SetFirst(double value);
	void SetSecond(double value);
	void SetThird(double value);

	double GetFirst() const;
	double GetSecond() const;
	double GetThird() const;

	Triad();
	Triad(double, double, double);
	Triad(const Triad&);

	friend bool operator > (const Triad t1, const Triad t2);
	friend bool operator < (const Triad t1, const Triad t2);
	friend bool operator == (const Triad t1, const Triad t2);

};
