#include<stdio.h>
int main(){
    double r,h,v;
    printf("Enter radius and heihgt:");
    scanf("%lf %lf",&r,&h);
    
    //calculating volume
    v=3.14 * r * h;
    // %.2lf displays number up to 2 decimal point
    printf("Volume=%.2lf",v);
    
    return 0;
}