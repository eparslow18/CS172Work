//Elisha Parslow
//3/31/2016
//EX)5_01 Analyze Input

#include <iostream>
using namespace std;
int main() {

	cout << "Enter the size of your array. ";
	int x; 
	cin >> x;
	int* size = new int[x];//new array of size of x to make x constant 
	
	for (int i = 0; i < x; i++)//loop to add values to the 
	{
		cout << endl << "Enter a number for the array memory location of " << size[i] <<" ";
		int y;
		cin >> y;
		size[i] = y;
	}
	double sum = 0; //double because for average
	for (int i = 0; i < x; i++) //gather the sum of the contents of the array 
	{
		sum += size[i];
	}

	cout << "The average of the integers in the array is " << sum / x << endl;
	int count = 0;
	for (int j = 0; j < x; j++)//count the contents above the average above
	{
		if (size[j] > (sum / x))
		{
			count++;
		}
	}
	if (count = 1)
	{
		cout << "There is " << count << " number in the array above the average. " << endl;
	}
	else
	{
		cout << "There are " << count << " numbers in the array above the average. " << endl;

	}

	return 0;
}
