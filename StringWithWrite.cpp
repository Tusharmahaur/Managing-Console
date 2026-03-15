#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    char *string1 = "C++  ";
    char *string2 = "Programming";
    string a = "sdfg";
    int m = strlen(string1);
    int n = strlen(string2);

    cout<<sizeof(a)<<endl;
    cout<<a.length()<<endl;
    cout<<a.size()<<endl;

    
    for(int i = 1; i<n; i++){
        cout.write(string2,i);
        cout<<endl;
    }

    for(int i = n;i>0 ; i--){
        cout.write(string1,i);
        cout<<endl;
    }
    cout.write(string1,m).write(string2,n);
    cout<<endl;

    cout.write(string1,10);

    return 0;
}