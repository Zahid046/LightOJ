#include<bits/stdc++.h>
using namespace std;
 
bool fun(pair <int, int>a, pair <int, int>b)
{
    if(a.second==b.second)
        return a.first>b.first;
    return a.second<b.second;
}
 
int main()
{
    int t;
    cin>>t;
    int n;
    vector < pair <int, int> > a(1001);
    for (int i = 1; i <= 1000; i++)
    {
        a[i].first = i;
        a[i].second = 0;
    }
    for(int i=1; i<=1000; i++)
    {
        for(int j=i; j<=1000; j=j+i)
        {
            a[j].second++;
        }
    }
    sort(a.begin(), a.end(), fun);
    for(int i=0; i<t; i++)
    {
        cin>>n;
        cout<<"Case "<<i+1<<": "<<a[n].first<<endl;
    }
}
