#include<bits/stdc++.h>
using namespace std;
int main(void){

    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)swap(a,b);
    if(b>c)swap(b,c);
    if(a>b)swap(a,b);
    cout<<a/__gcd(a,c)<<"/"<<(c/__gcd(a,c));

    return 0;
}