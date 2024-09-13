#include<iostream>
using namespace std;

// class employee{
//     int id;
//     int salary;
//     public:
//     void setid(void){
//         salary = 122;
//         cout<<"the id of the employee is "<<endl;
//         cin>>id;
//     }

//     void getid(){
//         cout<<"the id of this employee is "<<id<<endl;
//     }
// };

// int main(){
//     employee fb[4];
//     for(int i=0; i<4; i++){
//         fb[i].setid();
//         fb[i].getid();
//     }
// }

class complex{
    int a;  //by default private member
    int b;  //by default private member
    public:
    void setData(int v1, int v2){
        a = v1;
        b = v2;
    }

    void setDataBySum(complex o1, complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumbers(){
        cout<<"the complex numbers are "<<a<<"+i"<<b<<endl;
    }
};

int main(){
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumbers();

    c2.setData(3, 4);
    c2.printNumbers();

    c3.setDataBySum(c1, c2);
    c3.printNumbers();
    return 0;
}