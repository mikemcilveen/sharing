#include <stdio.h>
#include <stdlib.h>

int main () {
   int i, n;
   
   n = 10;
   
   /* Print 5 random numbers from 0 to 99 */
   for( i = 0 ; i < n ; i++ ) {
      printf("%i ", rand()%100);
   }  
   printf("\n");
   return(0);
}
