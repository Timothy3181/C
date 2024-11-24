#include<stdio.h>

void swap(int **arr1, int **arr2);

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    int result[n];
    int *pa = arr;
    int *pr = result;
    for (int i = 0; i < n; i++) {
        scanf("%d", pa + i);
    }
    int start = 0;
    scanf("%d", &start);
    while (start > n)
    {
        scanf("%d", &start);
    }
    int count = 0;
    while (count < n)
    {
        if (start >= n) {
            start -= n;
        }
        *(pr + start) = *(pa + count);
        count++;
        start++;
    }
    swap(&pa, &pr);
    for (int i = 0; i < n; i++) {
        printf("%d ", *(pa + i));
    }
    printf("\n");
    return 0;
}

void swap(int **arr1, int **arr2)
{
    int *temp = *arr1;
    *arr1 = *arr2;
    *arr2 = temp;
}