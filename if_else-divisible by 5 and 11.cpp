// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int num;
    cout<<" enter a number\n";
    cin >> num ;
    
    if (num % 5 == 0 && num % 11 == 0) {
        cout << num << " is divisible by 5 and 11\n";
    }
    else {
        cout << num << " is not divisible by 5 and 11\n";
    }
    return 0;
}