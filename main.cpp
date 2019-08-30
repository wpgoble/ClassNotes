#include <iostream>
#include "frac.h"

using namespace std;

int main()
{

	Fraction f1, f2;
	Fraction f3(3, 4), f4(6);

	cout << "The fraction f1 is ";
	f1.Show();

	cout << "\nThe fraction f1 is ";
	f2.Show();

	cout << "\nThe fraction f1 is ";
	f3.Show();

	cout << "\nThe fraction f1 is ";
	f4.Show();

	cout << "\nNow enter your first fraction ";
	f1.Input();
	cout << "\nYou entered: " << f1;

	cout << "\nNow enter your second fraction ";
	cin >> f2;
	cout << "\nYou entered: " << f2;

	cout << "\nThe value of fraction 1 is " << f1.Evaluate() << '\n';
	cout << "\nThe value of fraction 2 is " << f2.Evaluate() << '\n';

	cout << "Goodbye!\n";

	return 0;
}