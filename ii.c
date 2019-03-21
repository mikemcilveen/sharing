#include <stdio.h>
#include <stdlib.h>

int main () 
{
    
    
    // initialize array to be sorted
    int a[] = {2,1,1,3,0};
    
    // initialize index array
    // p[i] = index of a[i] in the sorted array
    int p[] = {0,1,2,3,4};
    
    int j = 0;
    for (int i = 1; i < 5; ++i)
    {
        // start comparing element at i with sorted elements before position i
        j = i - 1;
        
        while (j >= 0 && a[i] < a[p[j]])
        {
            j = j - 1;
        }
        p[j+1] = i;
        for (int k = 0; k < i; ++k)
        {
            if (p[k] <= j + 1)
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
    // q[i] = the index of the element in a, with position i in the sorted array
    int q[5];
    for (int i = 0; i < 5; ++i)
    {
        q[p[i]] = i;
    }
    printf("\n\nSorted:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%i ", q[i]);
    }
    printf("\n\n");
}
