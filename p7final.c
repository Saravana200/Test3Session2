#include <stdio.h>
struct _fraction
{
    int num,den;
};typedef struct _fraction Fraction;
int find_gcd(int a,int b)
{
    if(a==0)
      return b;
    find_gcd(b%a,a);
}
Fraction input_fractions()
{
    Fraction f;
    printf("enter the fraction in the order a/b\n");
    scanf("%d%*C%d",&f.num,&f.den);
    return f;
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
    a=find_gcd(b,a);
    f.num=f.num/a;
    f.den=f.den/a;
    return f;
}
void output(Fraction f1,Fraction f2,Fraction f3)
{
    printf("%d/%d",f3.num,f3.den);
}
int main()
{
    Fraction f1=input_fractions();
    Fraction f2=input_fractions();
    Fraction f3=add_fractions(f1,f2);
    output(f1,f2,f3);
}