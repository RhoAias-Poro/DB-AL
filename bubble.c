#include<stdio.h>

void bubble(int s[], int a);

int main()
{
    int a;
    scanf("%d", &a);
    int s[a];
    for(int i = 0; i < a; i++)
    {
        scanf("%d", &s[i]);
    }
    bubble(s, a);
}

void bubble(int s[], int a)
{
    int check = 0, swap;
    for(int j = 0; j < a - 1; j++)
    {
        for(int i = 0; i < a - j - 1; i++)
        {
            if(s[i] > s[i+1])
            {
                swap = s[i];
                s[i] = s[i+1];
                s[i+1] = swap;
            }
        }
    }
    for(int i = 0; i < a; i++)
    {
        printf("%d ", s[i]);
    }
}