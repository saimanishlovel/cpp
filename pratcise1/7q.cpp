#include <iostream>
using namespace std;
int main(){
    int h,s,sp;
    cin>>h>>s>>sp;
    int i=50;
    int ii=60,iii=100;
     switch (h,s,sp)
     {
     case h>i && s>ii && sp>iii:
         cout<<"10";
         break;
    case h>i && s>ii && sp<iii:
         cout<<"9";
         break;
    case  (s>ii && sp>iii && h<i):
         cout<<"8";
         break;
    case h>i &&  sp>iii && s<ii:         
         cout<<"7";
        break;
    case h>i || s>ii || sp>iii:
         cout<<"6";
        break;
    case h<i && s<ii && sp<iii:
          cout<<"5";
        break;    
     default:
        break;
     }
     return 0;
}
