#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the numbers: ";
    cin>>a>>b>>c;
    if((a>b && a>c) || (a==b && b>c)){
        cout<<a<<" is greatest";
    }
    if((b>a && b>c) || (b==c && c>a)){
        cout<<b<<" is greatest";

    }
    if((c>a && c>b)|| (c==a && a>b)) {
        cout<<c<<" is greatest";
    }
    if(a==b==c){
        cout<<"All are Equal";
    }
}