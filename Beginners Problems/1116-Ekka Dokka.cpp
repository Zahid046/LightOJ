#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ll t,n;
    cin>>t;
    for(ll i=0;i<t; i++){
        cin>>n;
        if(n%2!=0){
            printf("Case %lld: Impossible\n",i+1);
        }
        else{
            ll e=2;
            ll o=n/2;
            if(o%2==0){
                while(1){
                    e=e*2;
                    o=o/2;
                    if(o%2==1){
                        break;
                    }
                }
            }
            printf("Case %lld: %lld %lld\n",i+1,o,e);
        }
    }
}
