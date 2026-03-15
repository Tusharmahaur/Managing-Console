#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void print(string str){
            //these function to print any string 
            for(int i = 0; i<str.length(); i++){
                for(int j = 0; j<=i; j++){
                    cout<<str[j];
                }
                cout<<endl;//for every single line ending 
            }
        }
};

int main(){
    Solution T;
    string str;
    //inputting to string 
    cout<<"Enter the any name and anything : ";
    getline(cin,str);

    T.print(str);
    
    return 0;
}