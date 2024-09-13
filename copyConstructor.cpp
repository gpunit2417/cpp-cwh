#include<iostream>
using namespace std;

class Number{
    int a;
    public:
    Number(){
        a = 0;
    }

    Number(int num){
        a = num;
    }

    //no need to create below constructor as we will get the same output as by using it..
    //when no copy constructor is created then compiler supplies its own copy constructor...
    // Number(Number &obj){
    //     cout<<"copy constructor called "<<endl;
    //     a = obj.a;
    // }

    void display(){
        cout<<"the number of this object is "<<a<<endl;
    }
};

int main(){
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();
    Number z1(x);   //copy constructor invoked
    z1.display();

    z2 = z;          // copy constructor not invoked
    

    Number z3 = z;   //copy constructor invoked
    z3.display();
    return 0;
}