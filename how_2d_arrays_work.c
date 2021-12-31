#include<stdio.h>


int numbers[2][10] ={{0,1,2,3,4,5,6,7,8,9},{10,11,12,13,14,15,16,17,18,19}};
int main()
{
 for(int i=0;i<2;i++)
 {
   for(int j=0;j<10;j++)
   {
     printf("%p",(*(numbers+i)+j));
     printf("\n");
   }
 }
}
