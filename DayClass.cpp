#include<iostream>
#include<string>
using namespace std;

class dayType {
private:
	int num;
	string day[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
	int wrap(int i) {
		i %= 7;
		if (i < 0) { // you do this so if the num goes negitive it can still be apart of the list
			i += 7;
		}
		return i;
	}

public:

	//methods
	void setDay(int i) {
		day[i];
	}
	void printdat() {
		cout << day[num];
	}
	string getday() {
		return day[num];
	}
	string nextday() {
		return day[wrap(num + 1)];
	}
	string prevday() {
		return day[wrap(num - 1)];
	}
	string addDays(int i) {
		return day[wrap(num + i)];
	}

//constructor
	dayType() {
		num = 0;
	}
	dayType(int i) {
		num = wrap(i);
	}
};

int main() {
	dayType DAY(0);
	cout << "today: " << DAY.getday() << "\n";
	cout << "next: " << DAY.nextday() << "\n";
	cout << "previous: " << DAY.prevday() << "\n";
	cout << "add 8: " << DAY.addDays(8) << "\n";
}
