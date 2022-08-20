#include<stdio.h>

void insertion(int s[], int a);

int main()
{
    int a;
    scanf("%d", &a);
    int s[a];
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &s[i]);
    }
    insertion(s, a);
}

void insertion(int s[], int a)
{
    for(int i = 1; i < a; i++)
    {
        int j = i - 1, key = s[i];
        while(j >= 0 && s[j] > key)
        {
            s[j+1] = s[j];
            j--;
        }
        s[j + 1] = key;
    }
    for(int i = 0 ; i < a; i++)
    {
        printf("%d ", s[i]);
    }
}