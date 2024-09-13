#include<iostream>
#include<string>
using namespace std;

class binary{
    string s;
    public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary :: read(void){
    cout<<"enter a binary number "<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for(int i=0; i<s.length(); i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"incorrect binary number "<<endl;
            exit(0);
        }
    }
}

void binary :: ones(void){
    for(int i=0; i<s.length(); i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}

void binary :: display(void){
    cout<<"displaying a binary compliment "<<endl;
    for(int i=0; i<s.length(); i++){
        cout<<s.at(i);
    }
}
int main(){
    //oops -->  class and objects

    // c++ -> initially called --> c with classes by bjarne stroustroup
    // classes are extensions of structures in c
    // structures has limitations:
    //     members are public
    //     no methods
    // classes --> structures + more
    // classes can have properties and methods
    // classes can have few member as public and few as private
    // structures in c++ are typedefed
    // you can declare objects with the class declaration like this:
    //     class employee{
    //         class definition
    //     }obj, obj1, obj2:

    //nesting of member functions
    binary b;
    b.read();
    b.chk_bin();
    b.ones();
    b.display();
}