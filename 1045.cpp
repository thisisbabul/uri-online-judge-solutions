#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double a, b, c;
    cin>>a>>b>>c;
    double arr[]={a,b,c};
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(arr[i]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    if(arr[0]>=(arr[1]+arr[2])){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    else if(pow(arr[0],2.0)==(pow(arr[1],2.0)+pow(arr[2],2.0))){
        cout<<"TRIANGULO RETANGULO"<<endl;
    }
    else if(pow(arr[0],2.0)>(pow(arr[1],2.0)+pow(arr[2],2.0))){
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }

    else if(pow(arr[0],2.0)<(pow(arr[1],2.0)+pow(arr[2],2.0))){
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
    if((arr[0]==arr[1]) && (arr[1]==arr[2])){
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }
    else if((arr[0]==arr[1]) || (arr[1]==arr[2])){
            cout<<"TRIANGULO ISOSCELES"<<endl;
        }
    return 0;


}
