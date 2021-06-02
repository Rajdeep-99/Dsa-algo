#include<stdio.h>
void largest(int a[],int n)
{	
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("\nThe max element is... %d ",max);
}
int main()
{
	int a[100],n,i;
	printf("Enter the range of array : ");
	scanf("%d",&n);
	printf("Enter the elements....\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	largest(a,n);
}

