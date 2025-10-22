#include<bits/stdc++.h>
using namespace std;
int main(void){
        int a,b;
    cin>>a>>b;
    bool run;
    if(a%400==0)run=1;
    else if(a%100==0)run=0;
    else if(a%4==0)run=1;
    else run =0;
    int mon;
    switch (b)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        mon=31;
        break;

        case 4:
        case 6:
        case 11:
        case 9:
        mon=30;
        break;
        case 2:
        if(run)mon=29;
        else mon=28;
        break;
    }
    cout<<mon;

    return 0;
}