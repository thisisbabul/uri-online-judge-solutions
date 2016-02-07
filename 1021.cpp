#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    float a;
    cin>>a;
    cout<<"NOTAS:"<<endl;
    int b=(int)a/100;
    cout<<b<<" nota(s) de R$ 100.00"<<endl;
    float c=fmodf(a,100.0f);
    int d=(int)c/50;
    cout<<d<<" nota(s) de R$ 50.00"<<endl;
    float e=fmodf(c,50.0f);
    int f=(int)e/20;
    cout<<f<<" nota(s) de R$ 20.00"<<endl;
    float g=fmodf(e,20.0f);
    int h=(int)g/10;
    cout<<h<<" nota(s) de R$ 10.00"<<endl;
    float i=fmodf(g,10.0f);
    int k=(int)i/5;
    cout<<k<<" nota(s) de R$ 5.00"<<endl;
    float l=fmodf(i,5.0f);
    int m=(int)l/2;
    cout<<m<<" nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:"<<endl;
    float n=fmodf(l,2.0f);
    int o=(int)n/1;
    cout<<o<<" moeda(s) de R$ 1.00"<<endl;
    float p=fmodf(n,1.0f);
    int q=p/0.50;
    cout<<q<<" moeda(s) de R$ 0.50"<<endl;
    float r=fmodf(p,0.50f);
    int s=r/0.25;
    cout<<s<<" moeda(s) de R$ 0.25"<<endl;
    float t=fmodf(r,0.25f);
    int u=t/0.10;
    cout<<u<<" moeda(s) de R$ 0.10"<<endl;
    float v=fmodf(t,0.10f);
    int w=v/0.05;
    cout<<w<<" moeda(s) de R$ 0.05"<<endl;
    double x=fmodf(v,0.05f);
    float y=x/0.01f;
    cout<<fixed<<setprecision(0)<<y<<" moeda(s) de R$ 0.01"<<endl;
}
