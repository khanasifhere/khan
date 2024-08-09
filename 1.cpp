#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        
        
        vector<long long int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            
        }
        sort(v.begin(),v.end());
       long long  int j=n-1;
       int summm=0;
        
        for(int i=0;i<2;i++)
        {
            
            if((v[j]-v[i])>0)
            {
                summm+=(v[j]-v[i]);
            }
            else
            {
                summm+=(v[i]-v[j]);
            }           
            j--;
            if((v[j]-v[i])>0)
            {
               summm+=(v[j]-v[i]);
            }
            else
            {
                summm+=(v[i]-v[j]);
            }  
            j=n-1;
            
        }
        cout<<summm<<endl;
        
    }
}