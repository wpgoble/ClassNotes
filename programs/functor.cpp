#include<iostream>
using namespace std;

class Functor1
{
public:
	int operator()(int a, int b)
	{
		return a < b;
	}
};

class Functor2
{
public:
	int operator()(int a, int b)
	{
		return a * b;
	}
};

int main()
{
	Functor1 f;
	Functor2 g;

	int x, y;

	cout << "Input x and y (integers): ";
	cin >> x >> y;

	int ans1 = f(x, y);
	int ans2 = g(x, y);

	cout << "f(x, y) = " << ans1 << '\n';
	cout << "g(x, y) = " << ans2 << '\n';

	return 0;
}