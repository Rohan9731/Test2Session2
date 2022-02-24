#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("enter the  values of x1,x2,x3,y1,y2,y3\n");
  scanf(" %f %f %f %f %f %f",x1,x2,x3,y1,y2,y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
 float area;
  area=0.5*(x1*(y2-y3)+ x2*(y3-y1) + x3*(y1-y2));
  return area;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, float istriangle)
{
if(istriangle==0)
  printf("the given points %.1f %.1f  %.1f  %.1f  %.1f  %.1f  does not form a triangle\n",x1,x2,x3,y1,y2,y3);
else
    printf("the given points %.1f %.1f  %.1f  %.1f  %.1f  %.1f  forms a triangle\n",x1,x2,x3,y1,y2,y3);
  }
int main()
{
  float a,b,c,x,y,z,answer;
  input_triangle(&a,&b,&c,&x,&y,&z);
  answer = is_triangle(a,b,c,x,y,z);
  output(a,b,c,x,y,z,answer);
  return 0;
  
}
