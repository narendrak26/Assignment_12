#include<stdio.h>
int even(int n)
{
    if(n>0)
    {
        even(n-1);
        printf("%d\n",2*n);
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
    printf("EVEN numbers are\n");
    even(x);
    return 0;

}
