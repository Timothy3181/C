#include<stdio.h>

int mystrcmp(char *p1, char *p2);

int main()
{
    char p1[10] = {'0'};
    char p2[10] = {'0'};
    scanf("%9s", p1);
    scanf("%9s", p2);
    int judge = mystrcmp(p1, p2);
    printf("%d", judge);
}

int mystrcmp(char *p1, char *p2)
{
    for (int i = 0; i < 10; i++) {
        if (*(p1 + i) == *(p2 + i)) {
            continue;
        }
        else {
            if ((int)(*(p1 + i)) > (int)(*(p2 + i))) {
                return 1;
            }
            else return -1;
        }
    }
    return 0;
}