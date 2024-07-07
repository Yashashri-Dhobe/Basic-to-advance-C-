#include <iostream>
using namespace std;

int main() {
    
    int num;
    cout << "enter an integer\n";
    cin >> num;
    
    if (num >= 100 && num <=999){
        cout << num << " is a three digit number\n";
    }
    else {
        cout << num << " is not a three digit number\n";
    }
    return 0;
}