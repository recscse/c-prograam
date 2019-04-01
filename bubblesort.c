#include<stdio.h>
#include<conio.h>

int main()
{
	int A[]= {34,11,4,56,78,9,15,29,8l};
	int i;
	Bubble_sort(A,9);
	for(i=0;i<=8;i++)
	printf("%d\n",A [i]); 
	getch();
	
}
  void Bubble_sort(int A[],int N)
{
	int round,i,temp,flag;
	for(round=1;round<=N-1;round++)
	{
		flag=0;
		for(i=0;i<=N-1-round;i++)
	
	if(A[i]>A[i+1])
	{
		flag=1;
	     temp=A[i];
		 A[i]=A[i+1];
		 A[i+1]=temp;	
	}
	if(flag==0)
	{
	printf(" this is value round %d\n",round);
	return;
    }
}

}
