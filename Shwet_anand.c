#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        // If no two elements were swapped, array is sorted
        if (swapped == 0) break;
    }
}

// Function to perform Binary Search
int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2; // Prevents potential overflow

        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 22;

    printf("Original array: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);

    // Step 1: Sort
    bubbleSort(arr, n);

    printf("\nSorted array:   ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);

    // Step 2: Search
    int result = binarySearch(arr, n, target);

    if (result != -1)
        printf("\nElement %d found at index %d\n", target, result);
    else
        printf("\nElement %d not found\n", target);

    return 0;
}
