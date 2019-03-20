#include <stdio.h>
#include <stdlib.h>

int main () 
{
    int temp, min_index;
    int n = 49;
    
    // initialize array
    int a[49];
    for(int i = 0 ; i < n ; i++ ) 
    {
        a[i] = rand() % 49 + 1;
    }
    
    // output original array
    printf("\n\nOriginal:\n");
    for(int i = 0 ; i < n ; i++ ) 
    {
        printf("%i ",a[i]);
    }
   
    // sorting loop
    for (int j = 0; j < n; ++j)
    {
        int min = a[j];
        for(int i = j ; i < n ; i++ ) 
        {
           if (a[i] < min)
           {
               min = a[i];
               min_index = i;
           }
        }
        // swap
        temp = a[j];
        a[j] = a[min_index];
        a[min_index] = temp;
    }
    
    //output sorted array
    printf("\n\nSorted:\n");
    for(int i = 0 ; i < n ; i++ ) 
    {
        printf("%i ",a[i]);
    }
    
   printf("\n");
} 
