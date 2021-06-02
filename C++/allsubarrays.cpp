#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int st=0,en=0;
    while(st<n)
    {
        while(en<n)
        {
            for(int i=st;i<=en;i++)
            {
                cout<<a[i]<<",";
            }
            en++;
            cout<<endl;
        }
        st++;
        en=st;
    }
    return 0;
}