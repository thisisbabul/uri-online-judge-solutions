#include<iostream>
using namespace std;
int main(){
    int i=5, c=0, n;
    while(i--){
        cin>>n;
        if(n%2==0){
            c++;
        }
    }
    cout<<c<<" valores pares"<<endl;
    return 0;
}
