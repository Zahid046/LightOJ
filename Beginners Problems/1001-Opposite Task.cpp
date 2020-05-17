#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a,b,t,c;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a;
        if(a>10){
            b=a-10;
            c=10;
        }
        else{
            c=a;
            b=0;
        }
 
        cout<<b<<" "<<c<<endl;
    }
}
