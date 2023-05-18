#include <iostream>
using namespace std;

int main(){
     int a,b,c,d,e;
     cin>>a>>b>>c>>d>>e;
    int sum=a+b+c+d+e;
    float avg=sum/5;
    int list[5]={a,b,c,d,e};
    for(int i=0;i<5;i++){
        if(list[i]<2){
            cout<<"No";
            break;


        }
        else if (avg<4)
        {
            /* code */
            cout<<"No";
            break;
        }
        else{
            cout<<"Yes";
            break;
        }
        
    }
    return 0;
}