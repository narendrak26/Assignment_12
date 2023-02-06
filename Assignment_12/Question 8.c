#include<stdio.h>
void binary(int n)
{
    if(n==0)
        return ;

    binary(n/2);
    printf("%d",n%2);

}
int main()
{
    int x;
    printf("Enter a number to find binary\n");
    scanf("%d",&x);
    binary(x);
    return 0;
}
