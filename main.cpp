#include <iostream>
#include<stack>
#include<string>
using namespace std;
void storeString(string origString, stack<char>& reverseStack);
bool isPalindrome(string origString);
void printResult(string origString);


int main()
{
	string myWord = "madam";
	string yourWord = "ella";
	

	
	printResult(myWord);
	printResult(yourWord);
	

	return 0;
}
void storeString(string origString, stack<char>& reverseStack)
{
	
	for (char c : origString)
	{
		reverseStack.push(c);
	}
}

bool isPalindrome(string origString)
{
	stack<char>reverseStack;
	storeString(origString, reverseStack);
	
	bool result = true;
	for (char c : origString)
	{
		char currentString = reverseStack.top();
		if (c != currentString)
		{
			result = false;
			break;
		}
		reverseStack.pop();
	}

	return result;
}
void printResult(string origString)
{
	cout << "Is "<<origString<<" palindrom? " << boolalpha<<isPalindrome(origString) << endl;
}