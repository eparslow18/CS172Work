//Elisha Parslow
//2/23/16
//HW2 EX03 Even Number Class

#include <iostream>
#include "EvenNumber.h"
using namespace std;
int main() {

	cout << "Enter an even integer. " << endl;
	int number;
	cin >> number;

	while (number % 2 != 0)
	{
		cout << "Please enter an even number. " << endl;
		cin >> number;
	}

	EvenNumber num1(number);
	cout << endl << "The previous even number is " << num1.getPrevious() << endl;
	cout << "The next even number is " << num1.getNext() << endl;

	return 0;
}