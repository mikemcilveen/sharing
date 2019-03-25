/* This program uses an insertion sort to sort the indicies of an array, a, in ascending order.
 * 
 * That is, rather than moving the elements of the array a, we create an array, q, 
 * of indicies in which q(i) is the index in a of element i in the sorted array, s.
 * That is, s(i) = a(q(i)).   -(1)
 * 
 * Furthermore, we create another array of indicies, p, in which p(i) is the index
 * in s of element i in a. 
 * That is, a(i) = s(p(i)).   -(2)
 * 
 * When we combine the definitions (1) and (2) above, we have:
 * s(p(i)) = a(q(p(i))) , from (1) upon substituting p(i) for i; and,
 * s(p(i)) = a(i), from (2), so we see:
 * q(p(i)) = i
 * 
 * Finally, it is noted that p and q are inverse functions.
 * For example, if p(2) = 3, then q(3) = 2. Generally we have:
 * p(q(i)) = q(p(i)) = i. This fact is used to keep the array q up to date with the array p.
 *   
 */


#include <stdio.h>
#include <stdlib.h>

int main () 
{ 
    
    // initialize array to be sorted
    int a[] = {13,11,7,13,19};
    
    // initialize index arrays
    // p[i] = index of a[i] in the sorted array, s
    int p[] = {0,1,2,3,4};
    // q[i] = index of s[i] in the original array, a
    int q[] = {0,1,2,3,4};
    
    // Begin the Insertion Sort, standard algorithm.
    // With each iteration of i, we will have (i+1) sorted items in s.
    int j = 0;
    for (int i = 1; i < 5; ++i)
    {
        // Start comparing element at i with sorted elements before position i.
        // Sorted elements are referenced in a, by q[i].
        j = i - 1;
        // When the while loop quits, the correct index in s for a[i] will be j-1.
        while (j >= 0 && a[i] < a[q[j]])
        {
            j = j - 1;
        }
        // Update index of a[i] in s:
        p[i] = j+1;
        // Update the index of s[i] in a:
        q[j+1] = i;
        
        // Shifting items right, but with indicies we simply increment.
        
        for (int k = 0; k < i; ++k)
        {
            if (p[k] >= j + 1)
            {
                // Increment indicies in p that reference elements in s that need to shift right.
                p[k] = p[k] + 1;
                // Update the index in q for the element in s that shifted right.
                q[p[k]] = k;
          
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
        printf("%i ", a[q[i]]);
    }
    printf("\n\n");
}
