#include<iostream>
using namespace std;
int main(){
    int x,t,temp;
    cin>>x>>t;
    for(int i=0;i<1;i++){
        if(t<50){
            cout<<x*t;
            break;

        }
        if(50<t<=100){
            temp=(x*t*10)/100;
            cout<<x*t-temp;
              break;
        }
        if(100<t<=200){
            temp=(x*t*20)/100;
            cout<<x*t-temp;
              break;
        }
        if(200<t<=400){
            temp=(x*t*30)/100;
            cout<<x*t-temp;
          break;
        }
        if(400<t<=500){
            temp=(x*t*40)/100;
            cout<<x*t-temp;
          break;
        }
        if(t>500){
            temp=(x*t*50)/100;
            cout<<x*t-temp;
          break;
        }
    }
    return 0;
    
}