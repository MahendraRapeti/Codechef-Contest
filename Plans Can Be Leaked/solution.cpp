#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
    int t,n;
    cin>>t;
    while(t--)
    {
       
    cin>>s;
    p=s;
    int c=0;
    int l=s.length();
    sort(p.begin(),p.end());
    for(int i=0;i<l;i++)
    {
        if(s[i]!=p[i])
        {
            c++;
        }
    }
    if(c==0)
    {
        cout<<"Sivaji"<<endl;
    }
    else if(c%2==0)
    {
        cout<<"Mahendra"<<endl;
    }
    else
    {
        cout<<"Nikhil"<<endl;
    }
        
    }
    return 0;
}