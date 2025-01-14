#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main () 
{
    const char *str = "Apple";
    char target = 'T';
    const char* result = str;
 
    while((result = strchr(result, target)) != NULL)
    {
        printf("Found '%c' starting at '%s'\n", target, result);
        ++result; // Increment result, otherwise we'll find target at the same location
    }
}