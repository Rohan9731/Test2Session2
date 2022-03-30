
/*<br> 2.	Write a program to find whether the three points form a triangle.
	<br> void input_triangle(float \*x1, float \*y1, float \*x2, float \*y2, float \*x3, float \*y3);
	<br> int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
	<br> void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
*/
#include<stdio.h>

void input(float *x1,float *y1, float *x2, float *y2,float *x3,float *y3)
{
printf("enter the value of 1st point(x1,y1)\n");
    scanf("%f%f",x1,y1);
    printf("enter the value of 2nd point(x2,y2)\n");
    scanf("%f%f",x2,y2);
    printf("enter the value of 3rd point (x3,y3)\n");
    scanf("%f%f",x3,y3);
}
void calculate(float *area ,float x1,float y1, float x2, float y2,float x3, float y3)
{
    *area=0.5*(x1*(y2-y3)+ x2*(y3-y1) + x3*(y1-y2));
}
void output(float area ,float x1,float y1, float x2, float y2,float x3, float y3)
{ if(area==0)
    printf("the given points (%.1f , %.1f) (%.1f , %.1f) and (%.1f , %.1f) does not form triangle\n",x1,y1,x2,y2,x3,y3);
    else 
    printf("the given points (%.1f , %.1f) (%.1f , %.1f) and (%.1f , %.1f) forms triangle\n",x1,y1,x2,y2,x3,y3);
}
int main()
{
 float a,b,c,d,e,f,dis;
input(&a,&b,&c,&d,&e,&f);
calculate(&dis,a,b,c,d,e,f);
output(dis,a,b,c,d,e,f);
return 0;
}