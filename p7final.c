
/*<br> 7. Write a program to find the length of a line.
        <br> struct _point {
	<br>	float x,y;
	<br> };
        <br> typedef struct _point Point;
	<br> struct _line
	<br> {
	<br>	Point p1,p2;
	<br>	float distance;
	<br> };
	<br> typedef struct _line Line
	<br> Point input_point();	
	<br> Line input_line(); 
	<br> void find_length(Line \*l);
	<br> void output(Line l);*/
    #include <stdio.h>
#include <math.h>
 struct _point{
    float x, y;
} ;
typedef  struct _point Point;

typedef struct line
{
    Point p1, p2;
    float distance;
} Line;

Point input_point()
{
    Point p;
    scanf("%f%f", &p.x, &p.y);
    return p;
}

Line input_line()
{
    Line l;
    printf("Enter the first point:\n");
    l.p1 = input_point();
    printf("Enter the second point:\n");
    l.p2 = input_point();
    return l;
}

void find_length(Line  *l)
{
    l->distance = sqrt((l->p2.x - l->p1.x) * (l->p2.x - l->p1.x) + (l->p2.y - l->p1.y) * (l->p2.y - l->p1.y));
}

void output(Line l)
{
    printf("The length of line with endpoints (%f,%f) and (%f,%f) is %f\n", l.p1.x, l.p1.y, l.p2.x, l.p2.y, l.distance);
}

int main()
{
    Line l = input_line();
    find_length(&l);
    output(l);
    return 0;
}