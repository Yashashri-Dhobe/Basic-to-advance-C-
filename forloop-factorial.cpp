#include <iostream>
using namespace std;

int main() {
   
   int num , factorial=1;
   cout << "enter a number\n";
   cin>> num;
   
   for(int i = 1; i<=num ; i++){
   factorial*= i ;
   cout << "factorial is " << factorial <<endl;
   }
   
   return 0;
}
