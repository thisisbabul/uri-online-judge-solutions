#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int y=a/365;
    int mm=a%365;
    int m=mm/30;
    int d=mm%30;
    cout<<y<<" ano(s)"<<endl<<m<<" mes(es)"<<endl<<d<<" dia(s)"<<endl;
    return 0;
}
