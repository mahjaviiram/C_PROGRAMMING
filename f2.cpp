#include<stdio.h>
void A();
void B();
void C();
main()
{
	printf("I am in main function\n");
	A();
	B();
	C();
}
void A()
{
	printf("I am in A function\n");
	C();
}
void B()
{
	printf("I am in B function\n");
}
void C()
{
	printf("I am in C function");
}
