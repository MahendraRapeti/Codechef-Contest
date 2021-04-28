#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;//   15/06/2002

    int d=((s[0]-'0')*10)+(s[1]-'0');
    int m=((s[3]-'0')*10)+(s[4]-'0');
    int y=((s[8]-'0')*10)+(s[9]-'0');
    int l=y/4;
    switch(m)
    {
        case 1:
        m=1;
        break;
        case 2:
        m=4;
        break;
        case 3:
        m=4;
        break;
        case 4:
        m=0;
        break;
        case 5:
        m=2;
        break;
        case 6:
        m=5;
        break;
        case 7:
        m=0;
        break;
         case 8:
        m=3;
        break;
         case 9:
        m=6;
        break;
         case 10:
        m=1;
        break;
         case 11:
        m=4;
        break;
         case 12:
        m=6;
        break;
    }
    int yy=((s[6]-'0')*1000)+((s[7]-'0')*100);
    if(yy<=1999&&yy>=1900)
    {
        yy=0;
    }
    else if(yy<=2099&&yy>=2000)
    {
        yy=6;
    }
    
int r=(d+m+y+l+yy)%7;
switch(r)
{
    case 0:
    cout<<"saturday";
    break;
    case 1:
    cout<<"sunday";
    break;
    case 2:
    cout<<"monday";
    break;
    case 3:
    cout<<"tuesday";
    break;
    case 4:
    cout<<"wednesday";
    break;
    case 5:
    cout<<"thursday";
    break;
    case 6:
    cout<<"friday";
    break;
}

    return 0;
}