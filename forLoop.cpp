#include <iostream>
using namespace std;

int main(){

   int whichTable;
   cout<<"Please tell which table should I print"<<endl;
   cin>>whichTable;

// for(initialization; condition; updation){
//    loop body
// }

   for( int i=1; i <=10; i++){
      cout<<whichTable*i<<endl;
   }

   return 0;
}