#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ll t,n;
    cin>>t;
 
    for(ll i=0; i<t; i++){
        cin>>n;
        ll s=ceil(sqrt(n));
 
        ll m=(s*s)-(s-1);
        ll d;
        if(s%2==1){
            if(m>n){
               d=m-n;
               printf("Case %lld: ",i+1);
               cout<<s<<" "<<(s-d)<<endl;
            }
            else{
                d=n-m;
                printf("Case %lld: ",i+1);
                cout<<(s-d)<<" "<<s<<endl;
            }
 
        }
        else{
            if(m>n){
               d=m-n;
               printf("Case %lld: ",i+1);
               cout<<(s-d)<<" "<<s<<endl;
            }
            else{
                d=n-m;
                printf("Case %lld: ",i+1);
                cout<<s<<" "<<(s-d)<<endl;
            }
        }
    }
}
