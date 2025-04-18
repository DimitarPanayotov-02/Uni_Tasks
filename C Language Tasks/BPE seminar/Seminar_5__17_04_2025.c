#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

//1
/*
int main() {
    int guests;
    
    printf("Enter the number of guests: ");
    scanf("%d", &guests);
    
    const double PRICE_CHAIR = 13.99;
    const double PRICE_TABLE = 42.00;
    const double PRICE_CUPS = 5.98;
    const double PRICE_DISHES = 21.02;

    int chairs = 0, tables = 0, cups = 0, dishes = 0;
    double total_spent = 0.0;

    char item[20];
    printf("Start entering purchased items one by one (Chair, Table, Cups, Dishes).\n");
    printf("Type 'PARTY!' when done:\n");

    while (1) {
        printf("> ");
        scanf("%s", item);
        if (strcmp(item, "PARTY!") == 0) break;

        if (strcmp(item, "Chair") == 0) {
            chairs++;
            total_spent += PRICE_CHAIR;
        } else if (strcmp(item, "Table") == 0) {
            tables++;
            total_spent += PRICE_TABLE;
        } else if (strcmp(item, "Cups") == 0) {
            cups++;
            total_spent += PRICE_CUPS;
        } else if (strcmp(item, "Dishes") == 0) {
            dishes++;
            total_spent += PRICE_DISHES;
        } else {
            printf("Invalid item. Please enter Chair, Table, Cups, or Dishes.\n");
        }
    }

    int needed_chairs = guests - chairs;
    int needed_tables = (int)ceil((double)guests / 8.0) - tables;
    int needed_cups = (int)ceil((double)guests / 6.0) - cups;
    int needed_dishes = (int)ceil((double)guests / 6.0) - dishes;

    if (needed_chairs < 0) needed_chairs = 0;
    if (needed_tables < 0) needed_tables = 0;
    if (needed_cups < 0) needed_cups = 0;
    if (needed_dishes < 0) needed_dishes = 0;

    printf("\nTotal spent so far: %.2f\n", total_spent);
    printf("Still needed:\n");
    if (needed_tables > 0) printf("- %d Table(s)\n", needed_tables);
    if (needed_chairs > 0) printf("- %d Chair(s)\n", needed_chairs);
    if (needed_dishes > 0) printf("- %d Dishes set(s)\n", needed_dishes);
    if (needed_tables == 0 && needed_chairs == 0 && needed_dishes == 0)
        printf("All necessary items are already purchased!\n");

    return 0;
}
*/

//2
/**/


//3
/**/

//4
/**/

//5
/*
#define MAX_WORD_LEN 100

int main() {
    char word[] = "tree";
    int word_len = strlen(word);
    char display[MAX_WORD_LEN];
    int guessed[26] = {0};
    int guesses = 0;
    int correct_guesses = 0;

    for (int i = 0; i < word_len; i++) {
        display[i] = '_';
    }
    display[word_len] = '\0';

    printf("Welcome to Hangman!\n");
    printf("Guess the word: %s (Length: %d)\n", display, word_len);

    while (correct_guesses < word_len) {
        char guess;
        int found = 0;

        printf("Enter a letter: ");
        scanf(" %c", &guess);
        guess = tolower(guess);

        if (!isalpha(guess)) {
            printf("Please enter a valid letter (a-z).\n");
            continue;
        }

        if (guessed[guess - 'a']) {
            printf("You've already guessed that letter.\n");
            continue;
        }

        guessed[guess - 'a'] = 1;
        guesses++;

        for (int i = 0; i < word_len; i++) {
            if (word[i] == guess && display[i] == '_') {
                display[i] = guess;
                found = 1;
                correct_guesses++;
            }
        }

        if (found) {
            printf("Good job! Current word: %s\n", display);
        } else {
            printf("Sorry, no '%c'. Current word: %s\n", guess, display);
        }
    }

    printf("You guessed the word: %s\n", word);
    printf("Total letters entered: %d\n", guesses);

    if (guesses <= word_len + 2) {
        printf("Congratulations! You win!\n");
    } else {
        printf("You guessed the word, but exceeded the allowed number of guesses. Try again!\n");
    }

    return 0;
}
*/

//6
/*
int isAnagram(const char *str1, const char *str2) {
    int count[26] = {0};
    int i;

    if (strlen(str1) != strlen(str2)) return 0;

    for (i = 0; str1[i] != '\0'; i++) {
        if (isalpha(str1[i])) count[tolower(str1[i]) - 'a']++;
        if (isalpha(str2[i])) count[tolower(str2[i]) - 'a']--;
    }

    for (i = 0; i < 26; i++) {
        if (count[i] != 0) return 0;
    }

    return 1;
}

int main() {
    const char *word1 = "listen";
    const char *word2 = "silent";

    if (isAnagram(word1, word2)) {
        printf("\"%s\" and \"%s\" are anagrams!\n", word1, word2);
    } else {
        printf("\"%s\" and \"%s\" are NOT anagrams.\n", word1, word2);
    }

    return 0;
}
*/

//7
/**/