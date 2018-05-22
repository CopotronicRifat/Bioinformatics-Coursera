#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(void)
{
    char text[10000],pattern[10000],freqp[10000];
    cin>>text;
    int k;
    cin>>k;
    bool flag=true;
    int count=0;
    cout<<strlen(text)<<endl;
    int c[10000];
    int m;
    for(m=0; m<strlen(text)-k+1; m++)
    {
        for(int n=0; n<k; n++)
        {
            pattern[n]=text[m+n];
        }
        for(int n=0; n<k; n++)
        {
            cout<<pattern[n];
        }
        cout<<endl;
        for(int i=0; i<(strlen(text)-strlen(pattern)+1); i++)
        {

            for(int j=0; j<strlen(pattern); j++)
            {
                if(text[i+j]==pattern[j])
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
                count++;
            }
        }
        c[m]=count;
        count=0;
    }
    int maxcount=0;
    for(int i=0; i<m; i++)
    {
        cout<<c[i]<<endl;
        if(c[i]>maxcount)
        {
            maxcount=c[i];
        }
    }
    cout<<"Maxcount: "<<maxcount<<endl;
    for(int l=0; l<strlen(text)-k+1; l++)
    {
        if(c[l]==maxcount)
        {
            for(int p=l; p<k+l; p++)
            {
                cout<<text[p];
            }
        }
        cout<<endl;
    }
    return 0;
}
