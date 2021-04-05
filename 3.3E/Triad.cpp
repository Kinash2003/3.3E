//Triad.cpp
#include "Triad.h"

void Triad::SetFirst(double value) { first = value; }
void Triad::SetSecond(double value) { second = value; }
void Triad::SetThird(double value) { third = value; }

double Triad::GetFirst() const { return first; }
double Triad::GetSecond() const { return second; }
double Triad::GetThird() const { return third; }

Triad::Triad() { first = 0, second = 0, third = 0; }
Triad::Triad(double first = 0, double second = 0, double third = 0)
{
	this->first = first;
	this->second = second;
	this->third = third;
}
Triad::Triad(const Triad& A)
{
	first = A.GetFirst();
	second = A.GetSecond();
	third = A.GetThird();
}

bool operator > (const Triad t1, const Triad t2)
{
	if (t1.GetFirst() > t2.GetFirst() || (t1.GetFirst() == t2.GetFirst()) &&
		(t1.GetSecond() > t2.GetSecond()) || (t1.GetSecond() == t2.GetSecond()) &&
		(t1.GetThird() > t2.GetThird()))
		return 1;
	else
		return 0;
}
bool operator < (const Triad t1, const Triad t2)
{
	if (t1.GetFirst() < t2.GetFirst() || (t1.GetFirst() == t2.GetFirst()) &&
		(t1.GetSecond() < t2.GetSecond()) || (t1.GetSecond() == t2.GetSecond()) &&
		(t1.GetThird() < t2.GetThird()))
		return 1;
	else
		return 0;
}
bool operator == (const Triad t1, const Triad t2)
{
	if ((t1.GetFirst() == t2.GetFirst()) &&
		(t1.GetSecond() == t2.GetSecond()) &&
		(t1.GetThird() == t2.GetThird()))
		return 1;
	else
		return 0;
}
