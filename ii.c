// A sorting program. 
// Uses insertion sort to create an array of indicies, ap, which give the index of the final sorted position of an array element in a.  
// The position index is then used to create an array of index pointers, sp, to the sorted elements.

#include <stdio.h>
#include <stdlib.h>

int main () 
{
    
    
    // initialize array to be sorted
    int a[] = {2,1,1,3,0};
    
    // initialize index array
    // ap[i] = index of a[i] in the sorted array
    int ap[] = {0,1,2,3,4};
    
    int j = 0;
    for (int i = 1; i < 5; ++i)
    {
        // start comparing element at i with sorted elements before position i
        j = i - 1;
        
        while (j >= 0 && a[i] < a[ap[j]])
        {
            j = j - 1;
        }
        ap[j+1] = i;
        for (int k = 0; k < i; ++k)
        {
            if (ap[k] <= j + 1)
            {
                ap[k] = ap[k] + 1;
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
