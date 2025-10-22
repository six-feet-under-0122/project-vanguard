#include<bits/stdc++.h>
using namespace std;
int is_prime(int del);
int main(void){
    //max_min，判断质数，
    //判断质数时判断小于等于一的时候；min初始值要足够大！！max要足够小
    string s;
    cin>>s;
    int a[26]={0};
    for(char c:s)
    {
        a[c-'a']++;
    }
    //max
    int max=0;
    int min=9999;
    for(int i=0;i<26;i++)
    {
        if(a[i]!=0)
        {
        max=max<a[i]?a[i]:max;
        min=min>a[i]?a[i]:min;
        }
    }
    int del=max-min;
    bool d=is_prime(del);
    if(d)cout<<"Lucky Word"<<endl<<del;
    else cout<<"No Answer"<<endl<<"0";
    return 0;
}
int is_prime(int del){
    if(del<=1)return 0;
    else if(del==2)return 1;
    else if(del%2==0)return 0;
    else {
        for(int i=3;i<sqrt(del);i+=2)
        {
            
            if(del%i==0)return 0;

        }
        return 1;
    }
}