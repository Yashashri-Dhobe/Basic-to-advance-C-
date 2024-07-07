include <iostream>
using namespace std;

int main() {
    
    int year;
    cout << "Enter a year\n";
    cin >> year;
    
    if ( year>= 2001 && year <= 2100){
        cout << "the year is in the 21st century\n";
    }
    else {
        cout << "the year is not in the 21st century\n";
    }
    return 0;
}