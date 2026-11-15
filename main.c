#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n==0)
    printf ("No");
    else if (n<0)
    printf ("Error");
    else{
    if (0==n%3)
    printf ("Up");
    if (0==n%5)
    printf ("Go");
    if (0==n%7)
    printf ("!!");
    if (!(0==n%3 || 0==n%5 || 0==n%7))
    printf ("No");
    }
    return 0;
}