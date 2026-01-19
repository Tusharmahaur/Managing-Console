#include <iostream>
using namespace std;

int main(){
    int size = 20;
    char city[20];
    cout << "Enter a string :\n";
    cin>>city;
    cout<<"City name is: "<<city<<endl<<endl;
    cout<<"Enter the city name again: "<<endl;
    cin.getline(city,size);
    cout<<"City name now is: "<<city<<endl<<endl;
    cout<<"Enter the another city name: "<<endl;
    cin.getline(city,size);
    cout<<"City name is: "<<city<<endl<<endl;
    return 0;
}