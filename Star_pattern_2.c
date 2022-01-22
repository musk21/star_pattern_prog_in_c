/*
*****
****
***
**
*
*/

//for example n=3
//i=1-->in inner loop condition j<3-1+1=3-->j<3-->3star will print-->then j=4 and condition become false
//now i=2-->j<3-2+1=2-->2-->j<2-->2 star will print-->then j=3 and condition become false
//now i=3-->j<3-3+1=1-->1-->j<1-->1 star will print-->then j=2 and condition become false
//at last i=4 the condition become false
/*
/*
****another method******
for (int i = 1; i <= n; i++)
    {
        for (int j = 5; j <= i; j--)
        {
            printf("*");
        }
        printf("\n");
        
    }
*/
#include<stdio.h>

int main(){
    int n;
    printf("Enter the numbers of line you want\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}