#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    float d,e,f;
    cin>>a>>d>>b>>e>>c>>f;
    float temp=a*d+b*e+c*f;
    int sum=a+b+c;
    cout<<float(temp/sum);

    return 0;
}