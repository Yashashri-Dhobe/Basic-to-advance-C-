// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int a, b;
    cout<<" Enter two numbers\n";
    cin >> a >> b ;
    
    if (a % b == 0){
    cout << a <<" is a multiple of " << b << endl; 
    }
    else {
        cout << a << " is not a multiple of " << b << endl;
    }
    return 0;
}