#include <iostream>
#include <iomanip>
using namespace std;

//user defined Manipulator
ostream &currency(ostream &output){
    output<<" Rs";
    return output;
}

ostream &form(ostream &output){
    output.setf(ios::showpos);
    output.setf(ios::showpoint);
    output.fill('*');
    output.precision(2);
    output<<setiosflags(ios::fixed)<<setw(10);
    return output;
}
int main(){
    cout<<form<<7856.25<<currency<<endl;
    return 0;
}