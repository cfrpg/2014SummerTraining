#include <cstdio>
#include <cstring>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;
typedef long long LL;
#define INF 0x7fffffff
const double eps=1e-8;
const double pi=acos(-1.0);
int a[200];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        cin>>n;
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(j%i==0)  a[j]=!a[j];
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(a[i]!=0)
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}