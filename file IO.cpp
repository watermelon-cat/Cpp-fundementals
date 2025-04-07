#include<iostream>
#include<fstream>
using namespace std;

//write a program that writes the multiples of 10 (from 1-100)
// to a text file, and another that prints them back out

//int main() {
//	ofstream outfile("potato.txt"); // creates a new file to write to
//
//	for (int i = 0; i <= 100; i += 10)
//		outfile << i << endl;
//
//	outfile.close();
//}

int main() {
	ifstream infile("potato.txt");
	int number;
	for (int i = 0; i <= 10; i++) { // for loops for when you know num of lines
		infile >> number;
		cout << number << endl;
	}

	while (infile >> number) { // always good, esp for when you don't know the number of lines
		cout << number << endl;
	}

	infile.close();
}
