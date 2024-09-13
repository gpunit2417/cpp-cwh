#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;   //static value need not to be initialised with zero... it is by default zero...
                        //all objects use single shared static variable 
    public:
    void setData(void){
        cout<<"enter the id "<<endl;
        cin>>id;
        count++;    
    }
    void getData(void){
        cout<<"the id of this employee is "<<id<< " and the count of this employee is "<<count<<endl;
    }
    static void getCount(void){
        cout<<"the value of count is "<<count<<endl;
    }
};

//count is the static data member
int employee :: count;  //punit, lovish, sohan are using single static variable count   


//static function is the one which can only access static members
//:: is the scope resolution operator

int main(){
    employee punit, lovish, sohan;
    punit.setData();
    punit.getData();
    employee::getCount();

    lovish.setData();
    lovish.getData();
    employee::getCount();

    sohan.setData();
    sohan.getData();
    employee::getCount();

    return 0;
}