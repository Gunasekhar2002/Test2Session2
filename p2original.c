#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("enter the value of x1 and y1:\n");
    scanf("%f %f",x1,y1);
    printf("enter the value of x2 and y2:\n");
    scanf("%f %f",x2,y2);
    printf("enter the value of x3 and y1:\n");
    scanf("%f %f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    float area;
    area=0.5*(x1 * (y2 - y3)
            + x2 * (y3 - y1)
            + x3 * (y1 - y2));
    if (area==0)
    {
        return 0;
    }
    else{
        return 1;
    }
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
    if (istriangle==1)
    {
        printf("three points forms the triangle");
    }
    else
    {
        printf("three points cannot form the triangle");

    }


}


int main()
{
     float x1,y1,x2,y2,x3,y3;
     int chktr;
      input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
      chktr=is_triangle(x1,y1,x2,y2,x3,y3);
      output(x1,y1,x2,y2,x3,y3,chktr);


return 0;

}