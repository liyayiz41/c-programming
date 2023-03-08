//program to find area of a circle
#include<stdio.h>
int area(int r);
int main()
{
int r,resuits;
printf("Enter value of r:");
scanf("%d",&r);
results=area(r*r*3.14);
printf("The area is %d",results);
return 0;
}
//function definition
int area(int a)
{
    int area;
    area=a*3.142;
    return area;
}