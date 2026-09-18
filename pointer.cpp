#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
    cout << "Memory address pointed to by ptr: " << ptr << endl;
    cout << "Value at pointer: " << *ptr << endl;
}

int main() {
    int a = 23;
    int *x = &a;
    analyze_pointer(x);
    return 0;
}
