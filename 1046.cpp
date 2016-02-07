#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    if(a==b){
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    }
    else if(a<b){
        cout<<"O JOGO DUROU "<<b-a<<" HORA(S)"<<endl;
    }
    else if(a>b){
        int c=a-b;
        int r=24-c;
        cout<<"O JOGO DUROU "<<r<<" HORA(S)"<<endl;
    }
    return 0;
}
