#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int R;
    cin>>R;
    double pi, re;
    pi=3.14159;
    re=(4/3.0*pi*R*R*R);
    cout<<"VOLUME = "<<fixed<<setprecision(3)<<re<<endl;
    return 0;
}
