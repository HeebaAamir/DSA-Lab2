#include <iostream>
#include <assert.h> // header file for assert function
using namespace std;

bool isSorted(const int *arr, const int size){}

void testSortedArray() { 
    int arr[] = {1, 2, 3, 4, 5}; 
    bool result = isSorted(arr, 5);
    assert(result == true);
}

void testUnSortedArray() { 
    int arr[] = {5,3,0,9,1}; 
    bool result = isSorted(arr, 5);
    assert(result == false);
}

void testArrayWithDuplicates() { 
    int arr[] = {1, 2, 5, 4, 5}; 
    bool result = isSorted(arr, 5);
    assert(result == false);
}

void testArrayWithSingleElement() { 
    int arr[] = {5}; 
    bool result = isSorted(arr, 1);
    assert(result == true);
}

void testArraySortedInDescendingOrder() { 
    int arr[] = {5,4,3,2,1}; 
    bool result = isSorted(arr, 5);
    assert(result == false);
}

void testArrayContainingNegativeValues() { 
    int arr[] = {-1, -2, 3, 4, 5}; 
    bool result = isSorted(arr, 5);
    assert(result == true);
}

void testArrayWithIdenticalElements() { 
    int arr[] = {3, 3, 3, 3, 3}; 
    bool result = isSorted(arr, 5);
    assert(result == true);
}

void testArrayWithNoElements() { 
    int arr[] = {}; 
    bool result = isSorted(arr, 0);
    assert(result == true);
}



int main() {
    return 0;
}