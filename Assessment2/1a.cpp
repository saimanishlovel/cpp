#include <iostream>
using namespace std;
int main(){
    int coin;
    cin>>coin;
    if(coin<1 || coin>9){
        cout<<"Invalid Input";
    }
    char a;
    cin>>a;
    int b=int(a);
    int c=int('y');
    
   if(b=c){
    cout<<coin+5;
   }
   else{
    cout<<0;
   }
   return 0;
}