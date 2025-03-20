#include <stdio.h>
#include <stdlib.h>


//1
/*
void find_longest_landing(int arr[], int N, int *start_index, int *max_length) {
    *max_length = 1;
    int current_length = 1;
    *start_index = 0;
    int max_start_index = 0;

    for (int i = 1; i < N; i++) {
        if (arr[i] == arr[i - 1]) {
            current_length++;
        } else {
            if (current_length > *max_length) {
                *max_length = current_length;
                max_start_index = *start_index;
            }
            current_length = 1;
            *start_index = i;
        }
    }

    if (current_length > *max_length) {
        *max_length = current_length;
        max_start_index = *start_index;
    }

    *start_index = max_start_index;
}

int main() {
    int N;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the sorted array elements one by one:\n");
    for (int i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int start, length;
    find_longest_landing(arr, N, &start, &length);
    printf("Longest landing starts at index %d and has length %d.\n", start, length);

    return 0;
}
*/

//2
/*
int check_alternating_sequence(int arr[], int N) {
    if (N < 2) return 1;
    
    for (int i = 1; i < N; i++) {
        if (i % 2 == 1) {
            if (arr[i] <= arr[i - 1]) return 0;
        } else {
            if (arr[i] >= arr[i - 1]) return 0;
        }
    }
    return 1;
}

int main() {
    int N;
    printf("Enter the number of elements in the sequence: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the sequence elements one by one:\n");
    for (int i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    if (check_alternating_sequence(arr, N)) {
        printf("The sequence satisfies the alternating relation.\n");
    } else {
        printf("The sequence does not satisfy the alternating relation.\n");
    }

    return 0;
}
*/


//3
/*
void reverseArray(int arr[], int size) {
    int temp;
    int start = 0;
    int end = size - 1;
    
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    int N;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, N);

    printf("Reversed array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/

//4
/*
void rotateArray(int arr[], int N, int K) {
    K = K % N; 

    int temp[N];

    for (int i = 0; i < N; i++) {
        temp[(i + K) % N] = arr[i];
    }

    for (int i = 0; i < N; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int N, K;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to shift by (K): ");
    scanf("%d", &K);

    rotateArray(arr, N, K);

    printf("Array after shifting by %d positions: ", K);
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/

//5
/*
int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int N, K;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of K: ");
    scanf("%d", &K);

    qsort(arr, N, sizeof(int), compare);

    if (K > 0 && K <= N) {
        printf("The %dth largest element is: %d\n", K, arr[K - 1]);
    } else {
        printf("Invalid K value. K must be between 1 and %d.\n", N);
    }

    return 0;
}
*/

//6
/*
void longestIncreasingSubsequence(int arr[], int N) {
    int lis[N];
    int prev[N];

    for (int i = 0; i < N; i++) {
        lis[i] = 1;
        prev[i] = -1;
    }

    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1;
                prev[i] = j;
            }
        }
    }

    int maxLength = 0, maxIndex = -1;
    for (int i = 0; i < N; i++) {
        if (lis[i] > maxLength) {
            maxLength = lis[i];
            maxIndex = i;
        }
    }

    int result[maxLength];
    int index = maxLength - 1;
    while (maxIndex != -1) {
        result[index--] = arr[maxIndex];
        maxIndex = prev[maxIndex];
    }

    printf("Longest Increasing Subsequence: ");
    for (int i = 0; i < maxLength; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}

void longestDecreasingSubsequence(int arr[], int N) {
    int lds[N];
    int prev[N];

    for (int i = 0; i < N; i++) {
        lds[i] = 1;
        prev[i] = -1;
    }

    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] < arr[j] && lds[i] < lds[j] + 1) {
                lds[i] = lds[j] + 1;
                prev[i] = j;
            }
        }
    }

    int maxLength = 0, maxIndex = -1;
    for (int i = 0; i < N; i++) {
        if (lds[i] > maxLength) {
            maxLength = lds[i];
            maxIndex = i;
        }
    }

    int result[maxLength];
    int index = maxLength - 1;
    while (maxIndex != -1) {
        result[index--] = arr[maxIndex];
        maxIndex = prev[maxIndex];
    }

    printf("Longest Decreasing Subsequence: ");
    for (int i = 0; i < maxLength; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}

int main() {
    int N;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    longestIncreasingSubsequence(arr, N);

    longestDecreasingSubsequence(arr, N);

    return 0;
}
*/ 


//7
/*
void findSubset(int arr[], int N, int target, int index, int currentSum, int currentSubset[], int currentSize) {
    if (currentSum == target) {
        printf("Subset with sum %d: ", target);
        for (int i = 0; i < currentSize; i++) {
            printf("%d ", currentSubset[i]);
        }
        printf("\n");
        return;
    }

    if (index == N) {
        return;
    }

    currentSubset[currentSize] = arr[index];
    findSubset(arr, N, target, index + 1, currentSum + arr[index], currentSubset, currentSize + 1);

    findSubset(arr, N, target, index + 1, currentSum, currentSubset, currentSize);
}

int main() {
    int N, target;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &target);

    int currentSubset[N];

    findSubset(arr, N, target, 0, 0, currentSubset, 0);

    return 0;
}
*/

//8
/*
#define MAX_SIZE 20

void insertAtPosition(int arr[], int *size, int value, int position) {
    if (position >= 0 && position <= *size && *size < MAX_SIZE) {
        for (int i = *size; i > position; i--) {
            arr[i] = arr[i - 1];
        }

        arr[position] = value;
        (*size)++;
    } else {
        printf("Invalid position or array is full!\n");
    }
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int value, position;

    printf("Enter 10 numbers to initialize the array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        size++;
    }

    printf("Initial array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    while (1) {
        printf("Enter a number and position to insert (0 to stop): ");
        scanf("%d", &value);
        
        if (value == 0) {
            break;
        }

        printf("Enter position: ");
        scanf("%d", &position);

        insertAtPosition(arr, &size, value, position);

        printf("Current array: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        if (size == MAX_SIZE) {
            printf("Array is full, no more insertions can be made.\n");
            break;
        }
    }

    return 0;
}
*/

//9
/*
void findMaxConsecutiveSequence(int arr[], int size) {
    int maxCount = 1, currentCount = 1;
    int startIndex = 0, maxStartIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            currentCount++;
        } else {
            if (currentCount > maxCount) {
                maxCount = currentCount;
                maxStartIndex = i - currentCount;
            }
            currentCount = 1;
        }
    }

    if (currentCount > maxCount) {
        maxCount = currentCount;
        maxStartIndex = size - currentCount;
    }

    printf("The longest sequence of consecutive identical elements is: ");
    for (int i = maxStartIndex; i < maxStartIndex + maxCount; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findMaxConsecutiveSequence(arr, size);

    return 0;
}
*/