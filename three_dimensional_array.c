//program to print a three dimensional array
#include<stdio.h>
int main(){
int a[3][3][3]={{{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15},{16,17,18},{19,20,21},{22,23,24},{25,26,27}}};
for(i=0;i<3;i++)
{
for(r=0;r<3;r++)
{
for(c=0;c<3;c++)
{
printf("%d",a[i][r][c]);
}
}
}
return 0;
}