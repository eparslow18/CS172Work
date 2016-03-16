//Elisha Parslow
//3/8/2016
//EX03_01 Check Palindrome

#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
	cout << "Enter a word to check if it is a palindrome. ";
	string word;
	cin >> word;

	stack<char> palindrome;//create a stack of chars to individually sort through the letters 
	char p;

	bool checkPalindrome = true; //set true to output if it is a palindrome.

	for (int i = 0; i < word.size(); i++)
	{
		p = word.at(i); 
		palindrome.push(p);//store the letter at the top of the stack
	}

	for (int j = 0; j < word.size(); j++)
	{
		if (palindrome.top() == word[j]) //checking if the top is equal to the letter at that spot. If true then commit it
		{
			palindrome.pop();
		}
		else
		{
			checkPalindrome = false;//if not equal, not a palindrome
		}
	}


	

	if (checkPalindrome == true)
	{
		cout << word << " is a palindrome. " << endl;
	}
	else
	{
		cout << word << "is not a paindrome. " << endl;

	}



	return 0;
}