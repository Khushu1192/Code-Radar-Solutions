#include <stdio.h>

int index(int arr[], int n, int t) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == t) {
            return i;  // Return the index of the first occurrence
        }
    }
    return -1;  // Return -1 if the target is not found
}

int main() {
    int n;
    scanf("%d", &n);  // Input the size of the array

    if (n <= 0) {  // Handle invalid array size
        printf("-1\n");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Input array elements
    }

    int t;
    scanf("%d", &t);  // Input the target element

    int x = index(arr, n, t);  // Call the index function
    printf("%d\n", x);  // Print the result with a newline

    return 0;
}