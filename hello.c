#include <stdio.h>

int a[100];
void fun(int a[100])
{
	printf("%d\n", sizeof(a)); //4
}

int main()
{
	int b[100];
	printf("%d\n", sizeof(&a));
	fun(b);
	return 0;
}