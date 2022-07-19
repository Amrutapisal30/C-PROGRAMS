#include<stdio.h>
//without return type without parameter
void fun1();//function prototype
void fun2();
void fun3();
main()
{
	fun1();//function calling
  fun2();
  fun3();
}
void fun1() //function defination
{
	printf("\n it is function1 ");
}
void fun2() //function defination
{
	fun1();
	
	printf("\n it is function2 ");
}
void fun3() //function defination
{
	
	printf("\n it is function3 ");
   func2();
}