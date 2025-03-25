#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


//1
/*
int main() {
    int arr[20];
    
    for (int i = 0; i < 20; i++) {
        arr[i] = i * 5;
    }
    
    printf("Array elements:\n");
    for (int i = 0; i < 20; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    return 0;
}
*/

//2
/*
#define MAX_LEN 20

void countCharacters(char *text) {
    int freq[256] = {0};
    
    for (int i = 0; text[i] != '\0' && i < MAX_LEN; i++) {
        freq[(unsigned char)text[i]]++;
    }
    
    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c - %d\n", i, freq[i]);
        }
    }
}

int main() {
    char text[MAX_LEN + 1];
    
    printf("Enter a string (max 20 characters): ");
    scanf("%20s", text);
    
    countCharacters(text);
    
    return 0;
}
*/

//3
/**/

//4
/*
#define SIZE 20

void findLongestRepeatingSequence(int arr[], int size) {
    int maxCount = 1, currentCount = 1;
    int maxElement = arr[0], currentElement = arr[0];
    int startIndex = 0, maxStartIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            currentCount++;
        } else {
            if (currentCount > maxCount) {
                maxCount = currentCount;
                maxElement = currentElement;
                maxStartIndex = startIndex;
            }
            currentElement = arr[i];
            currentCount = 1;
            startIndex = i;
        }
    }
    
    if (currentCount > maxCount) {
        maxCount = currentCount;
        maxElement = currentElement;
        maxStartIndex = startIndex;
    }

    printf("Longest repeating sequence: { ");
    for (int i = 0; i < maxCount; i++) {
        printf("%d ", maxElement);
    }
    printf("}\n");
}

int main() {
    int arr[SIZE];
    
    printf("Enter %d integers: ", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    
    findLongestRepeatingSequence(arr, SIZE);
    
    return 0;
}
*/

//5
/*
#define MAX_STUDENTS 32
#define MAX_NAME_LENGTH 128

void searchStudents(char students[MAX_STUDENTS][MAX_NAME_LENGTH], int count, char *query) {
    printf("Students matching '%s':\n", query);
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strstr(students[i], query) != NULL) {
            printf("%s\n", students[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("No matching students found.\n");
    }
}

int main() {
    char students[MAX_STUDENTS][MAX_NAME_LENGTH];
    int count;
    
    printf("Enter the number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &count);
    getchar();
    
    if (count > MAX_STUDENTS || count <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }
    
    printf("Enter the names of %d students:\n", count);
    for (int i = 0; i < count; i++) {
        fgets(students[i], MAX_NAME_LENGTH, stdin);
        students[i][strcspn(students[i], "\n")] = '\0';
    }
    
    char query[MAX_NAME_LENGTH];
    printf("Enter part of a name to search for: ");
    fgets(query, MAX_NAME_LENGTH, stdin);
    query[strcspn(query, "\n")] = '\0';
    

    searchStudents(students, count, query);
    
    return 0;
}
*/

//6
/*
int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int N, K;
    
    printf("Enter N and K: ");
    scanf("%d %d", &N, &K);
    
    if (K > N || K <= 0 || N <= 0) {
        printf("Invalid input.\n");
        return 1;
    }
    
    int arr[N];
    printf("Enter %d elements: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    qsort(arr, N, sizeof(int), compare);
    
    printf("Max sum elements: ");
    int sum = 0;
    for (int i = 0; i < K; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    printf("\nMax Sum: %d\n", sum);
    
    return 0;
}
*/

//7
/**/

//8
/*
#define MAX_SIZE 10

int main() {
    int arr[MAX_SIZE];
    int N;

    printf("Enter the number of elements (max %d): ", MAX_SIZE);
    scanf("%d", &N);

    if (N > MAX_SIZE || N <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    printf("Enter %d integers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int mostFreqElement = arr[0];
    int maxFreq = 1;

    for (int i = 0; i < N; i++) {
        int count = 1;
        for (int j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxFreq) {
            mostFreqElement = arr[i];
            maxFreq = count;
        }
    }

    printf("Most frequent element: %d (appears %d times)\n", mostFreqElement, maxFreq);

    return 0;
}
*/