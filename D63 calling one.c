#include <stdio.h>

float per(float a[], int n) {
    float sum = 0.0;
    for (int i=0; i<n; i++) {
        sum = sum + a[i];
    }
    float percentage = (sum / (n * 100)) * 100;
    return percentage;
}

int main() {
    int n;
    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    float arr[n];
    printf("Enter the marks for each subject:\n");
    for (int i=0; i<n; i++) {
        printf("Subject %d: ", i+1);
        scanf("%f", &arr[i]);
    }

    float result = per(arr, n);
    printf("\nThe percentage of the student is: %.2f%%\n", result);

    return 0;
}
