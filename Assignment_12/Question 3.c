#include<stdio.h>
void odd(int x)
{
    if(x>0)
    {
        odd(x-1);
        printf("%d\n",2*x-1);

    }
    else
    {
        return;
    }
}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("The Odd numbers are\n");
    odd(n);
    return 0;
}
