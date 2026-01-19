#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int size=0;
    cout<<"Enter the size of element : ";
    cin>>size;

    int *code = new int[size];
    float *cost = new float[size];
    string *name = new string[size];
    
    for(int i= 0; i<size;i++){
        cout<<"Enter the name"<<i+1<<" = ";
        cin>>(name[i]);
        cout<<"Enter the code"<<i+1<<" = ";
        cin>>code[i];
        cout<<"Enter the cost"<<i+1<<" = ";
        cin>>cost[i];
        cout<<endl;
    }

    cout<<"\n---------------------------------------------------------"<<endl;
    cout.setf(ios::internal,ios::adjustfield);
    cout.width(15);
    cout<<"NAME";

    cout.setf(ios::internal,ios::adjustfield);
    cout.width(15);
    cout<<"CODE";

    cout.setf(ios::internal,ios::adjustfield);
    cout.width(15);
    cout<<"COST"<<endl;
    cout<<"---------------------------------------------------------"<<endl;

    for(int i=0; i<size; i++){
        cout.setf(ios::internal,ios::adjustfield);
        cout.width(15);
        cout<<name[i];
        cout.setf(ios::internal,ios::adjustfield);
        cout.width(15);
        cout<<code[i];
        cout.setf(ios::internal,ios::adjustfield);
        cout.width(15);
        cout<<cost[i];
        cout<<endl;
    }
    return 0;
}