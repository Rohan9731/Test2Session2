/*<br> 1.	Write a program to find the distance between two points
		<br> void input(float \*x1, float \*y1, float \*x2, float \*y2);
		<br> void find_distance(float x1, float y1, float x2, float y2, float *area);
		<br> void output(float x1, float y1,float x2, float y2, float area);
		<br> input:
		<br> 1 1 2 2
		<br> output:
		<br> the distance between point (1.000000,1.000000) and (2.000000,2.000000) is  with 1.4142*/
        #include<stdio.h>
        #include<math.h>
void input(float *x1,float *y1, float *x2, float *y2)

{
    printf("enter the value of 1st point(x1,y1)\n");
    scanf("%f%f",x1,y1);
    printf("enter the value of 2nd point(x2,y2)\n");
    scanf("%f%f",x2,y2);
}
void find_distance(float *distance ,float x1,float y1, float x2, float y2)
{

    *distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}
void output(float distance ,float x1,float y1, float x2, float y2)
{
    printf(" the distance between  the points (%.1f , %.1f) and (%.1f , %.1f) is %.1f\n",x1,y1,x2,y2,distance);
}
int main()
{
float a,b,c,d,dis;
input(&a,&b,&c,&d);
find_distance(&dis,a,b,c,d);
output(dis,a,b,c,d);
return 0;
}
