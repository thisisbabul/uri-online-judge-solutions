#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    if(a==1){
        float c=4.00f*b;
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<c<<endl;
    }
    else if(a==2){
        float c=4.50f*b;
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<c<<endl;
    }
    else if(a==3){
        float c=5.00f*b;
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<c<<endl;
    }
    else if(a==4){
        float c=2.00f*b;
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<c<<endl;
    }
    else if(a==5){
        float c=1.50f*b;
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<c<<endl;
    }
    return 0;
}
