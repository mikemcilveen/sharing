#include <stdio.h>

int factorial (int n);
int fib(int n);

int main () 
{
    printf("\nFactorial: %i\n\n", factorial(10));
    
    for (int i = 0; i < 11; ++i)
    {
        printf("\nFib %i:  %i\n\n", i, fib(i));
    }
    
}

int factorial(int n){
    if (n==1){
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}

int fib(int n)
{
    if (n == 0 || n == 1) 
    {
      return 1;
    } 
    else 
    {
        int a = fib(n-1) + fib(n-2);
        printf (" %i ", a);
        return a;
    }
}
 
