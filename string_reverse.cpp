#include <iostream>
using namespace std;

void string_reverse(string *ptr){
    int length = ptr->length();
    for(int i=0; i<length/2; i++){
        char temp = (*ptr)[i];
        (*ptr)[i] = (*ptr)[length-1-i];
        (*ptr)[length-1-i] = temp;
    }
}

int main() {
    string *message = new string;
    string text;
    cout << "Enter the text to be reversed: " << endl;
    getline(cin, text);
    *message = text;
    string_reverse(message);
    cout << "Reversed text: " << *message << endl;
    delete message; // Free the allocated memory
    return 0;

}