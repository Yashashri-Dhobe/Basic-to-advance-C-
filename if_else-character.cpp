#include <iostream>
using namespace std;

int main() {
    
    char ch;
    cout << "enter a character\n";
    cin >> ch;
    
    if (ch >= 'A' && ch <= 'Z'){
        cout << "The character is an uppercase letter\n";
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << "The character is an lowercase letter\n";
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "The character is a digit\n";
    }
    else {
        cout << "the characterr is a special character\n";
    }
    return 0;
}