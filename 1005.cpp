#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float a, b, r;
    cin>>a>>b;
    r=(a*3.5+b*7.5)/(3.5+7.5);
    cout<<fixed<<setprecision(5)<<"MEDIA = "<<r<<endl;
}
