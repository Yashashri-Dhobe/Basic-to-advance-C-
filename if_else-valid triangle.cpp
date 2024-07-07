#include <iostream>
using namespace std;

int main() {
    
    int angle1, angle2, angle3;
    cout << "Enter three angles of triangle\n";
    cin >> angle1 >> angle2 >> angle3;
    
    if (angle1 + angle2 + angle3 ==180 ){
        cout << "triangle is valid\n";
    }
    else {
        cout << "triangle is not valid\n";
    }
    return 0;
}