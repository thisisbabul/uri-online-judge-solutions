#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int arr[]={a,b,c};
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(arr[i]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
        cout<<arr[i]<<endl;
    }
    cout<<endl<<a<<endl<<b<<endl<<c<<endl;
}
