#include<stdio.h>

int recursion(int s);

int main()
{
    printf("So index ma ban muon tinh la: ");
    int s;
    scanf("%d", &s);
    printf("%d", recursion(s));
}

int recursion(int s)
{
    if(s < 2) return 1;
    else return recursion(s - 1) + recursion(s-2);
}