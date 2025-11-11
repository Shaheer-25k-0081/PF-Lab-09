#include <stdio.h>

void analyzeData(int *arr, int n, int *max, int *min, float *avg) {
    *max = *arr;
    *min = *arr;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (*arr > *max)
        {
            *max = *arr;
        }
        if (*arr < *min)
        {
            *min = *arr;
        }
        sum += *arr;
        arr ++;
    }
    *avg = (float)sum / n;
}

int main() {
    int arr[] = {40, 70, 65, 80, 52, 60};
    int n = 6;
    int max, min;
    float avg;
    analyzeData(arr, n, &max, &min, &avg);

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    printf("Average = %.2f", avg);
    
    return 0;
}