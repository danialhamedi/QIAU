//librarys ------------------------------------------------------
#include<stdio.h>



//prototypes-----------------------------------------------------
int fibonacci(int n);


//code section --------------------------------------------------
int main()
{
  int n;
  scanf("%d",&n);
  printf("%d",fibonacci(n));
}


// define fibonacci function (recursive) -------------------------
int fibonacci(int n)
{
  if (n<=2)
  {
    return n;
  }
  else
  {
    return (fibonacci(n-1) + fibonacci(n-2));
  }
}
