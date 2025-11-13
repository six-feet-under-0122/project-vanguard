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
    vector<int> a(n,0);
    for(int i=0;i<n;i++)cin>>a[i];
    //cpp风格
    for(auto it =a.begin();it!=a.end();)
    {
        if(!is_prime(*it))it = a.erase(it);
        else it++;
    }
    for(int i:a)cout<<i<<' ';

    return 0;
}