#include<bits/stdc++.h>
using namespace std;
int main(void){
  int a[3];
  cin>>a[0]>>a[1]>>a[2];
  sort(a,a+3);//简单排序；
  cout<<a[0]<<" "<<a[1]<<" "<<a[2];
}