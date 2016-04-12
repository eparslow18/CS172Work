////////////////////////
//Elisha Parslow
//CSII Exam 2 
//Two Dimensional Dynamic Array 
//all of the instrucitions are in instructions.cpp I couldn't read the code well with all of the green comments 

#include <iostream>
using namespace std;
int** fillArray(unsigned int, unsigned int);
void deleteArray(int**, int);

// Don't change main()! It tests your code.
int main()
{
	int nR, nC; //Number of rows and columns
	cout << "How many rows? ";
	cin >> nR;
	cout << "How many cols? ";
	cin >> nC;

	//Create the array!
	int** myArray = fillArray(nR, nC);

	//Print the array to the screen!
	for (int i = 0; i < nR; i++) {
		for (int j = 0; j < nC; j++)
			cout << myArray[i][j] << " ";
		cout << endl;
	}

	//DESTROY!!!!
	deleteArray(myArray, nR);

	//The end! Ta da!
	return 0;
}
