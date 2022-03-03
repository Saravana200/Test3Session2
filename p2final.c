#include <stdio.h>
struct _fraction
{
    int num,den;
};
typedef struct _fraction Fraction;
Fraction input_fraction()
{
    Fraction f;
    printf("enter the fractions in the form a/b\n");
    scanf("%d%*c%d",&f.num,&f.den);
    return f;
}
Fraction Largest_fraction(Fraction f1,Fraction f2,Fraction f3)
{
    return f1.num*f2.den>f1.den*f2.num?f1.num*f3.den>f1.den*f3.num?f1:f3:f2.num*f3.den>f2.den*f3.num?f2:f3;
}
void output(Fraction f1,Fraction f2,Fraction largest)
{
    printf("%d/%d",largest.num,largest.den);
}
int main()
{
    Fraction f1=input_fraction();
    Fraction f2=input_fraction();
    Fraction f3=input_fraction();
    output(f1,f2,Largest_fraction(f1,f2,f3));
}


