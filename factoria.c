#include<stdio.h>
int fact(int n)
{
	if(n==0)
	return 1;
	return n*fact(n-1);
}
int main()
{

int num;
printf("enter the number\n");
scanf("%d",&num);
num=(fact(num));
printf("%d",num);
return 0;
}

