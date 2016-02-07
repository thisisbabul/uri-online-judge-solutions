#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double a, b, c, r;
    cin>>a>>b>>c;
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<(a*c)/2<<endl<<"CIRCULO: "<<(3.14159*c*c)<<endl<<"TRAPEZIO: "<<((a+b)*c)/2<<endl<<"QUADRADO: "<<b*b<<endl<<"RETANGULO: "<<a*b<<endl;
    return 0;
}
