#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        if(b==0){
            cout<<"NULL"<<endl;
        }
        else if(b%2==0 && b>0){
            cout<<"EVEN POSITIVE"<<endl;
        }
        else if(b%2==0 && b<0){
            cout<<"EVEN NEGATIVE"<<endl;
        }
        else if(b%2!=0 && b>0){
            cout<<"ODD POSITIVE"<<endl;
        }
        else if(b%2!=0 && b<0){
            cout<<"ODD NEGATIVE"<<endl;
        }

    }
    return 0;
}
