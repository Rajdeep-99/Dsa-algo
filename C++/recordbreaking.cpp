#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of days"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    int k=0;
    if(a[0]>a[1])
        k++;
    for(int i=1;i<n;i++)
    {
        int temp_max=a[i],fl=0;
        for(int j=0;j<i;j++)
        {
            if(a[j]>=temp_max)
            {
                temp_max=a[j];
                fl=1;
            } 
        }
        if((fl==0 && temp_max>a[i+1]))
            k++;
        else if(fl==0 && i==n-1)
            k++;
        else
            continue;
    }
    cout<<k<<endl;
}
