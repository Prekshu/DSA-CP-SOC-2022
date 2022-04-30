#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void palindrome(string s)
{
    vector<int> v(27,0);
    vector<char> c1;
    vector<char> c2;
    for(int i=0;i<s.length();i++)
    v[s.at(i)-64]++;
    int countOdd=0;
    for(int i=1;i<27;i++)
    {
        if(v[i]%2!=0)
        countOdd++;
        if(countOdd==2)
        {
            cout<<"NO SOLUTION"<<endl;
            return;
        }
    }
    int freq,j;
    for(int i=1;i<27;i++)
    {
        freq=v[i];
        if(freq%2==0)
        {
            for(int k=1;k<=freq/2;k++)
            {
                c1.push_back((char)i+64);
                c2.push_back((char)i+64);
            }
        }
        else
        j=i;
    }
    if(countOdd!=0)
    {
        for(int i=1;i<=v[j];i++)
        c1.push_back((char)j+64);
    }
    reverse(c2.begin(),c2.end());
    for(int i=0;i<c1.size();i++)
    cout<<c1[i];
    for(int i=0;i<c2.size();i++)
    cout<<c2[i];
    cout<<endl;
}

int main()
{
    string str;
    cin>>str;
    palindrome(str);
}