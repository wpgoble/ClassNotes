#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
using namespace std;

double Algorithm1(double n);
double Algorithm2(double n);
template<class T>
void PrintResult(const vector<T>& v, const vector<T> v2);

int main()
{
	vector<double> alg1;
	vector<double> alg2;

	for(int i = 0; i < 20; i++)
		alg1.push_back(Algorithm1(i));

	for(int i = 0; i < 20; i++)
		alg2.push_back(Algorithm2(i));


	PrintResult(alg1, alg2);

	return 0;
}

double Algorithm1(double n)
{
	return (100 * n) + (n*n);
}

double Algorithm2(double n)
{
	return (10 * n);
}

template<class T>
void PrintResult(const vector<T>& v, const vector<T> v2)
{
	cout << "-------------------------------------------\n";
	cout << setw(7) << "N" << setw(20) << "t(N) = 100N + N^2" << setw(15) << "t(N) = 10N";
	cout << endl;
	cout << "-------------------------------------------\n";
	for(int i = 0; i < v.size(); i++)
	{
		cout << setw(7) << i << setw(15) << v[i] << setw(15) << v2[i];
		cout << endl;
	}
}