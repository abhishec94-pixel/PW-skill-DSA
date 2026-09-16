#include<iostream>
using namespace std;
int main (){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    if(x%3==0){
        
        if(x%5==0){
            cout<<"Divisible by both 3 and 5";

        }
        else {
            cout<<"not matching the conditions";
        }

    }
    else {
            cout<<"not matching the conditions";
        }

}