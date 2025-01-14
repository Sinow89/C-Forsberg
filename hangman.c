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

    char output;
    char full_word[50]; // To store the full word guess
    char *search = NULL;

    printf("A random word has been chosen! Try to guess its letters.\n");
    
    do {
        printf("Guess a character of the word: ");
        scanf(" %c", &output);  // The space before %c skips any leftover newline characters

        search = strchr(random_word, output);

        if (search != NULL) {
            printf("Found '%c' at position %lld\n", output, search - random_word + 1);
        } else {
            printf("No, '%c' is not in the word. Guess again!\n", output);
        }

        // Allow the user to guess the full word
        printf("Enter the full word to finish the game (or leave it blank to keep guessing): ");
        scanf("%s", full_word);

        // Check if the full word is correct
        if (strcmp(full_word, random_word) == 0) {
            printf("Congratulations! You guessed the full word '%s' correctly.\n", random_word);
            break; // Break the loop if the full word is guessed
        }

    } while (1);  // Infinite loop, breaks when the full word is guessed
}