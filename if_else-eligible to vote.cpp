#include<iostream>
using namespace std;

int main ()
{
    int age;
    cout << "enter a number\n";
    cin >> age ;
    
    if (age >= 18){
        cout << "eligible to vote\n";
    }
    else{
        cout << "not eligible\n";
    }
    return 0;
}