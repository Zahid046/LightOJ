#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    double R, n;
 
    for(int i=0; i<t; i++){
        cin>>R>>n;
        double r=(R*sin(acos(-1.0)/n))/(1+sin(acos(-1.0)/n));
        printf("Case %d: %.9lf\n",i+1,r);
    }
}
