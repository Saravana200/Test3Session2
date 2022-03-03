#include <stdio.h>
void input(int *num1,int *den1, int *num2,int *den2)
{
    printf("enter the first fraction in the order a/b\n");
    scanf("%d%*C%d",num1,den1);
    printf("enter the second fraction in the order a/b\n");
    scanf("%d%*C%d",num2,den2);
}
void add(int num1,int den1,int num2,int den2,int *num3,int *den3)
{
    int t=1;
    *num3=(num1*den2)+(num2*den1);
    *den3=den1*den2;
    int a=*den3,b=*num3;
    if(a<b)
    {
        t=b;
        b=a;
        a=t;
    }
    while(t!=0)
    {
        t=a%b;
        a=b;
        b=t;
    }  
    *num3=*num3/a;
    *den3=*den3/a;
}
void output(int num1,int den1,int num2,int den2,int num3,int den3)
{
    printf("%d %d",num3,den3);
}
int main()
{
    int num1,num2,den1,den2,num3,den3;
    input(&num1,&den1,&num2,&den2);
    add(num1,den1,num2,den2,&num3,&den3);
    output(num1,den1,num2,den2,num3,den3);
}