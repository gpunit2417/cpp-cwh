#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }

    friend complex sum(complex o1, complex o2);
    void printNumbers(){
        cout<<"your complex number is "<<a<<" + i"<<b<<endl;
    }
};

complex sum(complex o1, complex o2){
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));   //will throw error as a and b are private data members of complex class
    //to access these data members friend functions comes in contact like used above...
    return o3;
}

int main(){
    complex c1, c2, c3;
    c1.setNumber(1, 4);
    c1.printNumbers();

    c2.setNumber(3, 8);
    c2.printNumbers();

    c3 = sum(c1, c2);
    c3.printNumbers();

    return 0;
}

// //properties of friend functions
// 1. not in the scope of the class
// 2. since 1., so it cannot be called from the object of that class. c1.sum() is invalid
// 3. can be invoked without the help of any object.
// 4. usually contanes the objects as arguments.
// 5. can be declared inside public or private section of the class.
// 6. cannot access the member directly by their names and need object name or member name to access any member.