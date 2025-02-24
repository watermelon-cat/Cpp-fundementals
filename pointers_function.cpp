#include <iostream>
using namespace std;

// Function to increment the values of two integers by 1
void increment(int* x, int* y) {
    *x = *x + 1;  // Increment the value pointed to by x
    *y = *y + 1;  // Increment the value pointed to by y
}

void swap(int* x, int* y) {
    *x = *y;
    *y = *x;
}

int main() {
    int a = 5;
    int b = 8;

    cout << "Original values:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Calling the increment function
    swap(&a, &b);

    cout << "Values after incrementing:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
