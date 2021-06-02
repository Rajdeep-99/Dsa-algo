#include <iostream>
#include<climits>
using namespace std;

int main() {
	int n,k;
	
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=0;j<n-i-1;j++)
	        {
	            if(a[j]<a[j+1])
	            {
	                int temp=a[j];
	                a[j]=a[j+1];
	                a[j+1]=temp;
	            }
	        }
	    }
	    int se=0,so=0;
	    int maxSum=INT_MIN;
	    for(int i=0;i<n-2;i++)
	    {
	        if(i%2==0)
	            se=se+a[i];
	        else if(i%2!=0)
	            so=so+a[i];
	    }
	    if(n%2!=0)
	        so=so+a[n-1]+a[n-2];
	    else
	        so=so+a[n-1];
	   cout<<se<<" "<<so;
	    

	return 0;
}

