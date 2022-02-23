
#include<stdio.h>
#include<math.h>
void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("enter the value of x1 and y1:\n");
  scanf("%f %f",x1,y1);
  printf("enter the value of x2 and y2:\n");
  scanf("%f %f",x2,y2);
  
}
void find_distance(float x1,float y1,float x2,float y2,float *dist)
{
  *dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));


}

void output(float x1, float y1,float x2, float y2, float dist)
{
  printf("the distance between two points is %f",dist);

}
int main()
{
  float x1,y1,x2,y2,dist;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&dist);
  output(x1,y1,x2,y2,dist);
}