#include<stdio.h>
#include<string.h>

void insert(char *s1, char *s2, char ch);

int main()
{
    int n = 0;
    scanf("%d", &n);
    char str1[n];
    char str2[n];
    char *s1 = str1;
    char *s2 = str2;
    scanf("%s", s1);
    scanf("%s", s2);
    char ch;
    getchar();
    scanf("%c", &ch);
    insert(s1, s2, ch);
    printf("%s", s1);
    return 0;
}

void insert(char *s1, char *s2, char ch)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    char new[100];
    char *pn = new;
    int count = 0;
    while (*s1 != '\0')
    {
        *pn = *s1;
        pn++;
        if (*s1 == ch) {
            char *pp = s2;
            while (*pp != '\0')
            {
                *pn = *pp;
                pn++;
                pp++;
            }
        }
        s1++;
    }
    *pn = '\0';
    strcpy(s1 - len1, new);
}