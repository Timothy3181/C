#include<stdio.h>

int main()
{
    int arr[13];
    int *p = arr;
    for (int i = 0; i < 13; i++) {
        *(arr + i) = i + 1;
    }
    int out = 0;
    while (out < 12)
    {
        int count = 0;
        p=arr;
        while (1)
        {
            if (*p != -1) {
                count++;
            }
            if (count == 3) {
                *p = -1;
                out++;
                break;
            }
            p++;
            if (p - arr >= 13) {
                p = arr;
            }
        }
    }
    for (int i = 0; i < 13; i++) {
        if (*(arr + i) != -1) {
            printf("%d", *(arr + i));
        }
    }
    printf("\n");
    return 0;
}