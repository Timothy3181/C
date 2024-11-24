#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>

void selectsort(char *arr, int len);
void swap(char *a, char *b);

int main() {
    int n = 0;
    scanf("%d", &n);
    char str1[n];
    char str2[n];
    scanf("%s", str1);
    scanf("%s", str2);
    char *ps1 = str1;
    char *ps2 = str2;
    int c1 = strlen(ps1);
    int c2 = strlen(ps2);
    int sum = c1 + c2;
    char str[sum + 1];
    char *ps = str;
    int count = 0;
    while (count < sum) {
        if (count < c1) {
            *ps = *ps1;
            ps++;
            ps1++;
        } else {
            *ps = *ps2;
            ps++;
            ps2++;
        }
        count++;
    }
    *ps = '\0';
    ps = str;
    char deal[100] = {0};
    char *pd = deal;
    int count1 = 0;
    for (int i = 0; i < strlen(ps); i++) {
        int found = 0;
        for (int j = 0; j < count1; j++) {
            if (*(ps + i) == *(pd + j)) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            *(pd + count1) = *(ps + i);
            count1++;
        }
    }
    *(pd + count1) = '\0';
    pd = deal;
    int len = strlen(pd);
    selectsort(pd, len);
    printf("%s\n", pd);
    return 0;
}

void swap(char *a, char *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectsort(char *arr, int len)
{
    int start = 0;
    int judge = 0;
    while (judge == 0) {
        judge = 1;
        int min = INT_MAX;
        for (int i = start; i < len; i++) {
            if ((int)(*(arr + i)) < min) {
                min = (int)(*(arr + i));
            }
        }
        for (int i = start; i < len; i++) {
            if ((int)(*(arr + i)) == min) {
                swap((arr + start),(arr + i));
                start++;
                judge = 0;
            }
        }
    }
}