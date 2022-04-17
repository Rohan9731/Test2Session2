
/*<br> 6.	Write a program to find the index of a substring of a string.
	<br> void input_string(char *a);
	<br> int str_reverse(char \*string, char \*substring);
	<br> void output(char \*string, char \*substring, int index);
	<br> input:
	<br> helloworldhello
	<br> world
	<br> output:
	<br> The index of world in helloworldhello is 5*/
    #include<stdio.h>
    void input_string(char *a,char *b) 
    {
       printf("enter the character of a main string\n");
       scanf("%s",a);
       printf("enter the character of a second substring\n");
       scanf("%s",b);
    }
    int str_reverse(char *a,char *b)
    {
        int i,j=0,x;
        for(i=0 ; a[i]!='\0' && b[j]!='\0'; i++)
        {
            if(a[i]==b[j])
            {
                j++;
            }
            else// if(j!=0)
            j=0;

        }
        if(j!=0){
        x=i-j;
          return x;}
          else 
          return 0;

    }
    void output(char *a, char *b, int  result)
    {
        if(result>0)
                printf("The index of %s in %s is %d\n",a,b,result);
    else 
        printf("%s is not found in %s\n",a,b);

    }
    int main()

    {char a[100];
     char b[50];

        input_string(a,b);
        int x= str_reverse(a,b);
        output(a,b,x);
        return 0;

    }