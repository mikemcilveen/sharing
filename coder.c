#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string original = get_string("\nOriginal String: ");
    string key = "halo";
    int coded[strlen(original)];
    
    int j = 0;
    for (int i = 0 ; i < strlen(original); i++)
    {
        printf("original: %c\t ascii: %i\t", original[i], original[i]);
        printf("key: %c\t ascii: %i\t", key[j], key[j]);
        coded[i] = (original[i] + key[j])%128;
        printf("coded: %c\t ascii: %i\n", coded[i], coded[i]);
        j++;
        if (j == strlen(key)) j=0;
    }
    // printf("\ncoded string: %s\n", coded);
}

