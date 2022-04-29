#include <iostream>
using namespace std;
typedef long long ll;

ll spiral(ll r,ll c)
{
    ll big=max(r,c);
    ll sq=big*big;
    ll sq1=(big-1)*(big-1);
    if(big%2==0)
    return (r>c ? sq-c+1 : sq1+r);
    else
    return (c>r ? sq-r+1 : sq1+c);
}
int main()
{
    int t;
    cin>>t;
    ll y,x;
    for(int i=1;i<=t;i++)
    {
        cin>>y>>x;
        cout<<spiral(y,x)<<"\n";
    }
    return 0;
}