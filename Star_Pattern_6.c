/*
*******
 *****
  ***
   *
 suppose n=4
 here we take i from 4 because here the need to print
 so here i  * space
         4  7  0
         3  5  1
         2  3  2
         1  1  3
    Here space is n-i
    star patter is 2*i-1
*/

#include<stdio.h>

int main(){
    int n;
     printf("Enter the numbers of line you want\n");
    scanf("%d", &n);
    for (int i = n; i >=1; i--)
    {
        for (int k = 1; k<=n-i; k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <=2*i-1 ; j++)
        {
            printf("*");
        }
        
         printf("\n");
    }
    return 0;
}