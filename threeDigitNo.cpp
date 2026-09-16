#include <iostream>
using namespace std;
int main (){
    int x;
    cout<<"Enter A Number: ";
    cin>>x;
    if(x<1000 && x>99){
        cout<<"Yes it is a three digit no.";
    }
    else {
        cout<<"No it is not an three digit no.";
    }
}