#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a, b,t;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>a>>b;
 
        int c=abs(a-b);
        int d=abs(a-0);
        cout<<"Case "<<i<<": "<<(((c+d)*4)+19)<<endl;
    }
}
