#include <iostream>

using namespace std;

int main(){
    float num;
    cout<<"Enter an integer value : ";
    cin>>num;

    cout<<"The hexadecimal, octal and decimal representation of "<<num<<"is : ";

    cout.setf(ios::hex, ios::basefield);
    cout<<num<<" ,";
    cout.setf(ios::oct,ios::basefield);
    cout<<num<<" , ";
    cout.setf(ios::dec,ios::basefield);
    cout<<num<<endl;

    // cout.setf(ios::scientific,ios::floatfield);
    // cout<<"Your Scientific number is : "<<num<<endl;

    cout.setf(ios::left,ios::adjustfield);
    cout.width(10);
    cout<<num<<"Hello world"<<endl;

    cout.setf(ios::right,ios::adjustfield);
    cout.width(10);
    cout<<num<<endl;

    cout.setf(ios::internal,ios::adjustfield);
    cout.width(10);
    cout<<num<<endl;
    return 0;
}