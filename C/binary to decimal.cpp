#include<stdio.h>
void dec_to_bin(int n)
{
	int a[10],i,t=n;
	while(n>0)
	{
		a[i++]=n%2;
		n=n/2;
	}
	printf("\nThe equivalent binary the number is : ");
	if(t==0)
		printf("0");
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
int main()
{
	int n;
	printf("Enter the decimal number : ");
	scanf("%d",&n);
	dec_to_bin(n);
}

