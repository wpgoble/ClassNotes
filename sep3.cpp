/*Notes from Sep 3*/
#include<iostream>
#include<vector>
using namespace std;

void Func(const int & x);
void Func(int && x);
int indexChoice(int x, int size);
const string& findMax(const vector<string> x);
const string& findMax2(const vector<string> x);

int main()
{
	int x, y;       //L-vlaues
	int list[10];   //L-value
	list[5] = 20;   //L-value
	int z = y + x; //z is an L-value, x + y are R-value

	cout << list;
	cout << z;

	vector<string> myList;
	myList[indexChoice(x, myList.size())];

	//to make this more efficient
	int whichItem = indexChoice(x, myList.size());
	myList[whichItem];

	/////////////////////////
	//  R-Value Reference  //
	/////////////////////////
	/*
	int &			//type design for L-value reference
	int && 			//type design for R-value reference
	*/

	int a, b, c;		
	int & r = a;
	int & r2 = a + b;	//Illegal. r2 is an L-value
	int && r3 = a + b;	//Legal because r3 is R-value

	a = 10;
	Func(a);		//calls the first Func
	Func(a + 5);	//calls the second Func

	//why use R-value reference
	List L3;
	L3 = L1 + L2;	//If this used R-val ref then 
					// it would make unnecessary amt of copies	

}

const string & findMax(const vector<string> & list)
{
	int maxIndex = 0;
    for (int i = 1; i < list.size(); i++)
    	if ( list[maxIndex] < list[i])
           maxIndex = i;

    return list[maxIndex];
}

const string & findMax2(const vector<string> & list)
{
	string maxValue = list[0];
    for (int i = 1; i < list.size(); i++)
    	if (maxValue < list[i])
        	maxValue = list[i];
 
    return maxValue;
}

void swap(vector<string> & x, vector<string> & y)
{
	vector<string> temp = x;
	x = y;
	y = temp;
}

//To imporve swap, write this:
void swap2(vector<string> & x, vector<string> & y)
{
	vector<string> temp = std::move(x);
	x = std::move(y);
	y = std::move(temp);
}