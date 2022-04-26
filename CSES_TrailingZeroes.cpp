#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,y,x=0;
    cin>>n;
    for(int i=1;;i++)
    {
        y=floor(n/pow(5,i));
        x+=y;
        if(y==0)
        break;
    }
    cout<<x<<endl;
    return 0;
}