/*we have to print this pattern
           *
           **
           ***
           ****
           *****
*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter the numbers of line you want\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}