#include<stdio.h>
#include<string.h>
void print (char* x)
{
  for(int i = 0;*(x+i) != NULL;i++)
  {
    printf("%c",*(x+i));
  }
}
int main()
{
     char x []= "danial hamedi";
     printf(x);

}
