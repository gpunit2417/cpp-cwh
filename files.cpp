// #include<iostream>
// #include<fstream>

// the useful classes to work with files in c++;
// fstreambase
// ifstream --> derived from fstreambase
// ofstream --> derived from fstreambase

// #include<iostream>
// using namespace std;

// int main(){
//     string st = "Harry bhai";
//     // Opening files using constructor and writing it
//     ofstream out("sample60.txt"); // Write operation
//     out<<st;

//     return 0;
// }


#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st2;
    // Opening files using constructor and reading it
    ifstream in("sample60b.txt"); // Read operation
    in>>st2;
    getline(in, st2);  
    cout<<st2;

    return 0;
}
