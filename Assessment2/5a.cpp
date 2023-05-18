#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int r;
    int x1,y1;
    int x0,y0;
    int x2,y2;
    cin>>r>>x1>>y1>>x0>>y0>>x2>>y2;
    int a=sqrt((x0-x1)*(x0-x1)+(y0-y1)*(y0-y1));
    int b=sqrt((x0-x2)*(x0-x2)+(y0-y2)*(y0-y2));
if(a<=r){
    if(b<=r){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
return 0;

}    