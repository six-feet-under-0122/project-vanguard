#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    char num[105];
    for (int i = 0; i < n; i++) cin >> num[i];
    for(int i=0;i<5;i++)
    {
        for(int ii=0;ii<n;ii++)
        {
        string a[5];
        if(num[ii]=='0')
        {a[0]+="XXX";a[1]+="X.X";
        a[2]+="X.X";a[3]+="X.X";
        a[4]+="XXX";}
        else if(num[ii]=='1')
        {a[0]+="..X";a[1]+="..X";
        a[2]+="..X";a[3]+="..X";
        a[4]+="..X";}
        else if(num[ii]=='2')
        {a[0]+="XXX";a[1]+="..X";
        a[2]+="XXX";a[3]+="X..";
        a[4]+="XXX";}
        else if(num[ii]=='3')
        {a[0]+="XXX";a[1]+="..X";
        a[2]+="XXX";a[3]+="..X";
        a[4]+="XXX";
        }
        else if(num[ii]=='4')
        {a[0]+="X.X";a[1]+="X.X";
        a[2]+="XXX";a[3]+="..X";
        a[4]+="..X";
        }
         else if(num[ii]=='5')
        {a[0]+="XXX";a[1]+="X..";
        a[2]+="XXX";a[3]+="..X";
        a[4]+="XXX";
        }
         else if(num[ii]=='6')
        {a[0]+="XXX";a[1]+="X..";
        a[2]+="XXX";a[3]+="X.X";
        a[4]+="XXX";
        }
         else if(num[ii]=='7')
        {a[0]+="XXX";a[1]+="..X";
        a[2]+="..X";a[3]+="..X";
        a[4]+="..X";
        }
        else if(num[ii]=='8')
        {a[0]+="XXX";a[1]+="X.X";
        a[2]+="XXX";a[3]+="X.X";
        a[4]+="XXX";
        }
         else if(num[ii]=='9')
        {a[0]+="XXX";a[1]+="X.X";
        a[2]+="XXX";a[3]+="..X";
        a[4]+="XXX";
        }
        cout<<a[i]<<((ii==n-1)?'\n':'.');
        }
    }



    return 0;
}