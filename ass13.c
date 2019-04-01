#include<stdio.h>
#include<conio.h>
void main()
{
    int a=5,b,n;
    float f=10.5,x;
    char c='r',t;
    printf("Check Type compatibility of each type press:\n");
    printf("press 1:int to float\n press 2:float to int\n press 3:int to char\n");
    printf("press 4:float to char\n press 5:char to int\n press 6:char to float\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        {
            printf("before check type compatibility by compiler the value of a is %d\n",a);
            x=a;
            printf("after type conversion by compiler the float value of a is %f",x);//here type is compatible of int assign to float
            break;
        }
    case 2:
        {
            printf("before check type compatibility by compiler the float value of f is %f\n",f);
            b=f;
            printf("after type conversion by compiler the float value of f is %d",b);//here type is not compatible because data is lost
            break;
        }
    case 3:
        {
           printf("Before check type compatibility by compiler the value of int a is %d\n",a);
           t=a;//here also type is not compatible because int value converted into some ascii value
           printf("after type conversion by compiler of int to char the value of a is %c",t);
           break;
        }
    case 4:
        {
            printf("Before check type compatibility by compiler the value of float f is %f\n",f);
            t=f;
            printf("after type conversion by compiler the float value f is %c",t);
            break;
        }
    case 5:
        {
            printf("Before check type compatibility by compiler the value of char c is %c\n",c);
            b=c;
            printf("After type conversion by compiler the char value of c is %d",b);
            break;
        }
    case 6:
        {
            printf("Before check type compatibility by compiler the value of char c is %c\n",c);
            x=c;
            printf("After type conversion by compiler the char value c is %f",x);
            break;
        }
    }
    getch();
}
