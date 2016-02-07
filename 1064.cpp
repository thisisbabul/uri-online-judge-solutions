#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a, b, c, d, e, f;
    int r1=0,r2=0, r3=0, r4=0, r5=0, r6=0;
    float avg1=0,avg2=0,avg3=0,avg4=0,avg5=0,avg6=0;
    cin>>a>>b>>c>>d>>e>>f;
    if(a>0){
        r1=1;
        avg1=a;
    }
    if(b>0){
        r2=1;
        avg2=b;
    }
    else{
        r2=0;
        avg2=0;
    }
    if(c>0){
        r3=1;
        avg3=c;
    }
    if(d>0){
        r4=1;
        avg4=d;
    }
    if(e>0){
        r5=1;
        avg5=e;
    }
    if(f>0){
        r6=1;
        avg6=f;
    }
    int r=r1+r2+r3+r4+r5+r6;
    float avg=(avg1+avg2+avg3+avg4+avg5+avg6)/r;
    cout<<r<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<avg<<endl;
    return 0;
}
