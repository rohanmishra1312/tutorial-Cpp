#include <iostream>
using namespace std;

int main(){
   int num1, num2, num3;
   cin >> num1 >> num2 >> num3;

   if(num1>num2 && num1>num3){
      cout<<num1<<" is maximum"<<endl;
   }
   else if(num2>num3 && num2>num1){
      cout<<num2<<" is maximum"<<endl;
   }else{
      cout<<num3<<" is maximum"<<endl;
   }
   return 0;


}