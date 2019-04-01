#include <stdio.h>
#include <stdlib.h>

int fun(a)
{
a=a+10;
return a;
}

int main()
{

int a, b;
a = 10;
b = a + fun(a);
printf("With the function call on the right, ");
printf(" b is: %d\n", b);
a = 10;
b = fun(a) + a;
printf("With the function call on the left, ");
printf(" b is: %d\n", b);
}
