//if we need to print * once we will write printf("*");                          
//if we need to print ***** times we will prefer loop                                      
//For example 
//*****
//for (i = 0; i <5; i++)
//{
    //printf("*");
//}

/*
Now we want print 
  *****
  *****
  *****
  *****
  *****
the above loop help us to print 5 stats in each line but for next 6 lines we need to write another lopp
*/
//we can write many  loops inside the one loop as per our requirement
//we can nest different loops inside any loop for example-->inside for loop we can write do-while or while loop
#include<stdio.h>

int main(){

for ( int j = 0; j < 6; j++)
{
      for (int i = 0; i <5; i++)
    {
    printf("*");
    }
    printf("\n");
}
    
    
    return 0;
}