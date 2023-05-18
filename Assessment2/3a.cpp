#include <iostream>
using namespace std;
#include <modules
int main(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    for(int i=0;i<x2;i++){
       if(x1<x2){
        cout<<"right"<<endl;
       }
       else{
        cout<<"left"<<endl;
       }
    }
    for(int j=0;j<y2;j++){
        if(y1<y2){
            cout<<"up"<<endl;
        }
        else{
            cout<<"down"<<endl;
        }
    }
    return 0;
}