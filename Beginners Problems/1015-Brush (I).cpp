#include<bits/stdc++.h>
using namespace std;

#define ll long long
 
int main()
{
    ll t;
    cin>>t;
    ll n,s=0;
 
    for(ll i=0; i<t; i++){
 
        cin>>n;
        ll a[n+2];
        s=0;
        for(ll i=0; i<n; i++){
        
            cin>>a[i];
 
            if(a[i]>=0){
                s=s+a[i];
            }
        }
        printf("Case %lld: %lld\n",i+1,s);
 
    }
}
