/*
1
23
456
78910
1112131415
*/
#include<stdio.h>

int main(){
    int n,num=1;
    printf("Enter the numbers of line you want\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    
    return 0;
}