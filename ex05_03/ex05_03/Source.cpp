//Elisha Parslow
//4/4/16
//EX05_03 11.5 Find the Smallest Element

#include <iostream>
#include <algorithm>
using namespace std;

void findSmallestElement(int list[])
{
	int* min = min_element(list, list + 8);//search the entire array of 8 for the minimum

	cout << *min<< "is the minimum number" << endl; //cout -22 which is the min

}

int main() {
	
	int testArray[] = { 1, 2, 4, 5, 10, 100, 2, -22 };//define contents 

	findSmallestElement(testArray);

	return 0;
	
}