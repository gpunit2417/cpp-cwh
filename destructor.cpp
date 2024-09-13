#include<iostream>
using namespace std;

int count = 0;

class num{
    public:
    num(){
        count++;
        cout<<"calling the constructor "<<endl;
    }

    ~num(){
        cout<<"calling the destructor "<<endl;
        count--;
    }
};

int main(){
    cout<<"inside main function "<<endl;
    cout<<"creating first object n1 "<<endl;
    num n1;
    {
        cout<<"entering this block "<<endl;
        cout<<"creating two more objects "<<endl;
        num n2, n3;
        cout<<"exiting the block "<<endl;
    }
    cout<<"back to main "<<endl;

    return 0;
}