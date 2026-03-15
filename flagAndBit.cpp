#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter an integer value : ";
    cin>>num;

    cout<<"The hexadecimal, octal, decimal representation of "<<num<<"is : ";

    cout.setf(ios::hex, ios::basefield);
    cout<<num<<" ,";
    cout.setf(ios::oct,ios::basefield);
    cout<<num<<" , ";
    cout.setf(ios::dec,ios::basefield);
    cout<<num<<endl;
    
    int bin = 0x123;
    cout<<bin;

    // cout.setf(ios::scientific,ios::floatfield);
    // cout<<"Your Scientific number is : "<<num<<endl;

    // cout.setf(ios::left,ios::adjustfield);
    // cout.width(10);
    // cout<<num<<"Hello world"<<endl;

    // cout.setf(ios::right,ios::adjustfield);
    // cout.width(10);
    // cout<<num<<endl;

    // cout.setf(ios::internal,ios::adjustfield);
    // cout.width(10);
    // cout<<num<<endl;
    // return 0;
}