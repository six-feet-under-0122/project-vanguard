#include<bits/stdc++.h>
using namespace std;
int is_prime(int n);
int main (void)
{
    int a,b;
    cin>>a>>b;
    //一位
    //先组装，判断范围，最后质数;
    if(a<=5&&b>=5)cout<<5<<endl;
    if(a<=7&&b>=7)cout<<7<<endl;
    if(a<=11&&b>=11)cout<<11<<endl;
    //三位
    for(int i=1;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            int num=i*100+j*10+i;
            if(num>=a&&num<=b&&is_prime(num))cout<<num<<endl;
            if(num<a);continue;
            if(num>b)return 0;
        }
    }
    //五位
    for(int num1=1;num1<=9;num1++)
    {
        for(int num2=0;num2<=9;num2++)
        {
            for(int num3=0;num3<=9;num3++)
            {
                int num=num1*10000+num2*1000+num3*100+num2*10+num1;
                if(num>=a&&num<=b&&is_prime(num))cout<<num<<endl;
                if(num<a);continue;
                if(num>b)return 0;
            }
        }
    }
    //七位
    for(int num1=1;num1<=9;num1++)
    {
        for(int num2=0;num2<=9;num2++)
        {
            for(int num3=0;num3<=9;num3++)
            {
                for(int num4=0;num4<=9;num4++)
                {
                    int num=num1*1000000+num2*100000+num3*10000+num4*1000+num3*100+num2*10+num1;
                    if(num>=a&&num<=b&&is_prime(num))cout<<num<<endl;
                    if(num<a);continue;
                    if(num>b)return 0;
                }
            }
        }
    }


    

    return 0;
}
int is_prime(int n)
{

    if(n<=1)return 0;
    else if(n==2)return 1;
    else if(n%2==0)return 0;
    else{
        int sqrtn=sqrt(n);
        for(int i=3;i<=sqrtn;i++)
        {
            if( n%i==0)return 0;
        }
        return 1;
    }

}