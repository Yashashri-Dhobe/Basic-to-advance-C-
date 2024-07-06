// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int a, b, c;
    cout<<" Enter three numbers\n";
    cin >> a >> b >> c ;
    
    if (a < b && a < c) {
        cout << a <<" is the smallest number\n";
    } 
    else if(b < a && b < c) {
        cout << b << "vis the smallest number\n";
    }
    else {
        cout << c << " is the smallest number\n";
    }
    return 0;
}