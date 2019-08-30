#include <iostream>
#include "frac.h"

using namespace std;

int main()
{

	Fraction f1, f2;
	Fraction f3(3, 4), f4(6);

	cout << "The fraction f1 is ";
	f1.Show();

	cout << "\n The fraction f1 is ";
	f2.Show();

	cout << "\n The fraction f1 is ";
	f3.Show();

	cout << "\n The fraction f1 is ";
	f4.Show();

	cout << "\n Now enter your first fraction ";
	f1.Input();
	cout << "\n You entered: ";
	f1.Show();

	cout << "\n Now enter your second fraction ";
	f2.Input();
	cout << "\n You entered: ";
	f2.Show();

	cout << "\n The value of fraction 1 is" << f1.Evaluate() << '\n';
	cout << "\n The value of fraction 2 is" << f2.Evaluate() << '\n';

	cout << "Goodbye!\n";

	return 0;
}