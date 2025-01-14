#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

char random_character;
char character;
srand(time(NULL));

random_character = 'a' + (rand() % 26);
printf("Random character generated (for debugging): %c\n", random_character);

do {
    printf("Guess a character of a word: ");
    scanf(" %c", &character);

    if (character != random_character) {
        printf("No, that's not right. Guess again!\n");
    }

} while (character != random_character);

printf("You guessed right! The character was '%c'.\n", random_character);

}

