#include <stdio.h>
#include <math.h>
typedef struct _point{
    float x,y;
}Point;

typedef struct _line{
    Point p1,p2;
    float distance;
}Line;

typedef struct _polygon{
    int n;
    Line l[100];
    float perimenter;
}Polygon;

int input_n()
{
    int n;
    printf("Enter the no of sides of Polygon:\n");
    scanf("%d",&n);
    return n;
}

int input_polygon( int n, Polygon *p){
   p->n=n;
}

Line input_line(){
    Line l;
    printf("Enter the coordinates of (x,y) of one end point of the line:");
    scanf("%f %f",&l.p1.x,&l.p1.y);
    printf("Enter the coordinates of (x,y) of second end of the line:");
    scanf("%f %f",&l.p2.x,&l.p2.y);
    l.distance=sqrt((l.p2.x-l.p1.x)*(l.p2.x-l.p1.x)+(l.p2.y-l.p1.y)*(l.p2.y-l.p1.y));
    return l;
}
void input_n_lines(int n, Line l[n]){
   int k;
    for(k=0;k<n;k++)
    {
        l[k]=input_line();
    }
    
}

void find_perimeter(Polygon *p,int n,Line l[n]){
    p->perimenter=0;
    int k;
    for (k=0;k<p->n;k++)
    {
        p->perimenter=p->perimenter+l[k].distance;
    }
    
}
void output(Polygon p)
 {
     printf("the perimenter of the Polygon is %f",p.perimenter);
}
int main()
{
    int n;
    Polygon p;
    n=input_n();
    Line l[n];
    input_polygon(n,&p);
    input_n_lines(n,l);
    find_perimeter(&p,n,l);
    output(p);
    return 0;
}