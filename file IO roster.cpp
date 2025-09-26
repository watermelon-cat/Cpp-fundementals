#include<iostream>
#include<fstream>
using namespace std;
//write a c++ program that maneges a small class roster. The program should : Read from a file called roster.txt
//Each line of the file has a student's name (string) followed by their grade (integer), like this:
// Even 95
//Alejandro 82
//Ezri -45987234
// After reading, print out all the students and their grades/ Ask the user to add a new student (name and grade). Save the updated roster back into roster.txt

int main() {
	string names[100]; // array to hold names
	int grades[100]; // array to hold grades
	int n = 0; //interger to keep track of how many students in the file
	//ifstream to read from file

	ifstream in("roster.txt");
	while (in >> names[n] >> grades[n])
		n++; //read all the current students
	in.close();

	cout << "Current roster: \n";
	for (int i = 0; i < n; i++)
		cout << names[i] << " " << grades[i] << "\n";

	cout << "\nEnter a students name: ";
	cin >> names[n];
	cout << "Enter grade: ";
	cin >> grades[n];
	n++;

	ofstream out("roster.txt");
	for (int i = 0; i < n; i++)
		out << names[i] << " " << grades[i] << "\n";
	out.close();
}
