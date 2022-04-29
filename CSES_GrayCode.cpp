#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

#define pb push_back
//Recognise the pattern formed by the last two bits in the case n=2 and n=3;
void grayCode(int n)
{
    vector<string> v;
    v.pb("0");
    v.pb("1");
    for(int i=2;i<pow(2,n);i=i*2)
    {
        for(int j=i-1;j>=0;j--) //Adding previously generated graycode in reverse order
        v.pb(v[j]);
        for(int j=0;j<i;j++) //Adding 0 to the first half 
        v[j]="0"+v[j];
        for(int j=i;j<2*i;j++) //Adding 1 to the second half
        v[j]="1"+v[j];
    }
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<endl;
}
int main()
{
    int n;
    cin>>n;
    grayCode(n);
    return 0;
}