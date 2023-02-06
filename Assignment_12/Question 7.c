#include<stdio.h>
int square(int n)
{
    if(n>0)
    {
        square(n-1);
        printf("%d\n",n*n);
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
    printf("Square of 1 to %d number are\n",x);
    square(x);
    return 0;
}
