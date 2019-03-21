#include <stdio.h>
#include <stdlib.h>

int main () 
{
    
    
    // initialize array
    int a[] = {2,1,4,3,5}
    int j = 0;
    for (int i = 1; i < 5; ++i)
    {
        j = i - 1;
        while (a[i] < a[p[j]] && j >=0)
        {
            j = j - 1;
        }
        p[i] = j + 1;
        for (int k = 0; k < i; ++k)
        {
            if (p[k] >= j + 1)
            {
                p[k] = p[k] + 1;
            }
        }
    }
    
    // original 
    printf("\n\nOriginal:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%i ", a[i]);
    }
    
    // sorted 
    printf("\n\nSorted:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%i ", a[p[i]]);
    }
}
