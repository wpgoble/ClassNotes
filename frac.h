#include <iostream>
using namespace std;

class Fraction
{
	friend Fraction operator+(const Fraction& f1, const Fraction& f2);
	friend Fraction operator-(const Fraction& f1, const Fraction& f2);
	friend ostream& operator<<(ostream& out, const Fraction& f1);
	friend istream& operator>>(istream& in, Fraction& f1);
public:
	Fraction();
	Fraction(int n, int d=1);

	void Input();
	void Show();

	int GetNumerator();
	int GetDenominator();

	void SetValue(int n, int d);

	double Evaluate();
private:
	int numerator;
	int denominator;
};