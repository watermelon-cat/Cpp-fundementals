#include <iostream>
using namespace std;

int main() {
	//simple pyramid
	int shape = 0;
	for (int i = 0; i < 10; i++) {
		for (int i = 0; i < shape; i++) {
			cout << "*" << " ";
		}
		cout << endl;
		shape += 1;
	}
	//inverted pyramid
	int shape2 = 10;
	for (int i = 0; i < 10; i++) {
		for (int i = 0; i < shape2; i++) {
			cout << "*" << " ";
		}
		cout << endl;
		shape2 -= 1;
	}
	//Simple rotated
	shape2 = 10;
	for (int i = 0; i < 10; i++) {
		for (int i = 0; i < shape2; i++) {
			cout << "  ";
		}
		for (int i = 10; i > shape2; i -= 1) {
			cout << "*" << " ";
		}
		cout << endl;
		shape2 -= 1;
	}
	//Inverted rotated
	shape2 = 10;
	for (int i = 0; i < 10; i++) {
		for (int i = 10; i > shape2; i -= 1) {
			cout << "  ";
		}
		for (int i = 0; i < shape2; i++) {
			cout << "*" << " ";
		}
		cout << endl;
		shape2 -= 1;
	}
	//Triangle
	shape2 = 10;
	for (int i = 0; i < 10; i++) {
		for (int i = 0; i < shape2; i++) {
			cout << " ";
		}
		for (int i = 10; i > shape2; i -= 1) {
			cout << "*" << " ";
		}
		cout << endl;
		shape2 -= 1;
	}
	shape2 = 10;
	for (int i = 0; i < 10; i++) {
		for (int i = 10; i > shape2; i -= 1) {
			cout << " ";
		}
		for (int i = 0; i < shape2; i++) {
			cout << "*" << " ";
		}
		cout << endl;
		shape2 -= 1;
	}
	//number pyramid
	shape = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < shape; j++) {
			cout << shape << " ";
		}
		cout << endl;
		shape += 1;
	}
	cout << endl;
	//continues number pyramid
	shape = 1;
	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < i; j++) {
			cout << shape << " ";
			shape += 1;
		}
		cout << endl;
	}
	// rotated number pyramid
	shape2 = 10;
	int count = 1;
	for (int i = 0; i < 5; i++) {
		for (int i = 0; i < shape2; i++) {
			cout << "  ";
		}
		for (int i = 10; i > shape2; i -= 1) {
			cout << count << " ";
			count += 1;
		}
		cout << endl;
		shape2 -= 1;
	}
	//palindrome triangle
	shape2 = 0;
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < j; i++) {
			cout << "  ";
		}
		for (int i = 10; i > j; i -= 1) {
			cout << shape2 << " ";
			shape2 += 1;
		}
		
		for (int i = 10; i > j; i -= 1) {
			cout << shape2 << " ";
			shape2 -= 1;
		}
		cout << shape2;
		cout << endl;
	}

}
