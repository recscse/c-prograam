#include<stdio.h>


int fun(int *k)
{
  *k += 4;
    printf("value of k is %d \n",*k);

return 3 * (*k) - 1;

}
//Suppose fun is used in a program as follows:
void main()
{
int i = 10, j = 10, sum1, sum2;
sum1 = (i / 2) + fun(&i);
sum2 = fun(&j) + (j / 2);
printf("the value sum1 %d \n sum2 %d",sum1,sum2);
}

