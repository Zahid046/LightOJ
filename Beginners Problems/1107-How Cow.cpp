#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    int x1,x2,y1,y2,n,t1,t2;
 
    for(int i=0; i<t; i++){
        cin>>x1>>y1>>x2>>y2;
        cin>>n;
        printf("Case %d:\n",i+1);
        for(int j=0; j<n; j++){
            cin>>t1>>t2;
            if((t1>=x1 && t1<=x2) && (t2>=y1 && t2<=y2)){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }

    }
}
