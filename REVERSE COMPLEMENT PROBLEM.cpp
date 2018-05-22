#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char dna[10000];
    char rdna[10000];
    char rcdna[10000];
    freopen("INPUT.txt","r",stdin);
    freopen("OUTPUT.txt","w",stdout);
    cin>>dna;
    cout<<strlen(dna)<<endl;
    int j=0;
    for(int i=strlen(dna)-1; i>=0; i--)
    {
        rdna[j]=dna[i];
        j++;
    }
    for(int m=0; m<strlen(rdna); m++)
    {
        if(rdna[m]=='A')
        {
            rcdna[m]='T';
        }
        if(rdna[m]=='T')
        {
            rcdna[m]='A';
        }
        if(rdna[m]=='C')
        {
            rcdna[m]='G';
        }
        if(rdna[m]=='G')
        {
            rcdna[m]='C';
        }
    }
    cout<<rcdna<<endl;
    cout<<strlen(rcdna)<<endl;
    return 0;
}
