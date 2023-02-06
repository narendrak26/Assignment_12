#include<stdio.h>
void octal(int n)
{
    if(n==0)
        return ;
    octal(n/8);
    printf("%d",n%8);
}
int main()
{
    int x;
    printf("Enter a number to find octal\n");
    scanf("%d",&x);
    octal(x);
    return 0;
}
