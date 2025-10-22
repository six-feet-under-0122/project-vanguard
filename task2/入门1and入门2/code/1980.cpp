#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,x;
    cin>>n>>x;
    int num=0;
    for(int i=1;i<=n;i++)
    {
        //零的情况单独讨论，不用
        int tmp=i;
        while( tmp!=0)
        {
            if(tmp%10==x)
            {
               num++; 
            }
            tmp/=10;
        }

    }
    cout<<num<<endl;

    return 0;
}