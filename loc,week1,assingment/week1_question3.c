#include<stdio.h>
#include<math.h> 
int main(){
int n,r,sum=0;
printf("enter a number");
scanf("%d",& n);
do{
    r=n%10;
    sum+=r;
    n=n/10;
}
while(n>0);
printf("sum of digits %d",sum);
return 0;
}