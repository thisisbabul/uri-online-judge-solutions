#include<iostream>
using namespace std;
int main(){
    int a, in=0, out=0;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        if(b>=10 && b<=20){
            in++;
        }
        else{
            out++;
        }
    }
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;
    return 0;
}
