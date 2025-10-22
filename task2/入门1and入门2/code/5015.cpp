#include<bits/stdc++.h>
using namespace std;
int main(void){
    string str;
    getline(cin,str);
    int s=str.size();
    for(char c:str)
    {
        if (c==' '||c=='\n')s--;
    }
    cout<<s;
    return 0;
}
