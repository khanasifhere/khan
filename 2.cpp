#include<bits/stdc++.h>
using namespace std;


int main()
{
    
    long long t;
    cin>>t;
    while(t--)
    {
        long long int n,summ=0;
        cin>>n;
        if(n/15>0 )
        {
            summ+=n/15;
            n=n%15;
            if(n==8||n==5)
            {
                summ--;
                n+=15;
            }
        }
        if(n/10>0 )
        {
            summ+=n/10;
            n=n%10;
            if(n==2)
            {
                summ--;
                n+=10;
            }
        }
        if(n/6>0 )
        {
            summ+=n/6;
            n=n%6;
            
        }
        if(n/3>0 )
        {
            summ+=n/3;
            n=n%3;
            
        }
        if(n/1>0 )
        {
            summ+=n/1;
            n=n%1;
            
        }
        cout<<summ<<endl;
    }
}