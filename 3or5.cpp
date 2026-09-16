#include <iostream>
using namespace std;
int main(){ 
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    if(x%3==0 || x%5==0){
        cout<<"Divisible";
    }
    else {
        cout<<"Not Divisible";
    }
}