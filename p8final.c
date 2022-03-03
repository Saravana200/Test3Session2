#include <stdio.h>
struct _fraction
{
    int num,den;
};typedef struct _fraction Fraction;
int find_gcd(int a,int b)
{
    if(a==0)
      return b;
    return find_gcd(b%a,a);
}
Fraction input_fractions()
{
    Fraction f;
    printf("enter the fraction in the order a/b\n");
    scanf("%d%*C%d",&f.num,&f.den);
    return f;
}
void input_n_fractions(int n, Fraction f[n])
{
    for(int i=0;i<n;i++)
      f[i]=input_fractions();
}
Fraction add_fractions(Fraction f1,Fraction f2)
{
    Fraction f;
    int t=1;
    f.num=(f1.num*f2.den)+(f2.num*f1.den);
    f.den=f1.den*f2.den;
    int a=f.den,b=f.num;
    if(a<b)
    {
        t=b;
        b=a;
        a=t;
    }
    t=find_gcd(b,a);
    f.num=f.num/t;
    f.den=f.den/t;
    return f;
}
Fraction add_n_fractions(int n,Fraction f[n])
{
    Fraction sum;
    sum.num=0;
    sum.den=1;
    for(int i=0;i<n;i++)
      sum=add_fractions(sum,f[i]);
    return sum;
}
void output(int n,Fraction f[n],Fraction sum)
{
    for(int i=0;i<n-1;i++)
    {
        printf("%d/%d+",f[i].num,f[i].den);
    }
    printf("%d/%d=%d/%d",f[n-1].num,f[n-1].den,sum.num,sum.den);
}
int main()
{
    int n;
    printf("enter value of n\n");
    scanf("%d",&n);
    Fraction f[n];
    input_n_fractions(n,f);
    Fraction f3=add_n_fractions(n,f);
    output(n,f,f3);
}
