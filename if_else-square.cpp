#include <iostream>
using namespace std;

int main() {
    
    int length, width;
    cout << "Enter the length and width of a rectangle\n";
    cin >> length >> width;
    
    if (length == width){
        cout << " the rectangle is a square\n";
    }
    else {
        cout << " the rectangle is not a square\n";
    }
    return 0;
}