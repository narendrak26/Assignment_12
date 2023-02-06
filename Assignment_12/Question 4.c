#include<stdio.h>
void odd(int n)
{
    if(n>0)
    {
        printf("%d\n",2*n-1);
        odd(n-1);

    }
    else
    {
        return;
    }
}
int main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    printf("The odd number in revers order are\n");
    odd(x);
    return 0;
}
