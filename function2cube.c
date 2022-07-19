#include<stdio.h>
void cube(int side);
void fact(int n);
main()
{
	int side,n;
	printf("\n enter side= ");
	scanf("%d",&side);
	cube(side);
	printf("\n enter n= ");
	scanf("%d",&n);
	fact (n);	
	}
	void cube(int side)
	{
		int area;
		area=6*side*side;
		printf("\n area of cube=%d",area);
	}
	void fact(int n)
	{
		int i,f=1;
		for(i=1;i<=n;i++)
		{
			f=f*i;		
		}
		printf("\n fatorial =%d",f);
	}