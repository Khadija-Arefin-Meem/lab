#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,k,p,val;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n>>k>>p;
        val=k+p;
        while(val>n)
        {
            val=val-n;
        }

        printf("Case %d: %d\n",i,val);
    }
    return 0;
}
