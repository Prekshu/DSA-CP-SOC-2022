#include <iostream>
using namespace std;

void coin(int a,int b)
{
    if(b>a)
    swap(a,b);
    if(a>2*b || (a+b)%3!=0)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}
int main()
{
    int t,a,b;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b;
        coin(a,b);
    }
    return 0;
}