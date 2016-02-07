#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    float a;
    cin>>a;
    if(a>2000.00){
            if(a>=2000.01 && a<=3000.00){
                float b=a-2000.00;
                float c=(b*8)/100;
                cout<<"R$ "<<fixed<<setprecision(2)<<c<<endl;
            }
            else if(a>=3000.01 && a<=4500.00){
                float d=a-3000;
                float e=(d*18)/100;
                float b=a-(2000.00+d);
                float c=(b*8)/100;
                cout<<"R$ "<<fixed<<setprecision(2)<<c+e<<endl;
            }

            else if(a>4500.00){
                float d=a-4500;
                float e=(d*28)/100;
                float b=a-(3000.00+d);
                float c=(b*18)/100;
                float f=a-(2000+d+b);
                float g=(f*8)/100;
                cout<<"R$ "<<fixed<<setprecision(2)<<e+c+g<<endl;
            }
    }
    else{
        cout<<"Isento"<<endl;
    }
    return 0;
}
