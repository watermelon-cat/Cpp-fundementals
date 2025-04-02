#include <iostream>
#include <Windows.h>
using namespace std;

void randombeeps(int num);

int main() {
	int input;
	srand(time(NULL));
	cout << "type 1 for a low note, 2 for a medium note, and 3 for a high note" << endl;
	cin >> input;
	if (input == 1) {
		Beep(3000, 200);
	}
	else if (input == 2) {
		Beep(5000, 200);
	}
	else if (input == 3) {
		Beep(10000, 200);
	}

	cout << "how many notes do I play" << endl;
	cin >> input;
	for (int i = 0; i <= input; i++)
		Beep(2000, 200);

	cout << "put in a nummber" << endl;
	cin >> input;
	randombeeps(input);
}

void randombeeps(int num) {
	for (int i = 0; i <= num; i++) {
		int random = rand() % 10000 + 5000;
		Beep(random, random);
	}
}
