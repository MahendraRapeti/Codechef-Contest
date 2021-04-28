#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string s1[4];
    s1[0]="geeksforgeeks";
    s1[1]="codechef";
    s1[2]="hackerearth";
    s1[3]="hackerrank";
    int x;
   
    int t;
    cin>>t;
    while(t--)
    {
        int a[4]={0};
        int n;
        cin>>n;
        while(n--)
        {
            cin>>s>>x;
            if(s.compare(s1[0])==0)
            a[0]+=x;
            else if(s.compare(s1[1])==0)
            a[1]+=x;
           else if(s.compare(s1[2])==0)
            a[2]+=x;
           else
            a[3]+=x;
        }
        
    
    int min=1000000,j=0;
   for(int i=0;i<4;i++)
   {
     if(a[i]<=min)
     {
         min=a[i];
         j=i;
     }
   }
   cout<<s1[j]<<" "<<min<<endl;
    }

    return 0;
}