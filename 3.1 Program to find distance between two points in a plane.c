#include<stdio.h>
#include<math.h>
void main()
{
   float x1,x2,y1,y2,sq;
   printf("Enter coordinates of 1st point:-") ;
   scanf("%f%f",&x1,&y1);
   printf("Enter coordinates of 2nd point:-");
   scanf("%f%f",&x2,&y2);
   sq=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
   printf("Answer is %.2f",sq);
}