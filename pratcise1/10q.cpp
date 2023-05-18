#include <iostream>
using namespace std;
int main(){
    
    string a;
    cin>>a;
    if(a=="e" || a=="E"){
        cout<<"Early Bird Ticket";
    }
    if(a=="D" || a=="d"){
        cout<<"Discount Ticket";
    }
    if(a=="v" || a=="V"){
        cout<<"VIP Ticket";
    }
    if(a=="S"|| a=="s"){
        cout<<"Standard Ticket";
    }
    if(a=="C"|| a=="c"){
        cout<<"Child Ticket";
    }

    return 0;

}