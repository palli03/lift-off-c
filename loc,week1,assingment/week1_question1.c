#include<stdio.h>
#include<math.h>
int main(){
    int n;
    for(n=1;n<=100;n++){
    if(n%3==0){
        printf("fizz\n");
    }
    else if(n%5==0){
        printf("buzz\n");
    }
    else{
        printf("%d\n",n);
    }
    }
    return 0;
}