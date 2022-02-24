#include<stdio.h>
 int input_number()
{
  int n;
  printf("enter the number \n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
int i, count=0;
  for(i=1;i<n;i++)
    {
      if(n%i==0)
      count++;
    }
  return count; 
}
void output(int n, int is_prime)
{
  if(is_prime<2)
  printf("the given number '%d' is prime number\n",n);
  else
  //if(is_prime>2);
  printf("the given number '%d' is not prime number\n",n); 
}
  int main()
{
  int x,darling;
  x=input_number();
  darling= is_prime(x);
  output(x,darling);
  return 0;
}
