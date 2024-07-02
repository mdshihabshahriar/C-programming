#include <stdio.h>

int calculateSum(int* arr, int n) {
    if (n == 0) {
        return 0;  // Base case: When the array is empty, the sum is 0.
    }
    
    // Recursive case: Sum the current element and the sum of the rest of the elements.
    return arr[n - 1] + calculateSum(arr, n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int summation = calculateSum(arr, n);
    printf("%d\n", summation);

    return 0;
}
