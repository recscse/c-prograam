#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
int arr[100];
void main()
{
 //static_arr();
 stack_arr();
 //dynamic_arr();

}
void static_arr()
{
    clock_t start,end;
    double total;
    int count=1,i;
    start=clock();
    for(i=1;i<=100000;i++)
    {
       static int arr[100];
        printf("\nCreating Static array of times :%d:Success:address of array is:\n",count++);
        //printf("%u\n",&arr);
    }
    end=clock();
    total=(double)(end-start)/CLOCKS_PER_SEC;
    printf("\ntotal time static arr %lf",total);
    getch();
}
void stack_arr()
{
    int count=1,i,n;
    double total;
    clock_t start,end;
    scanf("%d",&n);
    start=clock();
    for(i=1;i<=100000;i++)
    {
         arr[n];
        printf("\nCreating Stack array of times:%d:success:Address of arr:\n",count++);

        //printf("%u",&arr[n]);
    }
    end=clock();
    total=(double)(end-start)/CLOCKS_PER_SEC;
    printf("\nTotal time Stack array%lf\n",total);
    getch();
}
void dynamic_arr()
{
    int count=1,i;
    double total;
    clock_t start,end;
    start=clock();
    for(i=1;i<=100000;i++)
    {
        int* arr=(int *)malloc(100* sizeof(int));
        printf("Creating dynamic array of times:%d:success:Address of arr:",count++);

    }
    end=clock();
    total=(double)(end-start)/CLOCKS_PER_SEC;
    printf("\nTotal time required to Heap array :%lf",total);
}
