#include<stdio.h>
int main()
{
    int t,s,b,capacity,kb,surface=2,bytes=512;

    scanf("%d%d%d",&t,&s,&b);

    capacity=t*s*b*surface*bytes;

    kb=capacity/1024;

    printf("%d KB",kb);

    return 0;
}
