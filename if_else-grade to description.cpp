#include<iostream>
using namespace std;

int main ()
{
    
    int marks;
    cout << "enter the marks\n ";
    cin >> marks; 
    
    if (marks >= 90){
    cout << "grade is A " <<endl;
    
    } else if (marks >= 80) {
    cout << "grade is B" <<endl ;
    
    }else if (marks >= 70){
    cout << "grade is C" <<endl;
    
    } else if (marks >=60){
    cout << "grade is D"<<endl;
    } else {
    cout << "grade is F " <<endl;
    }
    
    return 0;
    }