#include<stdio.h>
void revers(int n)
{
    if(n==0)
        return ;
    printf("%d",n%10);
    revers(n/10);
}
int main()
{
    int x;
    printf("Enter a number to find revers\n");
    scanf("%d",&x);
    revers(x);
    return 0;
}
