#include<iostream>
using namespace std;
int j=1;
int main(){
    for(int i=60;i>=0;i-=5){
        cout<<"I="<<j<<" "<<"J="<<i<<endl;
        j+=3;
    }
    return 0;
}
