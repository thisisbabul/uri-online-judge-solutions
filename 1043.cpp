#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a, b, c, pm, area;
    cin>>a>>b>>c;
    if((a+b)>c && (b+c)>a && (c+a)>b ){
        pm=a+b+c;
        cout<<"Perimetro = "<<fixed<<setprecision(1)<<pm<<endl;
    }
    else{
        area=(c*(a+b)/2);
        cout<<"Area = "<<fixed<<setprecision(1)<<area<<endl;
    }
    return 0;
}
