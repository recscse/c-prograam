#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,sum=0;
    printf("enter the n digit number \n");
    scanf("%d",&n);
    
    while(n>0)
{
    m=n % 10;
    n=n/10;
    sum=sum+m;
    
    
}
printf("%d\n",sum);
      
  return 0;


}
