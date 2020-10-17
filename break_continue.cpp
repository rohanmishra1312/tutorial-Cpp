#include <iostream>
using namespace std;

int main(){
// Program for print 1 to 100 leaving all digits divisiblee by 3
   for (int i = 1; i<=100; i++)
   {
      if(i%3==0){
         continue;
      }
      cout<<i<<endl;
   }
   return 0;
} 