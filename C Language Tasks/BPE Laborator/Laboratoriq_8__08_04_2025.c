#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE_LENGTH 81
#define DELIMITERS " \t\n.?!"

char **text = NULL;
int line_count = 0;

void add_line() {
    char buffer[MAX_LINE_LENGTH];
    printf("Enter a new line (max 80 characters): ");
    getchar();
    fgets(buffer, MAX_LINE_LENGTH, stdin);

    text = realloc(text, (line_count + 1) * sizeof(char *));
    text[line_count] = strdup(buffer);
    line_count++;
}

void print_text() {
    printf("\nCurrent text:\n");
    for (int i = 0; i < line_count; i++) {
        printf("%2d: %s", i + 1, text[i]);
    }
    printf("\n");
}

int count_words() {
    int count = 0;
    for (int i = 0; i < line_count; i++) {
        char *line = strdup(text[i]);
        char *word = strtok(line, DELIMITERS);
        while (word) {
            count++;
            word = strtok(NULL, DELIMITERS);
        }
        free(line);
    }
    return count;
}

void left_align(int index) {
    if (index < 0 || index >= line_count) return;
    char *line = text[index];
    while (isspace(*line)) line++;
    text[index] = strdup(line);
}

void right_align(int index) {
    if (index < 0 || index >= line_count) return;
    char *line = text[index];
    while (isspace(*line)) line++;
    int len = strlen(line);
    while (len > 0 && isspace(line[len - 1])) len--;
    line[len] = '\0';

    char aligned[MAX_LINE_LENGTH];
    int padding = MAX_LINE_LENGTH - 2 - len;
    if (padding < 0) padding = 0;
    snprintf(aligned, MAX_LINE_LENGTH, "%*s%s", padding, "", line);

    free(text[index]);
    text[index] = strdup(aligned);
}

void reverse_line(int index) {
    if (index < 0 || index >= line_count) return;
    int len = strlen(text[index]);
    for (int i = 0; i < len / 2; i++) {
        char tmp = text[index][i];
        text[index][i] = text[index][len - i - 2];
        text[index][len - i - 2] = tmp;
    }
}

int search_word(const char *word) {
    int count = 0;
    for (int i = 0; i < line_count; i++) {
        char *line = strdup(text[i]);
        char *token = strtok(line, DELIMITERS);
        while (token) {
            if (strcmp(token, word) == 0) count++;
            token = strtok(NULL, DELIMITERS);
        }
        free(line);
    }
    return count;
}

void replace_word(const char *oldWord, const char *newWord) {
    for (int i = 0; i < line_count; i++) {
        char buffer[1024] = "";
        char *line = strdup(text[i]);
        char *token = strtok(line, DELIMITERS);
        char *pos = text[i];
        while (token) {
            char *found = strstr(pos, token);
            strncat(buffer, pos, found - pos);
            if (strcmp(token, oldWord) == 0) {
                strcat(buffer, newWord);
            } else {
                strcat(buffer, token);
            }
            pos = found + strlen(token);
            token = strtok(NULL, DELIMITERS);
        }
        strcat(buffer, pos);
        free(text[i]);
        text[i] = strdup(buffer);
        free(line);
    }
}

void free_text() {
    for (int i = 0; i < line_count; i++) {
        free(text[i]);
    }
    free(text);
}

void menu() {
    int choice;
    while (1) {
        printf("\n==== Text Editor Menu ====\n");
        printf("1. Add a line of text\n");
        printf("2. Display text\n");
        printf("3. Count words\n");
        printf("4. Left align a line\n");
        printf("5. Right align a line\n");
        printf("6. Reverse a line\n");
        printf("7. Search for a word\n");
        printf("8. Replace a word\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        int index;
        char word[81], new_word[81];

        switch (choice) {
            case 1:
                add_line();
                break;
            case 2:
                print_text();
                break;
            case 3:
                printf("Total words: %d\n", count_words());
                break;
            case 4:
                printf("Enter line number to left-align: ");
                scanf("%d", &index);
                left_align(index - 1);
                break;
            case 5:
                printf("Enter line number to right-align: ");
                scanf("%d", &index);
                right_align(index - 1);
                break;
            case 6:
                printf("Enter line number to reverse: ");
                scanf("%d", &index);
                reverse_line(index - 1);
                break;
            case 7:
                printf("Enter word to search: ");
                scanf("%s", word);
                printf("Found %d times\n", search_word(word));
                break;
            case 8:
                printf("Enter word to replace: ");
                scanf("%s", word);
                printf("Enter new word: ");
                scanf("%s", new_word);
                replace_word(word, new_word);
                break;
            case 9:
                free_text();
                printf("Goodbye!\n");
                return;
            default:
                printf("Invalid choice!\n");
        }
    }
}

int main() {
    menu();
    return 0;
}