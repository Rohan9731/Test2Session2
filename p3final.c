/*<br> 3.	Write a program find whether a given number is a prime number. 
	<br> int input_number();
	<br> int is_prime(int n);
	<br> void output(int n, int is_prime);
	<br> input: 
	<br> 3
	<br> output:
	<br> 3 is a prime number*/
    #include<stdio.h>
    int input(){
        int n;
        printf("enter the number \n");
        scanf("%d",&n);
        return n;

    }
    int compute(int n)
    {
       int i,count=0;
       for(i=1;i<=n;i++)
       {
           if(n%i==0){
               count++;
           }
       }
       return count;
    }
    void output(int n,int count)
    { if(count<=2)
        printf("%d is a prime number \n ",n);
        else
         printf("%d is a composite number \n ",n);
    }
    int main()
    {
        int x,result;
        x=input();
        result= compute(x);
        output(x,result);
        return 0;
    }