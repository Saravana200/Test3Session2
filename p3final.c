#include <stdio.h>
int input_n_and_r(int *n,int *r)
{
    printf("enter the value in the form aCb\n");
    scanf("%d%*c%d",n,r);
}
int ncr(int n,int r)
{
    int i=n,t=n-r,a=1,b=1,c=1;
    for(;i>=1;i--)
    {
       if(r!=0)
         a=a*r--;
       if(t!=0)
         c=c*t--;
       b=b*i;
    }
    return b/(a*c);
}
void output(int n, int r, int result)
{
    printf("%dC%d=%d",n,r,result);
}
int main()
{
    int n,r;
    input_n_and_r(&n,&r);
    if(n<r)
    {
      printf("Wrong input enter again\n");
      input_n_and_r(&n,&r);
    }
    output(n,r,ncr(n,r));
}