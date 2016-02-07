#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a%2==0){
        for(int i=a+1;i<(a+12);i+=2){
            cout<<i<<endl;
        }
    }
    else if(a%2!=0){
        for(int i=a;i<(a+12);i+=2){
            cout<<i<<endl;
        }
    }
    return 0;
}
