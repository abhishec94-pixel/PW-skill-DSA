#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the sides of Triangle : ";
    cin>>a>>b>>c;
     if (a+b>c && a+c>b && b+c>a){
        cout<<"Sides of Triangle";
     }
     else { 
        cout<<"Not a sides of Triangle";
     }
}