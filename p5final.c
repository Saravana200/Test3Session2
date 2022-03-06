#include <stdio.h>
int input_size()
{
    int a;
    printf("enter the size of the array\n");
    scanf("%d",&a);
    return a;
}
void input_array(int n,int a[n])
{
    printf("enter the array\n");
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
}
int find_largest(int n,int a[n])
{
    int l=a[0];
    for(int i=1;i<n;i++)
    {  
      if(l<a[i])
        l=a[i];
    }
    return l;
}
void out_put(int n,int a[n],int largest)
{
    printf("the largest among ");
    for(int i=0;i<n-1;i++)
        printf("%d,",a[i]);
    printf("%d is %d",a[n-1],largest);
}
int main()
{
    int n=input_size();
    int a[n];
    input_array(n,a);
    out_put(n,a,find_largest(n,a));
}