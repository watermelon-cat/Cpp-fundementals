#include <iostream>
using namespace std;

int main() {
    int num = 100;          // An integer variable
    int* ptr;              // A pointer variable that can hold the address of an int

    ptr = &num;            // The address of var is assigned to ptr

    cout << "Value of num: " << num << endl;          // Print the value of var
    cout << "Address of num: " << &num << endl;       // Print the address of var
    cout << "Value of ptr (Address it holds): " << ptr << endl;  // Print the address stored in ptr
    cout << "Value at the address ptr points to: " << *ptr << endl; // Dereference ptr to get the value at the address it points to

    *ptr = 200;             // Change the value of var using the pointer
    cout << "New value of var: " << num << endl;     // Print the new value of var

    return 0;
}
