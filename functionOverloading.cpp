#include<iostream>
using namespace std;

int ass(int a, int b){
    return a + b;
}

int ass(int a, int b, int c){
    return a + b + c;
}

int main(){
    cout<<"the sum with 2 arguments "<<ass(3, 6)<<endl;
    cout<<"the sum with 3 arguments "<<ass(3, 5, 7);
    return 0;
}