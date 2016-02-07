#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    string name;
    double salary, soldValue,r,fr;
    getline(cin,name);
    cin>>salary>>soldValue;
    r=(soldValue*15)/100;
    fr=r+salary;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<fr<<endl;
    return 0;
}
