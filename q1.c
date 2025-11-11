#include <stdio.h>

void inputData(int arr[], int n);
float averagePatients(int arr[], int n);
int busiestDay(int arr[], int n, int *min_day, int *max_day, int *min_patients, int *max_patients);

void  inputData(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        printf("Enter number of patients for Day %d: ", i+1);
        scanf(" %d", &arr[i]);
    }
}

float averagePatients(int arr[], int n) {
    int sum = 0;
    float avg;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    avg = (float)sum / n;
    return avg;
}

int busiestDay(int arr[], int n, int *min_day, int *max_day, int *min_patients, int *max_patients) {
    int max = -999;
    int min = 999;
    *min_patients = arr[0];
    *max_patients = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            *max_patients = arr[i];
            *max_day = i+1;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            *min_patients = arr[i];
            *min_day = i+1;
        }
    }
}

int main() {
    int arr[7];
    int min_day, max_day, min_patients, max_patients;
    float avg;

    inputData(arr, 7);
    avg = averagePatients(arr, 7);
    busiestDay(arr, 7, &min_day, &max_day, &min_patients, &max_patients);

    printf("Average Patients per day: %.2f\n", avg);
    printf("Busiest Day: Day %d (%d patients)\n", max_day, max_patients);
    printf("Slowest Day: Day %d (%d patients)", min_day, min_patients);
    return 0;
}