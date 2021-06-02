


#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0,k=0;
    for(int i=0;i<n-1;i++)
    {
    	c=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c>1)
        {   
            k=a[i];
            break;
        }
    }
    if(c==1)
        cout<<"There is no repeating elements"<<endl;
    else
        cout<<k<<" is the element to repeat first with "<<c<<" times"<<endl;
    return 0;
}
