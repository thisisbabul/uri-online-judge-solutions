#include<iostream>
using namespace std;
int main(){
    string ssd, esd, sc1, sc2, ec1, ec2;
    int sd, ed, sh, sm, ss, eh, em, es;
    cin>>ssd>>sd>>sh>>sc1>>sm>>sc2>>ss>>esd>>ed>>eh>>ec1>>em>>ec2>>es;

    int d=ed-sd;
    if(d<0){
        d=sd-ed;
    }
    int h=eh-sh;
    if(h<0){
        h=24+(eh-sh);
        d--;
    }
    int m=em-sm;
    if(m<0){
        m=60+(em-sm);
        h--;
    }
    int s=es-ss;
    if(s<0){
        s=60+(es-ss);
        m--;
    }
    cout<<d<<" dia(s)"<<endl<<h<<" hora(s)"<<endl<<m<<" minuto(s)"<<endl<<s<<" segundo(s)"<<endl;
    return 0;
}
