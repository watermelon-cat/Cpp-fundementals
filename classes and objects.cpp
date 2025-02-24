#include <iostream>
using namespace std;

// The Car class definition
class Car {
public:
    // Attributes (variables) of a car
    string color;
    int year;
    string make;

    // Constructor to initialize the Car object
    Car(string c, int y, string m) {
        color = c;  // Set the color of the car
        year = y;   // Set the year of the car
        make = m;   // Set the make of the car
    }

    // Function to display the details of the car
    void displayDetails() {
        cout << "Car details: " << endl;
        cout << "Color: " << color << endl;
        cout << "Year: " << year << endl;
        cout << "Make: " << make << endl << endl;
    }
};

class Bike {
public:
    // Attributes (variables) of a bike
    string color;
    string type;
    char size;

    // Constructor to initialize the bike object
    Bike(string c, string t, char s) {
        color = c;  // Set the color of the bike
        type = t;   // Set the year of the bike
        size = s;   // Set the make of the bike
    }

    // Function to display the details of the car
    void displayDetails() {
        cout << "Bike details: " << endl;
        cout << "Color: " << color << endl;
        cout << "Type: " << type << endl;
        cout << "Size: " << size << endl << endl;
    }
};

int main() {
    // Creating an object of Car
    Car myCar("Red", 2021, "Toyota");
    // Creating another object of Car
    Car mySecondCar("Blue", 2019, "Ford");
    // Creating my 3rd object of a car
    Car mythirdCar("Black", 1963, "Chevrolet");

    //creating an object for my bike
    Bike mybike("Blue", "mountain", 'l');
    Bike mysecondbike("Purple", "racing", 'm');
    Bike mythirdbike("Yellow", "offroad", 's');

    // Display details of cars
    myCar.displayDetails();
    mySecondCar.displayDetails();
    mythirdCar.displayDetails();

    //display details of my bikes
    mybike.displayDetails();
    mysecondbike.displayDetails();
    mythirdbike.displayDetails();

    return 0;
}
