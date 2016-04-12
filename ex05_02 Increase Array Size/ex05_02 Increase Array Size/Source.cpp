//Elisha Parslow
//4/4/16
//EX05_02 Increase Array Size 

#include <iostream>
using namespace std;

template <typename T>
T* doubleCapacity(const T* list, int size) {//added a template function
	
	static int doublesize = size * 2;//doubling the size
	T* doublelist = new T[doublesize];//applying doubled size to new array

	for (int i = 0; i < size; i++)//putting all data from list into doublelist
	{
		doublelist[i] = list[i];
	}

	cout << "New Array:" << endl;
	for (int i = 0; i < doublesize; i++)//display contents of new array, half the values will be random
	{
		cout << "Element = " << doublelist[i] << endl;
	}

	return doublelist;
}

int main(){
	cout << "Enter the size of your desired array. ";
	int size;
	cin >> size;
	
	int* firstArray = new int[size];

	cout << "Size  = " << size;
	cout << endl;
	for (int j = 0; j < size; j++)//assigning numbers to the first array
	{
		firstArray[j] = j;

	}
	for (int i = 0; i < size; i++)
	{
		cout << "Element at " << i +1 << "= " << firstArray[i] << endl; //see the contents before the array is doubled
	}

	firstArray = doubleCapacity(firstArray, size);//call fxn

	delete firstArray;
	return 0;
}