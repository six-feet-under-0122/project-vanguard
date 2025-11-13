#include<bits/stdc++.h>
using namespace std;
int main(void){
    int x,y;
    cin>>x>>y;
    int a[1500]={0};
    int ii=0;
    for(int i=x;i<=y;i++)
    {
        if(i%400==0||(i%4==0&&i%100!=0))a[ii++]=i;
    }
    cout<<ii<<endl;
    for(int i=0;i<ii;i++)cout<<a[i]<<" ";
    return 0;
}