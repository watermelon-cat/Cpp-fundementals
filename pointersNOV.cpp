#include <iostream>
using namespace std;

int main() {
	//int num1, num2;
	//int* p;
	//p = &num1; // holds adress num1
	//*p = 10; //sets num1 to 10
	//p = &num2; // p now holds a new adress
	//*p = 20; // ONLY changes num 2's value
	//cout << "firstvalue is " << num1 << endl;
	//cout << "second value is " << num2 << endl;

	int x;
	int y;
	int* p = &x;
	int* q = &y;
	*p = 35;
	*q = 46;
	p = q;
	*p = 78;
	cout << x << " " << y << endl;
	cout << *p << " " << *q << endl;


}
