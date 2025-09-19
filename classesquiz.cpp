#include<iostream>
using namespace std;

class Car {
private:
	string make;
	string model;
	int year;
	int mileage;
public:
	//constuctor
	Car() {
		make = "Toyota";
		model = "Corolla";
		year = 2020;
		mileage = 19000;
	}

	void PrintInfo() {
		cout << year << " " << make << " " << model << ", " << mileage << " miles\n";
	}

	void drive(int miles) {
		mileage += miles;
	}
};

int main() {
	Car pe;

	pe.PrintInfo(); //print "2020 Toyota Corolla, 19000 miles"
	pe.drive(1000);
	pe.PrintInfo(); // print "2020 Toyota Corolla, 20000 miles"
}
