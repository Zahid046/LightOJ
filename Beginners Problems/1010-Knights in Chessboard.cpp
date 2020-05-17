#include<bits/stdc++.h>
using namespace std;

#define ll long long
 
 
int main()
{
 
    ll t,n,m;
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        ll c=0;
        cin>>n>>m;
        c=n*m;
        if(n==1 || m==1){
            c=max(n,m);
            printf("Case %lld: %lld\n", i,c);
        }
        else if(n==2 || m==2){
            c=max(n,m);
            if(c%4==1 || c%4==3){
                c++;
            }
            else if(c%4==2){
                c=c+2;
            }
            printf("Case %lld: %lld\n", i,c);
        }
        else if(c%2==1){
            c++;
            printf("Case %lld: %lld\n", i,c/2);
        }
        else{
            printf("Case %lld: %lld\n", i,c/2);
        }
 
    }
}
