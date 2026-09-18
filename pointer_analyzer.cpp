#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
    cout << "Memory address pointed to by ptr: " << ptr << endl;
    cout << "Value at pointer: " << *ptr << endl;
}

int main() {
    int a = 23;
    analyze_pointer(&a);

    int *x = new int;
    *x = 46;
    analyze_pointer(x);
    delete x; // Free the allocated memory
    return 0;
}