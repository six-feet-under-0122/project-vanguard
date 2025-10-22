#include<bits/stdc++.h>
using namespace std;
int main (void){
    double a,b,c;
    cin>>a>>b>>c;
    double p=(a+c+b)/2;
    double s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1lf",s);
    return 0;
}