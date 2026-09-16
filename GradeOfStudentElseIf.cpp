#include<iostream>
using namespace std;
int main (){
    int r;
    cout<<"Enter the Marks";
    cin>>r;
    if(r>=91){cout<<"Excellent";}
    else if(r>=81){cout<<"Very Good";}
    else if(r>=71){cout<<"Good";}
    else if(r>=61){cout<<"Average";}
    else if (r>=51){cout<<"Below Average";}
    else if (r>=41){cout<<"Pass";}
    else {cout<<"Fail";}
}