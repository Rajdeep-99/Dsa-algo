#include<stdio.h>
int main()
{
	int a[] = {1,2,4,6,3,7,8};
	int i,s=0,n,x;
	x=sizeof(a)/sizeof(a[0]);
	n=x+1;
	x=(n*(n+1))/2;
	for(i=0;i<n-1;i++)
		s=s+a[i];
	n=x-s;
	printf("Missing number : %d",n);
}
