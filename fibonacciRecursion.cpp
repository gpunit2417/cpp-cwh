#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return fibonacci(n-2) + fibonacci(n-1);
}

int main(){
    int a;
    cout<<"enter the value of a "<<endl;
    cin>>a;
    cout<<"the number in fibonacci series at position "<<a<<" is "<<fibonacci(a)<<endl;
    return 0;
}