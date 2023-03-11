#include<stdio.h>
#include<math.h>
int main(){
    int a,b,choice;//1-sum;2-differene;3-product;4-division//
    printf("enter a");
    scanf("%d", & a);
    printf("enter b");
    scanf("%d", & b);
    printf("enter choice\n");
    printf("1.sum\n2.difference\n3.product\n4.division\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:printf("%d+%d=%d\n",a,b,(a+b));
    
        break;
    case 2:printf("%d-%d=%d\n",a,b,(a-b));
    break;
    case 3:printf("%d*%d=%d\n",a,b,(a*b));
    break;
    case 4:
    if(b==0){
        printf("can't be divided");
    }
    else{
        printf("%f/%f=%f\n",(float)a,(float)b,(float)a/b);
    }

    break;
    
    default:printf("wrong choice");
        break;
    }
    return 0;
}