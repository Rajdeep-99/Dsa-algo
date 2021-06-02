#include <stdio.h>
int power(int d,int c)
{
	int i,p;
	p=1;
	for(i=1;i<=c;i++)
	{
		p=p*d;
	}
	
	return p;
}
int main()
{
	int n,t,d,c,s;
	printf("Enter a number : ");
	scanf("%d",&n);
	t=n;c=0;
	while(t>0)
	{
		t=t/10;
		c++;
	}
	t=n;s=0;d=0;
	while(t>0)
	{
		d=t%10;
		t=t/10;
		s=s+power(d,c);
	}
	if(n==s)
	printf("Armstrong number");
	else
	printf("Not armstrong number");
}

