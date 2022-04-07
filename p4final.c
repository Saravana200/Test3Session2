#include <stdio.h>
int input_degree()
{
    int a;
    printf("enter the degree\n");
    scanf("%d",&a);  
    return a;
}
float input_x()
{
    float x;
    printf("enter the value of x\n");
    scanf("%f",&x);
    return x;
}
void input_coefficients(int n,float a[n])
{
    printf("enter the equation (enter x^2 as x2)\n");
    for(int i=0;i<n-1;i++)
     scanf("%f%*C%*c%*C",&a[i]);
    scanf("%f",&a[n-1]);
}
float evaluate_polynomial(int n,float a[n],float x)
{
    float t=a[0];
    for(int i=1;i<n;i++)
        t=t*x+a[i];
    return t;
}
void out_put(int n,float a[n],float x,float result)
{
    for(int i=0;i<n-1;i++)
    {
        printf("%fx%d+",a[i],n-i-1);
    }
    printf("%f=%f",a[n-1],result);
}
int main()
{
    int n=input_degree()+1;
    float x=input_x();
    float a[n];
    input_coefficients(n,a);
    out_put(n,a,x,evaluate_polynomial(n,a,x));
}