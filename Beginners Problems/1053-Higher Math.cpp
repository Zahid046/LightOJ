#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a, b,t;
    cin>>t;
    int ar[3];
    for(int i=1; i<=t; i++){
        cin>>ar[0]>>ar[1]>>ar[2];
        sort(ar,ar+3);
        a=(ar[0]*ar[0])+(ar[1]*ar[1]);
        b=ar[2]*ar[2];
        if(a==b){
            cout<<"Case "<<i<<": yes"<<endl;
        }
        else{
            cout<<"Case "<<i<<": no"<<endl;
        }
 
    }
}
