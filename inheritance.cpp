#include<iostream>
using namespace std;

//base class
class employee{
    public:
    int id;
    float salary;
    employee(int inpid){
        id = inpid;
        salary = 34.0;
    }
    employee(){}
};

//derived class syntax
// class {derived-class-name} : {visibility-mode} { base class name}{
//     function body....
// }
// Note:
// 1. private member cannot be inherited.
// 2. default visibility is private.
// 3. private visibility: public member of the base class becomes private member for the derived class.
// 4. public visibility: public members of the base class becomes public member for the derived class.

class programmer :  public employee{
    public:
    //default constuctor for the base class should be there for this class to inherit the above base class.
    programmer(int inpid){
        id = inpid;
    }

    int languageCode = 9;
    void getData(){
        cout<<id<<endl;
    }
};

int main(){
    employee rohan(1), saksham(2);
    cout<<rohan.salary<<endl;
    cout<<saksham.salary<<endl;

    programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    cout<<skillF.id<<endl;  //will throw error if base class is privately inherited....
    skillF.getData();
    return 0;
}