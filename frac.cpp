#include <iostream>
#include "frac.h"

using namespace std;

//Friend functions
Fraction operator+ (const Fraction& f1, const Fraction& f2)
{
	Fraction r;
	r.numerator = (f1.numerator*f2.denominator) + (f2.numerator*f1.denominator);
	r.denominator = f1.denominator * f2.denominator;
	return r;
}

Fraction operator-(const Fraction& f1, const Fraction& f2)
{
	Fraction r;
	r.numerator = (f1.numerator*f2.denominator) - (f2.numerator*f1.denominator);
	r.denominator = f1.denominator * f2.denominator;
	return r;
}

ostream& operator<< (ostream& out, const Fraction& f1)
{
	out << f1.numerator << '/' << f1.denominator;
	return out;
}

istream& operator>> (istream& in, Fraction& f1)
{
	char temp;
	in >> f1.numerator >> temp >> f1.denominator;
	return in;
}
//Class details
Fraction::Fraction()
{
	numerator = 0;
	denominator = 1;
}

Fraction::Fraction(int n, int d)
{
	numerator = n;
	denominator = d;
}

void Fraction::Input()
{
	char divSign;
	cin >> numerator >> divSign >> denominator;
}

void Fraction::Show()
{
	cout << numerator << '/' << denominator;
}

int Fraction::GetNumerator()
{
	return numerator;
}

int Fraction::GetDenominator()
{
	return denominator;
}

void Fraction::SetValue(int n, int d)
{
	numerator = n;
	denominator = d;
}

double Fraction::Evaluate()
{
	double n = numerator;
	double d = denominator;
	return (n / d);
}