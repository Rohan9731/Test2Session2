#include<stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
printf("enter the x1 y1,x2,y2 values respectivetly\n");
  scanf("%f %f %f %f",x1,y1,x2,y2);
}
int find_distance(float x1, float y1, float x2, float y2,float *area)
{
 *area = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)) ; 

}
void output(float x1, float y1,float x2, float y2, float distance)
{
  printf("the distance between x1= %.1f y1= %.1f x2= %.1f and y2= %.1f is %.1f\n",x1,y1,x2,y2,distance);
  
}
int main()
{
float a,b,c,d,dis;
  input(&a,&b,&c,&d);
   find_distance(a,b,c,d,&dis);
  output(a,b,c,d,dis);
  return 0;
}
