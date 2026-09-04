#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    char userName[20];
    int guesser;
    int correct;
    int turns = 0;
    bool keepGoing = true;

    // Generate internal number 1–100
    srand(time(NULL));
    correct = rand() % 100 + 1;

    // Prompt user name
    printf("Enter your name: ");
    scanf("%19s", userName);

    // Greeting
    printf("Hello %s, want to play a game?\n", userName);

    // Main guessing loop
    while (keepGoing) {
        turns++;

        printf("Enter a number 1–100: ");
        scanf("%d", &guesser);

	if (guesser > correct) {
            printf("Too high!\n");
        } else if (guesser < correct) {
            printf("Too low!\n");
        } else {
            printf("You win!\n");
            keepGoing = false;
        }
    }

    // Evaluate performance
    if (turns < 7) {
        printf("Wow! Good job!\n");
    } else if (turns > 7) {
        printf("Yikes, that is not good.\n");
    } else { // turns == 7
        printf("That's average. Not bad.\n");
    }

    return 0;
}
