#include<iostream>
using namespace std;

int fun(int *k)
{
    *k += 4;
    cout<<"value of k is \n" << *k ;
    return 3 * (*k) - 1;
}
// Suppose fun is used in a program as follows:
    int main()
    {
    int i = 10, j = 10, sum1, sum2;
    sum1 = (i / 2) + fun(&i);
    sum2 = fun(&j) + (j / 2);
    cout<<"\n"<<sum1;
    cout<<"\n"<<sum2;
}
