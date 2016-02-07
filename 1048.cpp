#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float s, ts;
    cin>>s;
    if(s>0 && s<=400.00){
        float p=(s*15)/100;
        ts=s+p;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<ts<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<p<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }

    else if(s>=400.01 && s<=800.00){
        float p=(s*12)/100;
        ts=s+p;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<ts<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<p<<endl;
        cout<<"Em percentual: 12 %"<<endl;
    }

    else if(s>=800.01 && s<=1200.00){
        float p=(s*10)/100;
        ts=s+p;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<ts<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<p<<endl;
        cout<<"Em percentual: 10 %"<<endl;
    }

    else if(s>=1200.01 && s<=2000.00){
        float p=(s*7)/100;
        ts=s+p;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<ts<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<p<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }

    else if(s>2000.00){
        float p=(s*4)/100;
        ts=s+p;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<ts<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<p<<endl;
        cout<<"Em percentual: 4 %"<<endl;
    }
    return 0;
}
