#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int c=1,max=0;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s.at(i)==s.at(i+1))
        {
            c++;
            continue;
        }
        if(c>max)
        max=c;
        c=1;      
    }
    if(c==s.length() || c>max)
    max=c;
    cout<<max<<endl;
    return 0;
}



