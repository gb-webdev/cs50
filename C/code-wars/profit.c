#include <stdio.h>

// Ben has a very simple idea to make some profit: he buys something and sells it again.
// Of course, this wouldn't give him any profit at all if he was simply to buy and sell it at the same price.
// Instead, he's going to buy it for the lowest possible price and sell it at the highest.

// Task
// Write a function that returns both the minimum and maximum number of the given list/array.

// Examples (Input --> Output)
// [1,2,3,4,5] --> [1,5]
// [2334454,5] --> [5,2334454]
// [1]         --> [1,1]
// Remarks
// All arrays or lists will always have at least one element, so you don't need to check the length. Also,
// your function will always get an array or a list, you don't have to check for null, undefined or similar.

void bubble_sort(int arr[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void min_max(const int arr[], int count, int *min, int *max) {
    int sorted[count];
    for (int i = 0; i < count; i++) {
        sorted[i] = arr[i];
    }

    bubble_sort(sorted, count);

    *min = sorted[0];
    *max = sorted[count - 1];