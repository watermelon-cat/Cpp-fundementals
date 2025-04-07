//ctrl + k and ctrl + c to comment out code
//ctrl + k and ctrl + u to uncomment code
// create the file and write the code
// next comment out the int main that creates the file and write the code to read the file using ifstream
// run the code 

#include<iostream>
#include<fstream> //needed for ofstream and ifstream
#include<cstdlib>
#include<ctime>
#include<Windows.h>

using namespace std;

int main() {
	srand(time(NULL)); //seed the random number generator

	int numNotes; // set up variable
	cout << "type a number" << endl; //ask the user for a number
	cin >> numNotes; // stores the variable

	ofstream outfile("notes.txt");

	if (!outfile) {
		cout << "Error: Could not create notes.txt" << endl;
		return 1;
	}
	for (int i = 0; i <= numNotes; i++) { // set up a for loop that runs the user-generated number
		int randomfq = rand() % 1000;		// get a random num for freq
		int randomdur = rand() % 1000;		//get a random number for duration
		int randomcolor = rand() % 15 + 1; // third value that changes the color of the console text
		outfile << randomfq << " " << randomdur << " " << randomcolor << endl; // output both to the file
	}

	cout << "notes.txt has been created with " << numNotes << " random notes." << endl;
	outfile.close();

	return 0;
}

//int main() {
//	ifstream infile("notes.txt");
//
//	if (!infile) {
//		cout << "Error: could not open notes.txt" << endl;
//		return 1;
//	}
//
//	int randomfq, randomdur, randomcolor;
//	while (infile >> randomfq >> randomdur >> randomcolor) {
//		cout << "Playing: " << randomfq << " Hz for " << randomdur << " ms" << endl;
//		Beep(randomfq, randomdur);
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), randomcolor);
//	}
//
//	infile.close();
//	return 0;
//}
