#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i<1;i++){
        if(a+b+c==180){
            if(a==90 || b==90 || c==90){
                cout<<"Prize 2";
                break;
            }
            if(a==60 && b==60 && c==60){
                cout<<"Prize 3";
                break;
            }
            cout<<"Prize 1";
            break;
        }
        else{
            cout<<"No Prize";
        }
    }
    return 0;
}
