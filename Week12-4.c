///Week12-4.cpp
///1021-05-08:
#include <stdio.h>

///���j�禡�G�p��� x �� Fibonacci ��
int fib(int);
int main (void)
{
    int n;
    scnaf("%d",&n);
    print("fib(%d)=%d",n,fib(n));
    return 0;

}

int fib( int x)
{
    if (x == 0) return 0;
    if (x == 1) return 1;
    return fib(x - 1) + fib(x - 2);
}
