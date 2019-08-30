class Fraction
{
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