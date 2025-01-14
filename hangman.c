#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

const char *words[] = {"apple", "banana", "cherry", "date", "elderberry"};

int main() {

    srand(time(NULL));
    int num_words = sizeof(words) / sizeof(words[0]);
    int random_index = rand() % num_words;
    const char *random_word = words[random_index];

    char* search;
    char output;
    char result = scanf("%c", &output);

    search = strchr(random_word, output);

    while (search != NULL) 
    {
        printf("Found at position- %lld\n", search - random_word + 1);
        search = strchr(search + 1, output);
    }
    return 0;

}