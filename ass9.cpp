#include<iostream>
using namespace std;
int main()
{
    int a=5,i;//non local variable
    cout<<"\nvalue of a is ="<<a;
    for(int i=0;i<5;i++)
    {
        int a=10;//here hide the value of non local variable
        int x=0;//local variable scope of the variable x is inside the for loop only
        x+=i;
        cout<<"\nthe value of x is ="<<x;
        cout<<"\nvalue of a is ="<<a;
    }
    cout<<"\nvalue of a is = "<<a;//scope of non-local variable until function is terminate
   // cout<<"the value of x is ="+x; 'x' was not declared in this scope
    return 0;
}
