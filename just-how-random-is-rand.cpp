#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int limit, var;
	cout << "Enter the range for the random numbers. \n2 yields a range of 0-1, 10 yields range 0-9.\n";
	cin >> limit;
	cout << "Talleying " << limit * 1000 << " randomly generated integers with range 0-" << limit - 1 << endl;
	cout << "Ideal count for each integer should be 1000" << endl << endl;
	int *myArray = new int[limit];
	for (int i = 0; i < limit; i++)					//all counts are initially zero
		myArray[i] = 0;
	for (int i = 0; i < limit * 1000; i++){			//generate random number and then increase talley for that number's frequency
		var = rand() % limit;
		myArray[var]++;
	}
	for (int i = 0; i < limit; i++)					//print results
		cout << i << ": " << myArray[i] << endl; 
}