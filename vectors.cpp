#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int num;
	string nameinput;
	int gradeinput;

	int mean = 0;
	int median = 0;
	int mode = 0;

	vector<string> name;   //declare string vector called name
	vector<int> grade;

	//Ask the user for the number of name/grade pairs that will be entered.
	cout << "How many name/grade pair will be added?\n";
	cin >> num;
	//Get each of the names and grades.
	for (int i = 0; i < num; i++) {
		cout << "Name? \n";
		cin >> nameinput;
		name.push_back(nameinput); //puts stuff into the vector
		cout << "Grade? \n";
		cin >> gradeinput;
		grade.push_back(gradeinput);
	}

	//mean
	vector<int>::iterator iter;
	for (iter = grade.begin(); iter != grade.end(); ++iter) {
		mean += *iter;
	}
	cout << "Mean: " << mean / num; //Display the mean of the grades

	//median
	//sort
	sort(grade.begin(), grade.end());

	if (num % 2 == 0){ //if size is even
		if (num == 2) 
			median = (grade[0] + grade[1]) / 2;
		else
			median = (grade[num / 2] + grade[(num / 2) - 1]) / 2;
	}
	else {
		median = grade[floor(num / 2)];
	}
	cout << endl;
	cout << "Median: " << median;

	//mode
	


}
