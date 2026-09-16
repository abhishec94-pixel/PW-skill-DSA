#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the Character : ";
    cin>>ch;
    
    int x=(int)ch;

    if(x>=65 && x<=90 || x>=97 && x<=122){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='O' || ch=='U' || ch=='I'){
            cout<<"Vowel";
            
        }
        else{
            cout<<"Consonanant";
        }

    }
    else {
        cout<<"Not Alphabet";
    }
}