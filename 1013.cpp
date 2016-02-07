#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
int a,b,c,MaiorAB,maior;
cin>>a>>b>>c;
MaiorAB=(a+b+abs(a-b))/2;
maior=(MaiorAB+c+abs(MaiorAB-c))/2;
cout<<maior<<" eh o maior"<<endl;
return 0;
}
