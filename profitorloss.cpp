#include <iostream>
using namespace std;
int main(){
    int c,s;
    cout<<"Enter the Cost Price: ";
    cin>>c;
    cout<<"Enter the Selling Price: ";
    cin>>s;
    if(s>c){
        cout<<"Profit of $"<<s-c;

    }
    if(s==c){
        cout<<"No Profit or Loss";
    }
    if(s<c) {
        cout<<"Loss of $"<<c-s;
    }
}