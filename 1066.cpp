#include<iostream>
using namespace std;
int main(){
    int i=5, n, ec=0, oc=0, pc=0, nc=0;
    while(i--){
        cin>>n;
        if(n%2==0){
            ec++;
        }
        if(n%2!=0){
            oc++;
        }
        if(n>0){
            pc++;
        }
        if(n<0){
            nc++;
        }
    }
    cout<<ec<<" valor(es) par(es)"<<endl;
    cout<<oc<<" valor(es) impar(es)"<<endl;
    cout<<pc<<" valor(es) positivo(s)"<<endl;
    cout<<nc<<" valor(es) negativo(s)"<<endl;
    return 0;
}
