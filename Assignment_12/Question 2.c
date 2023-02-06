#include<stdio.h>
void print(int n)
{
    if(n==0)
    return;
    printf("%d\n",n);
    print(n-1);
}
int main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    printf("The naturals number in reverse order from %d to 1 are\n",x);
    print(x);
    return 0;
}
