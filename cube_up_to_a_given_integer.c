//program to find cube up to a given interger
#include<stdio.h>
int main(){
    
    int i=1;
    do
    { printf("%d\n",i);
    i=i+1;
    printf("Number is : %d and cube of the %d is : %d,\n",i,i,(i * i * i));}
    while(i<=4);
    
    return 0;
}