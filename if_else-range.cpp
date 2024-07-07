#include <iostream>
using namespace std;

int main() {
    
    int num, min, max;
    cout << "Enter the num, min, and max\n";
    cin >> num >> min >> max;
    
    if ( num >= min && num <= max){
        cout << "number is within the range\n";
    }
    else {
        cout << "number is not within the range\n";
    }
    return 0;
}