#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n; long long s=1;
    cin>>n;
    long long ll=pow(10,9)+7;
    while(n>0)
    {
        s=s*2;
        s=s%ll;
        n--;
    }
    cout<<s%ll<<endl;
    return 0;
}