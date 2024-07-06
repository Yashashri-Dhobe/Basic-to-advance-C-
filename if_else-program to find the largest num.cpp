// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int a, b, c ;
    cout << "enter three numbers:\n";
    cin >> a >> b >> c;
    
    if (a > b && a > c){
        cout<< c <<" is greater\n";
    }
    else if(b > a && b > c){
        cout<< b <<" is greater\n";
    } 
    else{
        cout<< c <<" is greater\n" ;   
    }
    
    return 0;
}