#include<stdio.h>
#include<stdlib.h>
int main()
{

int j = -3;
int i;
for(i = 0; i < 3; i++)
    {
switch(j + 2)
 {
case 3:
case 2: j--; ;
case 0: j += 2; ;
default: j = 0;
}
if (j > 0) ;
j = 3 - i;
}
printf("%d\n%d",i,j);
}
