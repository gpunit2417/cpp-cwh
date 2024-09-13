#include<iostream>
using namespace std;
int c = 45;
int main(){
    int a, b, c;
    cout<<"enter the value of a "<<endl;
    cin>>a;

    cout<<"enter the value of b "<<endl;
    cin>>b;

    c = a + b;
    cout<<"the value of c after addition is "<<c<<endl;
    cout<<"the global value of c is "<<::c;
    return 0;
}
