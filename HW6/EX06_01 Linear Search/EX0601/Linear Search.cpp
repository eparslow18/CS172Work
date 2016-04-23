//Elisha Parslow
//EX06_01 Linear Search 
//4/19/16

#include <iostream>
#include <string>
using namespace std;

template <typename T>
int linearSearch(const T list[], T key, int arraySize) {//keep int for array size, can only be a whole number
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i;
	
	}
	return -1;
	
}


int main(){
	int array1[5] = { 1,2,3,45,67 };
	cout<<"The index of 5 is "<< linearSearch(array1, 5, 5)<<" therefore it is not part of the array" << endl;
	cout <<"The index of element 45 is "<< linearSearch(array1, 45, 5) << endl;

	double array2[3] = { 3.4, 56.8, 89.1 };
	cout << "The index of 34.2 is " << linearSearch(array2, 34.2, 3) << " therefore it is not part of the array" << endl;
	cout << "The index for 3.4 is " << linearSearch(array2, 3.4, 3) << endl;
	return 0;
}