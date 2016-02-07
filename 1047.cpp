#include<iostream>
using namespace std;
int main(){
    int sh, sm, eh, em, h, m;
    cin>>sh>>sm>>eh>>em;

    if(sh<eh){
        h=eh-sh;
    }
    else if(sh>eh){
        h=24-(sh-eh);
    }
    if(sm<em){
        m=em-sm;
    }
    else if(sm>em){
        m=60-(sm-em);
        h--;
    }

    if(sh==eh && sm==em){
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    }
    else{
        cout<<"O JOGO DUROU "<<h<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;
    }
    return 0;
}
