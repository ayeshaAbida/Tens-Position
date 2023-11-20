#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
while(1)
{
    scanf("%d",&n);
    if(n==-1)
    {
        break;
    }
    int ten_pos=(n/10)%10;
    printf("%d",ten_pos);
    return 0;
}
}
