#include <bits/stdc++.h>
#include<iostream>
//#include <cstdlib>
using namespace std;
int main(){
int n,m,x;
cin>>n>>m>>x;
int a[n],b[m];
for(int i=0;i<n;i++)cin>>a[i];
cout<<"enter b elements\n";
for(int i=0;i<m;i++)cin>>b[i];
int i=0,j=m-1;
int current_diff=0;
int min_diff=INT_MAX;
int curr_min_diff=INT_MAX;
while(i!=n)
{
    if(abs(a[i]+b[j]-x)==0){
       cout<<a[i]<<"  "<<b[j]<<endl;
       return 0;
       }
       else
       {

           current_diff=abs(a[i]+b[j]-x);
           curr_min_diff=min(current_diff,min_diff);
           if(current_diff>curr_min_diff||j<0)
           {
               i++;j=m-1;
               curr_min_diff=INT_MAX;
               min_diff=min(curr_min_diff,min_diff);
           }
           else j--;
       }
}
cout<<min_diff<<endl;
return 0;
}
