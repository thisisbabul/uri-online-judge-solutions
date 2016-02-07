#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a, b;
    float r;
    cin>>a>>b;
    r=(float)a*(b/12.0);
    cout<<fixed<<setprecision(3)<<r<<endl;
    return 0;
}
