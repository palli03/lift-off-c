#include<stdio.h>
#include<math.h>
int main(){
    float radius;
    printf("enter radius");
    scanf("%f",& radius);
    printf("diameter is %f\n",2*radius);
    printf("circumference is %f\n",2*3.14*radius);
    printf("area is %f\n",3.14*radius*radius);
    return 0;
}