#include<bits/stdc++.h>
using namespace std;
long long binary(long long n)
{
    long long x=1,ans=0,y;
    while(n>0)
    {
        y=n%10;
        ans=ans+x*y;
        x=x*2;
        n=n/10;

    }
    return ans;
}
int main()
{
    long long n;
    cin>>n;
    cout<<binary(n)<<endl;
}