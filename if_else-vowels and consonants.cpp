#include <iostream>
using namespace std;

    int main() {
    
    char alpha; 
    cout << "enter an alphabet\n";
    cin >> alpha ;
    
    if (alpha == 'a' || alpha== 'e' || alpha== 'i' || alpha== 'o'|| alpha== 'u') {
    cout << "entered alphabet is  vowel\n ";
        
    } else{
    cout << "entered alphabet is a consonant\n " ;
    }
    
    return 0;
    }