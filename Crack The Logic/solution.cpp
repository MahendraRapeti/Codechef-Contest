#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
   
    while(t--)
    {
        cin>>n;
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(i=2;i*i<=n;i++)
    {
        if(prime[i]==true)
        {
            for(j=i*i;j<=n;)
            {
                prime[j]=false;
                j+=i;
            }
        }

    }
         int sum=0;
    for(i=2;i<=n;i++)
    {
        if(prime[i])
        {
         sum+=i;
        }
    }
    cout<<sum<<endl;

    }
    return 0;
}