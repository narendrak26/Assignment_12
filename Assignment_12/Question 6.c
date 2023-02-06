#include<stdio.h>
int even(int n)
{
    if(n>0)
    {
        printf("%d\n",2*n);
        even(n-1);
    }
    else
    {
        return ;

    }
}
int main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    printf("Even numbers in order are\n");
    even(x);
    return 0;
}
