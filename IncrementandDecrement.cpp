#include<iostream>
using namespace std;
int main(){
    int x;
    x = 5;
    cout<<x<<endl;
    cout<<x++<<endl;//post increment -> x=x+1
    cout<<++x<<endl;//pre increment -> x=x+1
    cout<<x<<endl;
    cout<<x--<<endl;//post decrement-> x=x-1
    cout<<--x<<endl;//pre decrement-> x=x-1
    return 0;
}