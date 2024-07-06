// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int year;
    cout<<" Enter a year\n";
    cin >> year ;
    
    if ( year % 100 ==0 ) {
        cout << year << " is a century year \n";
    }
    else {
        cout << year << " is not a century year\n";
    }
    return 0;
}