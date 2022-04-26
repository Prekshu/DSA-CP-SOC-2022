#include <iostream>
using namespace std;

#define ll long long 

ll result(ll n)
{
    ll total= ((n*n)*(n*n-1))/2;
    ll unfav= 4*(n-1)*(n-2);
    return (total-unfav);
}
int main()
{
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++)
    cout<<result(i)<<endl;
    return 0;
}