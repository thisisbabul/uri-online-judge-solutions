#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        float b, c, d, avg;
        cin>>b>>c>>d;
        avg=(b*2+c*3+d*5)/10;
        cout<<fixed<<setprecision(1)<<avg<<endl;
    }
    return 0;
}
