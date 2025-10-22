#include<bits/stdc++.h>
using namespace std;
int main (void)
{
    int t,s,v;
    cin>>s>>v;
    t=ceil(1.0*s/v)+10;
    //距离前一天零点的时间
    int from_zero = 32*60-t;
    //int hh=from_zero%(24*60);单位是分钟
    int hh = (from_zero/60)%24;
    int mm=from_zero%60;
    printf("%02d:%02d\n",hh,mm);
    return 0;
}