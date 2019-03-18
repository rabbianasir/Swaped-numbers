#include<stdio.h>
void main()
{
    int x=5;
    int y=10;
    swap(&x,&y);
    printf("x=%d\ny=%d",x,y);
}
void swap(int *,int *);
void swap(int *t,int *z)
{
    int s;
    s=*t;
    *t=*z;
    *z=s;
    printf("%d\n%d",t,z);
}
