#include<bits/stdc++.h>
using namespace std;
int main (void){
    string str;
    string fstr;
    cin>>str;
    for(int i=str.size()-1;i>=0;i--)
    {
        fstr+=str[i];
    }
    cout<<fstr;
    return 0;
}