#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int c=a%10;
    if(c==3 || c==8){
          cout<<"Lucky Winner";
    }
    else{
        cout<<"Not a Lucky Winner";
    }
    
    return 0;
}