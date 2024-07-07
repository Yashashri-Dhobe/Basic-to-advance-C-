#include<iostream>
using namespace std;

int main ()
{
    int side1,side2,side3;
    cout << "enter the lengths of the three sides of the triangle\n";
    cin >> side1 >> side2 >> side3 ;
    
    if (side1 == side2 && side2 == side3){
        cout << "equilateral triangle\n";
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1 ){
        cout << "isosceles triangle\n";
    }
    else {
        cout << "scalene triangle";
    }
    return 0;
}