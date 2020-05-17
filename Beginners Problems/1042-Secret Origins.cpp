#include<bits/stdc++.h>
using namespace std;

#define ll long long

int bin2int(string s)
{
    int sm=0;
    for(int i=0; i<s.size(); i++)
    {
        int d=s[i]-48;
        sm=2*sm+d;
    }
    return sm;
}

string int2bin(int num)
{
    string s="";
    while(num>0)
    {
        int d=num%2;
        char ch=d+'0';
        s+=ch;
        num/=2;
    }
    reverse(s.begin(),s.end());
    return s;
}

int main()
{
    string f="01100";
    next_permutation(f.begin(),f.end());
    ll t;
    cin>>t;
    string ss;
    ll n,s=0;
 
    for(ll i=0; i<t; i++){
 
        cin>>n;
        cout<<"Case "<<i+1<<": ";
        ss=int2bin(n);
        
        ss='0'+ss;
 
        string temp=ss;
        next_permutation(ss.begin(),ss.end());
        cout<<bin2int(ss)<<endl;
 
    }
}
