#include<iostream>
using namespace std;

void multipleofnum();
void addevennum();
void calculator();

int main() {
    calculator();
    addevennum();
    multipleofnum();

}

void multipleofnum() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 5 == 0)
        cout << num << " is a multiple of 5" << endl;
    else
        cout << num << " is not a multiple of 5" << endl;
}

void addevennum() {
    int n;
    int sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sum += i;
    }
    cout << "sum = " << sum;
}

void calculator() {
    double num1, num2;
    char op;
    cout << "enter two numbers and an operator (+, -, *, /, **): ";
    cin >> num1 >> num2 >> op;
    if (op == '+') {
        cout << "Result: " << num1 + num2;
    }
    else if (op == '-') {
        cout << "Result: " << num1 - num2;
    }
    else if (op == '*') {
        cout << "Result: " << num1 * num2;
    }
    else if (op == '/') {
        cout << "Result: " << num1 / num2;
    }
    else {
        cout << "Invalid operator!";
    }
}
