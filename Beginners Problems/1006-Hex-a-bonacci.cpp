#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll a, b, c, d, e, f;
ll fl[10000+2];
 
int main()
{
    ll n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- )
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
 
        fl[0] = a;
        fl[1] = b;
        fl[2] = c;
        fl[3] = d;
        fl[4] = e;
        fl[5] = f;
        for (ll i = 6; i <= n; i++)
        {
            fl[i] = fl[i-1] + fl[i-2]+fl[i-3] + fl[i-4]+fl[i-5] + fl[i-6];
            fl[i]=fl[i]%10000007;
        }
 
 
        printf("Case %lld: %lld\n", ++caseno, fl[n]%10000007 );
    }
    return 0;
}
