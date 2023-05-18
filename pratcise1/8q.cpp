#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    char d,e,f;
    cin>>a>>b>>c;
    cin>>d>>e>>f;
    for(int i=0;i<1;i++){
    if(a=b=c){
        cout<<"Bonanza";

    }
    else if (int(d)==int(e)==int(f))
    {
        /* code */
         cout<<"Bonanza";

    }
    else{
        cout<<"No Bonanza";
        break;
    }
    if(a==b==c && int(d)==int(e)==int(f)){
        cout<<"Double Bonanza";
    }}
return 0;
}