#include<bits/stdc++.h>
using namespace std;
bool is_prime(int x)
{
    if(x<2)return false;
    else if(x==2)return true;
    else if(x%2==0)return false;
    else{

        for(int i=3;i<=sqrt(x);i+=2)
        {
            if(x%i==0)return false;
        }
        return true;
    }

}
int main(void){

    int n;
    cin>>n;
    for(int j=2;j<=n;j+=2)
    {
        for(int i=2;i<=j;i++)
        {
            if(is_prime(i)&&is_prime(j-i))
            {
                printf("%d=%d+%d\n",j,i,j-i);
                break;
            }
        }

    }
    return 0;
}