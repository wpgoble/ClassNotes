#include <iostream>
#include "frac.h"

using namespace std;

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