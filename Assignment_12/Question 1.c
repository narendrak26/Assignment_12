#include<stdio.h>
void natural(int x)
{
    if(x==0)
    return;
    natural(x-1);
    printf("%d\n",x);
}
int main()
{
    int n;
    printf("Enter the numbers\n");
    scanf("%d",&n);
    printf("The natural numbers from 1 to %d are\n",n);
    natural(n);
    return 0;
}
