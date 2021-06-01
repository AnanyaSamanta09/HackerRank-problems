#include <bits/stdc++.h>

using namespace std;
int main()
{
    int m=5,n,ppl=0,tppl=0,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        ppl=(m/2);
        tppl=tppl+ppl;
        m=ppl*3;
    }
    cout<<tppl;
    return 0;
}