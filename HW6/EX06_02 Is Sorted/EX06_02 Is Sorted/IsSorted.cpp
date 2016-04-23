//Elisha Parslow 
//EX06_02 Is Sorted?
//4/19/16

#include <iostream>
#include <string>
using namespace std;

template<typename T>
bool isSorted(const T list[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (list[i] > list[i + 1])//checking if i is less than the element following it
			return false;
	}
	return true;
}

int main() {
	cout << "0 = Not Sorted. 1 = Sorted!" << endl;
	int array1[5] = { 1,2,3,4,5 };
	int array2[5] = { 4,6,2,8,4 };
	cout <<"Array1 of intergers " << isSorted(array1, 5) << endl;
	cout <<"Array2 of intergers "<< isSorted(array2, 5) << endl;

	double array3[4] = { 2.5, 80.5 ,70.1,2.3 };
	double array4[4] = { 1.3,7.8,9.5,45.5 };
	cout << "Array3 of doubles " << isSorted(array3, 4)<<endl;
	cout << "Array4 of doubles " << isSorted(array4, 4)<<endl;

	string array5[3] = { "apple", "cake", "dog" };
	string array6[3] = { "dog", "cake", "apple" };
	cout <<"Array5 of strings " << isSorted(array5, 3)<<endl;
	cout << "Array6 of strings " << isSorted(array6, 3)<<endl;

	return 0;
}