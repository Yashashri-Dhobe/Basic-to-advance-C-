#include<iostream>
using namespace std;

int main ()
{
    
    int angle;
    cout << " Enter the angle in degrees\n";
    cin >>angle ;
    
    if ( angle > 0 && angle < 90) {
        cout << " Acute angle\n";
    }
    else if (angle == 90) {
        cout << " Right angle\n";
    }
    else if ( angle > 0 && angle < 180) {
        cout << " Obuse angle\n";
    }
    else {
        cout << " invalid angle\n";
    }
    return 0;
}