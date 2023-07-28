#include<iostream>
#include<string>
#include"Swapper.h"

using namespace std;

template <class T>
T getBigger(T a, T b);
template <class T>
T getSmaller(T a, T b);
int main()
{
	Swapper<int>intSwapper(5, 10);//way to instantiate template classes
	Swapper<string>strSwapper("John", "Bob");
	string name1 = "John";
	string name2 = "Alice";

	int bigNum = getBigger(11, 5);
	string bigStr = getBigger(name1, name2);
	int smallNum = getSmaller(11, 5);
	string smallString = getSmaller(name1, name2);

	cout << bigNum << endl;
	cout << bigStr << endl;
	cout << smallNum << endl;
	cout << smallString << endl;
	cout << endl << endl;
	cout << "Testing swapper..." << endl;
	cout << intSwapper.getFirst() << " - "<<intSwapper.getSecond() << endl;
	cout << strSwapper.getFirst() << " - " << strSwapper.getSecond() << endl;
	cout << endl << endl;

	intSwapper.swap();
	strSwapper.swap();

	
	cout << "After swapping..." << endl;
	cout << intSwapper.getFirst() << " - " << intSwapper.getSecond() << endl;
	cout << strSwapper.getFirst() << " - " << strSwapper.getSecond() << endl;
	
	return 0;
}
template <class T>
T getBigger(T a, T b)
{
	if (a > b)
	{
		return a;
	}
	return b;
}
template <class T>
T getSmaller(T a, T b)
{
	if (a < b)
	{
		return a;
	}
	return b;
}