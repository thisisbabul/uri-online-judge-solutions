#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    double x1, y1, x2, y2, r;
    cin>>x1>>y1>>x2>>y2;
    r=sqrt(pow((x2-x1),2.0)+pow((y2-y1),2.0));
    cout<<fixed<<setprecision(4)<<r<<endl;
    return 0;
}
