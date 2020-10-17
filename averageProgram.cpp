#include <iostream>
using namespace std;


int main(){
   int num1, num2;

   cout << "Welcome to average finder" << endl;
   cout << "Insert Number 1" << endl;
   cin >> num1;
   cout << "Insert Number 2" << endl;
   cin >> num2;

   float averageOfNumbers = (float)((num1 + num2)/2);

   cout << "Average is: " <<averageOfNumbers <<endl;

   return 0;
}