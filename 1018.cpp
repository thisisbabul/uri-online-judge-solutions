#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    cout<<a<<endl;
    int b=a/100;
    cout<<b<<" nota(s) de R$ 100,00"<<endl;
    int c=a%100;
    int d=c/50;
    cout<<d<<" nota(s) de R$ 50,00"<<endl;
    int e=c%50;
    int f=e/20;
    cout<<f<<" nota(s) de R$ 20,00"<<endl;
    int g=e%20;
    int h=g/10;
    cout<<h<<" nota(s) de R$ 10,00"<<endl;
    int i=g%10;
    int j=i/5;
    cout<<j<<" nota(s) de R$ 5,00"<<endl;
    int k=i%5;
    int l=k/2;
    cout<<l<<" nota(s) de R$ 2,00"<<endl;
    int m=k%2;
    int n=m/1;
    cout<<n<<" nota(s) de R$ 1,00"<<endl;
    return 0;
}
