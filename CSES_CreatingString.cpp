#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=1;
    sort(s.begin(),s.end());
    while(next_permutation(s.begin(),s.end()))
    count++;
    cout<<count<<endl;
	do{
		cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end())); 
    return 0;
}