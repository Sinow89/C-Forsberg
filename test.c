#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main () 
{
    const char *words[] = {"apple", "banana", "cherry", "date", "elderberry"};

    srand(time(NULL));
    int num_words = sizeof(words) / sizeof(words[0]);
    int random_index = rand() % num_words;
    const char *random_word = words[random_index];

    char* sh;
    char output;
    char result = scanf("%c", &output);

    sh = strchr(random_word, output);

    while (sh != NULL) 
    {
        printf("Found at position- %lld\n", sh - random_word + 1);
       sh = strchr(sh + 1, output);
    }
    return 0;
}