#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int number, dSalry;
    float phour, tSalary;
    cin>>number>>dSalry>>phour;
    tSalary=dSalry*phour;
    cout<<"NUMBER = "<<number<<endl<<"SALARY = U$ "<<fixed<<setprecision(2)<<tSalary<<endl;
    return 0;
}
