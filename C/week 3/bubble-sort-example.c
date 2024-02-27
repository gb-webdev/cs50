#include <stdio.h>

int expression_matter(int a, int b, int c) {
    int arr_1[4];
    
    arr_1[0] = a * (b + c);
    arr_1[1] = a * b * c;
    arr_1[2] = a + b * c;
    arr_1[3] = (a + b) * c;
    
    for (int i = 0; i < 4 - 1; i++) {
        for (int j = 0; j < 4 - i - 1; j++) {
            if (arr_1[j] > arr_1[j + 1]) {
                // Swap arr_1[j] and arr_1[j+1]
                int temp = arr_1[j];
                arr_1[j] = arr_1[j + 1];
                arr_1[j + 1] = temp;
            }
        }
    }
}