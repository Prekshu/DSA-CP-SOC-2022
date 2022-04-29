#include <iostream>
using namespace std;

char chess[8][8];
int c=0;
bool ldiag[15],rdiag[15],col[8]; //default value will be false

void queen(int r)
{
    if(r==8)
    {
        c++;
        return;
    }
    for(int c=0;c<8;c++)
    {
       if(col[c]==0 && ldiag[r-c+7]==0 && rdiag[r+c]==0 && chess[r][c]=='.')
       {
           col[c]=ldiag[r-c+7]=rdiag[r+c]=true;
           queen(r+1);
           col[c]=ldiag[r-c+7]=rdiag[r+c]=false;
       }
    }
}
int main()
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        cin>>chess[i][j];
    }
    queen(0);
    cout<<c<<"\n";
}