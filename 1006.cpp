#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a, b, c, r;
    cin>>a>>b>>c;
    r=(2*a+3*b+5*c)/(2+3+5);
    cout<<"MEDIA = "<<fixed<<setprecision(1)<<r<<endl;
    return 0;
}
