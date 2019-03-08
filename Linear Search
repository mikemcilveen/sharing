/* 
 * Program that generates ten thousands random numbers 
 * Between 0 and 99, and then outputs the number that
 * occurs the most and least and how many times those
 * two occured
 * By Zachary Gilham
 * For Mr. McIlveen's ICS4U class
 */

// Import the needed libraries 
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

// Store the number of randomized numbers
const int LENGTH = 10000; 

// main function, runs the program
int main(void)
{
    // Check and store the current time
    time_t seconds = time(NULL);
    // Use the time as a seed for the random number generator 
    srand(seconds); 
    
    // Array to store each number 
    int nums[LENGTH];
    // Array to store how often each number appears
    int counter[100]; 
    // Variable to store the lowest number that has appeared
    int low = 99;
    // Variable to store how many times the that lowest number has appeared 
    int low_val = 0; 
    // Variable to store the highest number that has appeared 
    int high = 0; 
    // Variable to store how many times the that highest number has appeared
    int high_val = 0; 
    // Set the number of times each number has appeared to zero 
    for(int i = 0; i < 100; i++)
    {
        counter[i] = 0; 
    }
    // Generate all the random numbers and record how often each appears
    for(int i = 0; i < LENGTH; i++)
    {
        // Generate and store the number 
        nums[i] = rand() % 100; 
        // Add to the number of times that specific number has appeared 
        counter[nums[i]]++; 
    }
    // Check each number to see which appeared the most and least
    for(int i = 0; i < 100; i++)
    {
        // If the current number is the highest so far store it 
        if(counter[i] > high) 
        {
            high = counter[i]; 
            high_val = i; 
        }
        // If the current current number is the lowest so far store it 
        if(counter[i] < low)
        {
            low = counter[i];
            low_val = i; 
        }
    }
    // Print the lowest & highest numbers and how often each appears 
    printf("The most common number %i appears %i times\n", high_val, high);
    printf("The least common number %i appears %i times\n", low_val, low);
}
// Program end

