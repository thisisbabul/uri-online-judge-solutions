#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int s=a%60;
    int dues=a-s;
    int ms=dues/60;
    int m=ms%60;
    int hs=m*60;
    int duess=dues-hs;
    int h=duess/3600;
    cout<<h<<":"<<m<<":"<<s<<endl;
    return 0;
}
