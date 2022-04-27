#include <iostream>
#include <math.h>
using namespace std;

void hanoi(int n,int a,int b,int c)
{
    if(n==1)
    {
        cout<<a<<" "<<c<<endl;
        return;
    }
    hanoi(n-1,a,c,b);
    cout<<a<<" "<<c<<endl;
    hanoi(n-1,b,a,c);
}
int main()
{
    int n;
    cin>>n;
    cout<<(int)pow(2,n)-1<<endl;
    hanoi(n,1,2,3);
    return 0;
}