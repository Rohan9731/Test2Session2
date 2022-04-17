

/*<br> 5. Write a program to find all the prime numbers between erotosthenes sieve method.
    <br> int input_array_size();
    <br> void init_array(int n, int a[n];
    <br> void erotosthenes_sieve(int n, int a[n]);
    <br> void out_put(int n, int a[n]);
    <br> input:
    <br> 100
    <br> output:
    <br> 2,3,7,11,13,19,23,29,31,...
*/

#include <stdio.h>
int input_size()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);
    return n;
}
void input_array(int n, int a[n])
{
    int i;
    printf("enter the elements\n");
    for (i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
}
void erotos_method(int n, int a[n])
{
    int i, j;
    for (j = 2; j < n; j++)
  
    {
          for (i = 0; i < n; i++)
        {   if(a[i]==j)
        continue;
            if (a[i]%j==0)
                a[i] = 0;
                else 
                a[i]=i+1;
        }
        
    }
}
void output(int n, int a[n])
{int i;
printf("the prime numbers in first %d numbers are:\n",n);
for(i=0;i<n;i++)
{
    if(a[i]!=0)
    printf("%d,",a[i]);
}
printf("%d",a[n-1])
;
}

int main()
{
int x;
x=input_size();
int a[x];
input_array(x,a);
erotos_method(x,a);
output(x,a);
return 0;
}