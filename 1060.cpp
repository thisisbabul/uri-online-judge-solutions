#include<iostream>
using namespace std;
int main(){
    float a, b, c, d, e, f;
    int r1,r2,r3,r4,r5,r6;
    cin>>a>>b>>c>>d>>e>>f;
    if(a>0){
        r1=1;
    }
    else{
        r1=0;
    }
    if(b>0){
        r2=1;
    }
    else{
        r2=0;
    }
    if(c>0){
        r3=1;
    }
    else{
        r3=0;
    }
    if(d>0){
        r4=1;
    }
    else{
        r4=0;
    }
    if(e>0){
        r5=1;
    }
    else{
        r5=0;
    }
    if(f>0){
        r6=1;
    }
    else{
        r6=0;
    }
    int sum=r1+r2+r3+r4+r5+r6;
    cout<<sum<<" valores positivos"<<endl;
    return 0;
}
