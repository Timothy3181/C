#include<stdio.h>

int sum(int *arr, int m, int n);

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        *(arr + i) = i + 1;
    }
    int num1 = 0, num2 = 0;
    scanf("%d %d", &num1, &num2);
    int sumup = sum(arr, num1, num2);
    printf("%d", sumup);
    return 0;
}

int sum(int *arr, int m, int n)
{
    int addup = 0;
    for (int i = m - 1; i < n; i++) {
        addup += *(arr + i);
    }
    return addup;
}