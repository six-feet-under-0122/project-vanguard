#include<bits/stdc++.h>
using namespace std;
char a[12][12];
char b[12][12];
int change1();
int change2();
int change3();
int change4();
int change5();
int change6();
int n;
int main(void)
{
    int change;
    cin>>n;
    for(int i=0;i<n;i++)
    {
            cin>>a[i];
      
    }
    for(int i=0;i<n;i++)
    {
            cin>>b[i];
     
    }
if(change1()==1)change=1;
else if(change2()==2)change=2;
else if(change3()==3)change=3;
else if(change4()==4)change=4;
else if(change6()==6)change=6;
else if(change5()==5)change=5;
else change=7;
cout<<change;
    return 0;
}
int change1()
{
 for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
        {
            if(a[i][j]!=b[j][n-1-i])
            {return 0;}

        }
    }
return 1;
}
int change2()
{
 for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
        {
            if(a[i][j]!=b[n-1-i][n-1-j])return 0;

        }
    }
return 2;
}
int change3()
{
 for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
        {
            if(a[i][j]!=b[n-1-j][i])return 0;

        }
    }
return 3;
}
int change4()
{
 for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
        {
            if(a[i][j]!=b[i][n-1-j])return 0;

        }
    }
return 4;
}

int change6()
{
 for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
        {
           if(b[i][j]!=a[i][j])return 0;

        }
    }
return 6;
}
int change5()
{
    char c[12][12];
    
    for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
        {
            c[i][j]=a[i][n-1-j];

        }
    }
        for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
        {
            a[i][j]=c[i][j];

        }
    }
    if(change1()==1||change2()==2
    ||change3()==3||change4()==4)return 5;
    return 0;

}