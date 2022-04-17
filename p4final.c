
/*<br> 4.	Write a program to find nth number in fibonacci sequence.
        <br> Fibonacci sequence consists of 0,1,1,2,3,5,8,13,21........
	<br> int input();
	<br> int find_fibo(int n);
	<br> void output(int n, int fibo);
*/
#include<stdio.h>
int input()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    return n;
}
int compute(int n ,int a[n])
{
    int i,sum=0;
    a[0]=0;a[1]=1;
    for(i=2;i<n;i++)
    {
     sum=a[i-2]+a[i-1];
    a[i]=sum;
    }
    if(n<=1)
{
  sum=0;
}
    return  sum;
}
void output(int n, int a[n], int sum)
{
    printf("the first %d fibonacci series is:\n",n);
    for (int i=0;i<n-1;i++)
    {
      printf("%d,",a[i]);
    }
    printf("%d",a[n-1]);
    printf("\n and the sum of last two values is %d",sum);    
}
int main()
{
    int n,sum;
    n=input();
    int a[n];
    sum=compute(n,a);
    output(n,a,sum);
    return 0;
}