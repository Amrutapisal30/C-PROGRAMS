#include<stdio.h>
//with return type without parameter
int add();//function protytpe
int sub();
int a,b,c;

main()
{
int ans,ans1;
ans=add();  //function calling
printf("\n add=%d",ans );

printf("\n add= %d",add());  //function calling
ans1=sub();
printf("\n sub=%d",ans1 );

printf("\n sub= %d",sub());
	
}
int add()//function defination
{
	
printf("\n enter a&b ");
scanf("%d%d",&a,&b);
c=a+b;
return c;	
}
int sub()//function defination
{
	
printf("\n enter a&b ");
scanf("%d%d",&a,&b);
c=a-b;
return c;	
}