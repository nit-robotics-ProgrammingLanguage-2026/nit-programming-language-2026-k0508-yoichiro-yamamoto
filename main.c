#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n==0)
    printf ("No");
    else if (n<0)
    printf ("NG");
    else{
    if (0==n%3)
    printf ("Up");
    if (0==n%5)
    printf ("Go");
    if (0==n%7)
    printf ("!!");
    }
    return 0;
}