#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    float a, b, c, r1, r2, d;
    cin>>a>>b>>c;
    d=(pow(b,2)-(4*a*c));
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    if(a!=0 && d>0){
        cout<<"R1 = "<<fixed<<setprecision(5)<<r1<<endl<<"R2 = "<<fixed<<setprecision(5)<<r2<<endl;
    }
    else{
        cout<<"Impossivel calcular"<<endl;
    }
    return 0;
}
