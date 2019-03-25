#include <stdio.h>
#include <stdlib.h>

int main () 
{
    
    
    // initialize array to be sorted
    int a[] = {21,14,11,13,30};
    
    // initialize index array
    // ap[i] = index of a[i] in the sorted array
    int ap[] = {0,1,2,3,4};
    
    int j = 0;
    for (int i = 1; i < 5; ++i)
    {
        // start comparing element at i with sorted elements before position i
        j = i - 1;
        
        while (j >= 0 && a[i] < a[j])
        {
            j = j - 1;
        }
        ap[i] = j+1;
        for (int k = 0; k < i; ++k)
        {
            if (ap[k] >= j + 1)
            {
                ap[k] = ap[k] + 1;
            }
        }
    }
    // original 
    printf("\n\nPointers:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%i ", ap[i]);
    }
    
    // original 
    printf("\n\nOriginal:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%i ", a[i]);
    }
    
    // sorted 
    // q[i] = the index of the element in a, with position i in the sorted array
    int sp[5];
    for (int i = 0; i < 5; ++i)
    {
        sp[ap[i]] = i;
    }
    printf("\n\nSorted:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%i ", a[sp[i]]);
    }
    printf("\n\n");
}

