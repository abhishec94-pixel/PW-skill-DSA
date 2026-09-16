#include<iostream>
using namespace std;
int main (){
    char ch;
    cout<<"Enter the symbol : ";
    cin>> ch;
    int y;
    y=(int)ch;
    if((y>64 && y<91)|| (y>96 && y<123)){
        cout<<"Alphabet";

    }
    else{
        cout<<"Not an Alphabet";
    }
}