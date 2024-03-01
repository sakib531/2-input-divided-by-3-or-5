#include<stdio.h>

int main (){
    int x,y;
    printf("input the starting number : ");
    scanf("%d",&x);
    printf("input the ending number : ");
    scanf("%d",&y);
    printf("all multiples of 3 within the given range : \n");
        for (x;x<=y;x++){
            if(x%3==0){
                printf("%d\n",x);
            }
        }
    return 0;
}
