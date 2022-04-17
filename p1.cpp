#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,max=INT_MIN; cin>>n;
    int a[n],num;
    for(int i=0; i<n; i++) cin>>a[i];
    
    int c=0;
    for(int i=0; i<n-1;i++)
    {
        if(a[i]==a[i+1]) 
        {
            c++;
        if(c>max)
        {
            max=c;
            num=a[i];
        }
        }
        else c=0;
    }
    cout<<num<<endl;

    return 0;
}