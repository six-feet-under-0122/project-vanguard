#include<bits/stdc++.h>
using namespace std;
int main(void){

    int n;
    cin>>n;
    int min=999;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        min=(min<temp)?min:temp;

    }
    cout<<min;

    return 0;
}