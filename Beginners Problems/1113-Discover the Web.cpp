#include<bits/stdc++.h>
using namespace std;

#define ll long long
 
int main()
{
    ll t;
    cin>>t;
 
    for (ll i=1; i<=t; i++)
    {
        string key,url;
        cin>>key;
        stack <string> f;
        stack <string> b;
 
        url = "http://www.lightoj.com/";
        printf("Case %lld:\n",i);
        while(key != "QUIT")
        {
        
            if(key=="VISIT")
            {
                b.push(url);
                cin>>url;
                cout<<url<<endl;
                while(!f.empty())
                {
                    f.pop();
                }
            }
            else if(key=="BACK")
            {
                if(b.empty())
                {
                    cout<<"Ignored"<<endl;
                }
                else
                {
                    f.push(url);
                    url = b.top();
                    b.pop();
                    cout<<url<<endl;
                }
            }
            else if(key=="FORWARD")
            {
                if(f.empty())
                {
                    cout<<"Ignored"<<endl;
                }
                else
                {
                    b.push(url);
                    url = f.top();
                    f.pop();
                    cout<<url<<endl;
                }
            }
 
            cin>>key;
        }
    }
}
