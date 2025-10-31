#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,k;
    cin>>n>>k;
    int a=0,b=0;
    int a_n=0,b_n=0;
    b+=(1+k-1)*(k-1)/2;
    b_n+=k-1;
    for(int i=k;i<=n;i++){
        if(i%k==0){a+=i;a_n++;}
        else {b+=i;b_n++;}
    }
    double aa=a*1.0/a_n,bb=b*1.0/b_n;
    printf("%.1f %.1f",aa,bb);
    return 0;
}