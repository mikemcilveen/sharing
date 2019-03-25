#include <stdio.h>
#include <stdlib.h>

int main () 
{
    
    
    // initialize array to be sorted
    int a[] = {1,14,1,13,0};
    
    // initialize index array
    // ap[i] = index of a[i] in the sorted array
    int ap[] = {0,1,2,3,4};
    int sp[] = {0,1,2,3,4};
    
    int j = 0;
    for (int i = 1; i < 5; ++i)
    {
        // start comparing element at i with sorted elements before position i
        j = i - 1;
        
        while (j >= 0 && a[i] < a[sp[j]])
        {
            j = j - 1;
        }
        
        ap[i] = j+1;
        sp[j+1] = i;
        
        for (int k = 0; k < i; ++k)
        {
            if (ap[k] >= j + 1)
            {
                ap[k] = ap[k] + 1;
                sp[ap[k]]=k;
          
            }
        }
    printf("\n\nPointers to s:\n");
    for (int l = 0; l < 5; ++l)
    {
        printf("%i ", ap[l]);
    }
    
    printf("\n\nPointers to a:\n");
    for (int l = 0; l < 5; ++l)
    {
        printf("%i ", sp[l]);
    }
    
    }

    
    // original 
    printf("\n\nOriginal:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%i ", a[i]);
    }
    
    // sorted 
    // sp[i] = the index of the element in a, with position i in the sorted array
    // 
//    for (int i = 0; i < 5; ++i)
//    {
//        sp[ap[i]] = i;
//    }
    printf("\n\nSorted:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%i ", a[sp[i]]);
    }
    printf("\n\n");
}
