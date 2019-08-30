#include<vector>
#include<iostream>
using namespace std;
//Assuing that ptr is from the Node class from COP3330÷÷≥˘˘
void PrintReverse(Node* ptr)
{
	if(ptr->next != 0)		//Tests to see if the ptr is the last element of Linked list
	{
		PrintReverse(ptr->next);
	}

	cout << ptr->data << ' ';
}

// This funciton is taking advantage of the stack in order to print out the elements
// of the linked list.

//Template for classes
template < class T >
T maximum(T val1, T val2, T val3)
{
	// code here
}

//Template for functions
template < typename T >
T maximum2(T val1, T val2, T val3)
{
	// code here
}

//Template multi param type
template < typename T, typename S >
T maximum3(T val1, S val2, S val3)
{
	// code here
}

//C++ needs to know how much data to reserve for Template classes/funcs so 
// we need to pass in the header and definitions before we use Template
// This will only work for types that have operations that are used within the func
// this is why operation overloading is important

template < class T >
class List{};

class Fraction{};
//Remember with template classes  you need to instantiate the class type:
List<int> x;
List<double> y;
List<Fraction> z;

//remember that for protected labels only the onject of that class can view the data
// as well as child objects of the class

//Initializer List is used at: constant variables, (reference), inheritance, and
// objects within object has-a

//C++ 11 features:
class IntCell
{
public:
	explicit IntCell(int initialValue = 0) : storedValue{ initialValue} {}
	int read() const { return storedValue; }
	void write(int x) {storedValue = x; }
private:
	int storedValue;	
};

//the explicit tag prevent automatic type conversion
IntCell obj;
obj = 37; 		//this is not allowed because of the explicit tag

//Remember that the header files are meant to satisfy the rule:
//Declare before use.
//When working with templates, take advantage of #ifndef Name, #define Name, and #endif

//------------------------------------------------------//
Fraction f1;			//declare object, run default constructor
Fraction f2(2, 3);		//declare object, run constructor with 2 params
Fraction f3();			//function called f3, takes 0 params, and returns a function

// in C++ 11 only
Fraction f4{};			//equiv to f1 
Fraction f5{2, 3};		//equiv to f2

//same with 
int x0;
int x1 = 5;
int x2{5};

//More new features
//we're used to
int list[10];
int numbers[5] = {0, 1, 2, 3, 4};
int *list2 = new int[10];
//can't do this
int *num2 = new int[5] {0, 1, 2, 3, 4};

//same with vectors
vector<int> vec1 = {10, 20, 30};	//
vector<int> vec2{10, 20, 30};		//this is the same as vec1

//However...
vector<int> vec3(12);		//sets size
vector<int> vec4{12};		//value initialization

//Keyword auto no longer needs to specify the type
int i = 20;
auto ii = 20;
auto itr = vec1.begin();

//g++ -std=c++11 fileName.cpp

//ranged based for-loop
int array[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
for(int x : array)
{
	cout << x << '\n';
}

//to manipulate value
for(int& x : array)
{
	x = x * 3;
}

for(int x : array)
{
	cout << x << '\n';
}















