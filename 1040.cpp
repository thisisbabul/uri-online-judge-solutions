#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a, b, c, d, e, avg;
    cin>>a>>b>>c>>d;
    avg=(a*2+b*3+c*4+d*1)/10;
    cout<<"Media: "<<fixed<<setprecision(1)<<avg<<endl;
    if(avg>=7){
        cout<<"Aluno aprovado."<<endl;
    }
    else if(avg<5){
        cout<<"Aluno reprovado."<<endl;
    }
    else if(avg>=5 && avg<=6.9){
        cout<<"Aluno em exame."<<endl;
        cin>>e;
        cout<<"Nota do exame: "<<e<<endl;
        float examAvg=((avg+e)/2.0);
        if(examAvg>=5){
            cout<<"Aluno aprovado."<<endl;
        }
        else if(examAvg<=4.9){
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<<fixed<<setprecision(1)<<examAvg<<endl;
    }
    return 0;
}
