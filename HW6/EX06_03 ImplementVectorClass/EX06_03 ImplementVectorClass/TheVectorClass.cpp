//Elisha Parslow 
//EX06_03 Implement the Vector Class
//4/19/16

#include <iostream>

#include "Vector.h"
using namespace std;


int main() {

	vector<int> yourMOM;
	if (yourMOM.empty()== true) {
		cout << "its empty\n";
	}
	else {
		cout << "Its not empty\n";
	}

	for (int i = 0; i < 20; i++) {
		yourMOM.push_back(5);
	}
	cout << "size is: " << yourMOM.size1() << endl;

	return 0;
}