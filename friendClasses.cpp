#include<iostream>
using namespace std;

//forward declaration
class complex;

class Calculator{
    public:
    int add(int a, int b){
        return a+b;
    }
    int sumRealComplex(complex o1, complex o2);
    int sumCompComplex(complex o1, complex o2);
};

class complex{
    int a;
    int b;
    public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }

    //individually declaring functions as friends
    // friend int Calculator :: sumRealComplex(complex o1, complex o2);
    // friend int Calculator :: sumCompComplex(complex o1, complex o2);

    //aliter: declaring entire class
    friend class Calculator;
    void printNumbers(){
        cout<<"your complex number is "<<a<<" + i"<<b<<endl;
    }
};

int Calculator :: sumRealComplex(complex o1, complex o2){
    return (o1.a + o2.a);
}
int Calculator :: sumCompComplex(complex o1, complex o2){
    return (o1.b + o2.b);
}

int main(){
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 6);

    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout<<"the sum of the real parts is "<<res<<endl; 
    int resc = calc.sumCompComplex(o1, o2);
    cout<<"the sum of the real parts is "<<resc<<endl; 
    return 0;
}