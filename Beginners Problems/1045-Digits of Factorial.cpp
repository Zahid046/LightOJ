#include<bits/stdc++.h>
using namespace std;

#define ll long long
 
double a[1000005];
 
int main()
{
    ll t, n, b;
    for(ll i=1; i<=1000000; i++)
        a[i]=a[i-1] + log(i);
 
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        cin>>n>>b;
        ll c=(a[n]/log(b)) + 1;
        printf("Case %lld: %lld\n", i, c);
    }
}
