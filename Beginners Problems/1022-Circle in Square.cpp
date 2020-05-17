#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pi 2*acos(0.0)
 
int main()
{
    ll t;
    cin>>t;
    double r,sa,ca,ans;
 
    for(ll i=0; i<t; i++){
        cin>>r;
        sa=(2*r)*(2*r);
        ca=(r*r)*pi;
 
        ans=(sa-ca);
 
        printf("Case %lld: %.2lf\n",i+1,ans+10e-9);
    }
}
