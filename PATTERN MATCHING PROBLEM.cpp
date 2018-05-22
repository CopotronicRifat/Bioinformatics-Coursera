#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    freopen("INPUT.txt","r",stdin);
    freopen("OUTPUT.txt","w",stdout);
    char pattern[100],genome[1200000];
    cin>>pattern;
    cin>>genome;
    bool flag;
    for(int i=0; i<strlen(genome)-strlen(pattern)+1; i++)
    {
        for(int j=0; j<strlen(pattern); j++)
        {
            if(genome[i+j]==pattern[j])
            {
                flag=true;
            }
            else
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
