#include<stdio.h>

int main(){
    int i=0,j=1;
    while(i<3){
        while(j<=3){
            printf("%d",j++);
        }
        printf("%d",i++);
    }
     printf("\n");
     int a=0,b=1;
    while(a<3){
        while(b<=3){

        }
        printf("%d%d",++a,++b);
    }//--->No output as the inner loop will repeat infinite times
    return 0;
}