#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int p1code, p1quantity, p2code, p2quantity;
    float p1price, p2price, r;
    cin>>p1code>>p1quantity>>p1price>>p2code>>p2quantity>>p2price;
    r=(p1quantity*p1price)+(p2quantity*p2price);
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<r<<endl;
    return 0;
}
