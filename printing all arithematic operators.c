//printing all arithmetic operations
#include<stdio.h>
void main()
{
	int a,b,A,S,M,D,MD;
	a=20;
	b=4;
	A=a+b;
	S=a-b;
	M=a*b;
	D=a/b;
	MD=a%b;
	
	printf("sum of %d and %d is %d\n",a,b,A);
	printf("difference between %d and %d is %d\n",a,b,S);
	printf("products of %d and %d is %d\n",a,b,M);
	printf("coefficient of %d and %d is %d\n",a,b,D);
	printf("remainder of %d and %d is %d\n",a,b,MD);
}
