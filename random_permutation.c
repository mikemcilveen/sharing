/* This program produces a permutation of the elements
 * of an array. 
 * 
 * The original array is unchanged. Only a permuation 
 * of the indexes is actually produced.
 * 
 * Stationary items within the permutation are marked 
 * with an asterisk.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () 
{
    srand(time(0)); 
    
    // Initialize the array to be permuted
    int a[] = {13,11,7,17,19};
    
    // Initialize the index arrays
    // p[i] = array of indexes to be permuted
    int p[] = {0,1,2,3,4};
    // q[i] = permuted array of indexes
    int q[] = {0,1,2,3,4};
    
    int r;   
    
    for(int i = 0; i < 5; ++i)
    {
        // Pick a random index from p, between 0 and 4-i
        r = rand()%(5-i); 
        
        // Append the random index from p to the permutation array, q
        q[i] = p[r];        
        
        // p becomes shorter by 1, so fill the used index with the last index
        p[r] = p[4-i];
    }

    // Original 
    printf("\n\nOriginal:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf(" %i", a[i]);
    }
    
    // Permutation of Indexes
    printf("\n\nNew Indexes:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf(" %i ", q[i]);
    }
    
    // Permuted 
    printf("\n\nPermuted:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf(" %i", a[q[i]]);
        // Check for stationary point
        if (i == q[i])
        {
            printf("*");
        }
    }
    printf("\n\n");
}
