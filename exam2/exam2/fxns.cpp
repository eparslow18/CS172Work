////////////////////////
//Elisha Parslow
//CSII Exam 2 
//Two Dimensional Dynamic Array 
//4/8/2016

#include <iostream>
using namespace std;

int** fillArray(unsigned int numRows, unsigned int numCols)
{
	int** My2DArray; 
	
	My2DArray = new int*[numRows];//creating a new array and filling it with the row contents
	

	for (int i = 0; i < numRows; i++) {
		My2DArray[i] = new int[numCols];//second dimension, creating a new array within the array that holds the columns

		for (int j = 0; j < numCols; j++) {
			cout << "Number at position " << i << "," << j << "? ";
			cin >> My2DArray[i][j];
		}
	}
	return My2DArray;
}

void deleteArray(int** A, int size)
{
	for (int j = 0; j < size; j++)//deleting the contents inside of the 2d array first 
	{
		delete[] A[j];
	}
	delete[] A;//delete the array once its contents are cleaned

}
