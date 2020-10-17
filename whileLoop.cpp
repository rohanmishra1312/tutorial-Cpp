#include <iostream>
using namespace std;

int main(){
   // int rohan = 1;

   // while (rohan <= 5){
   //    cout << "Rohan is "<< rohan << endl;
   //    rohan = rohan+1;
   // }

   int x = 1;
   int number;
   int total = 0;
 
   while(x<= 5){
      cin >> number;
      total = total + number;
      x++;
   }

   cout << "your total is: " << total << endl;
   return 0;
}