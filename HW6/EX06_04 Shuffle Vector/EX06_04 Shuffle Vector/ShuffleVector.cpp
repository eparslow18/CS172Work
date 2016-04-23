//Elisha Parslow 
//EX06_04 Shuffle Vector 
//4/419/16

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
template <typename T>
void shuffle(vector<T>& v);


int main() {

	vector<int> values = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "The 10 int values from 1 - 10 randomized are: "<<endl;
	shuffle(values);
	for (int i = 0; i < values.size(); i++) {
		cout << values[i] +1 << endl;
	}
	return 0;
}

template <typename T>
void shuffle(vector<T>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		v[i] = i;
	}

	srand(time(0));
	for (int i = 0; i < v.size(); i++)
	{
		int index = rand() % v.size();
		int temp = v[i];
		v[i] = v[index];
		v[index] = temp;
	}
}