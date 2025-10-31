#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin>>n;
    int m=1;
    for(int i=n;i>0;i--)
    {
        for(int ii=i;ii>0;ii--)
        {
        printf("%02d",m);
        m++;
        }
        cout<<'\n';
    }
    return 0;
}