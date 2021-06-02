#include<stdio.h>
int main()
{
	int n,i,j,k,c;
	c=1;
	printf("Enter the number of rows for the triangle : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=n-1;j>=i;j--)
		{
			printf(" ");
		}
		for(int k=1;k<=i;k++)
		{
			printf("%d",c);
			c++;
			printf(" ");
		}
		printf("\n");
	}
}

