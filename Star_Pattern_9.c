/*
*****
 ****
  ***
   **
    *
*/
#include<stdio.h>

int main(){
    int n;
    printf("Enter the numbers of line you want\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i-1; k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <=n-i+1 ; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}