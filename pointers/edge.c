#include <stdio.h>
//REVISEEE REDOOOOOOO
// Function to detect edges in a binary bar code pattern
// a1: input array (binary bit pattern)
// a2: output array (detected edges)
// n: size of the input and output arrays
void edge(int *a1, int *a2, int n) {
    // The first output bit is always 0 since there is no previous bit to compare
    *a2 = 0;

     // Loop through the input array starting from the second element (index 1)
    for (int i = 1; i < n; i++) {
        // Compare the current bit with the previous bit
        if (*(a1 + i) == *(a1 + i - 1)) {
            // If they are the same, set the corresponding output bit to 0
            *(a2 + i) = 0;
        } else {
            // If they are different, set the corresponding output bit to 1
            *(a2 + i) = 1;
        }
    }
}

int main() {
    char input[100];
    printf("Enter the input bit pattern: ");
    scanf("%s", input);

    // Determine the length of the input
    int n = 0;
    while (input[n] != '\0') {
        n++;
    }

    int a1[n], a2[n];  // Input and output arrays

    // Convert input string to integer array
    for (int i = 0; i < n; i++) {
        a1[i] = input[i] - '0';  // Convert char '0' or '1' to int 0 or 1
    }

    // Call the edge function
    edge(a1, a2, n);

    // Print the output bit pattern
    printf("Output bit pattern: ");
    for (int i = 0; i < n; i++) {
        printf("%d", a2[i]);
    }
    printf("\n");

    return 0;
}
