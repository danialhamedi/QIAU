#include <stdio.h>

int main()
{
  int a,b,c,d,e;
  scanf("%i",&a);
  scanf("%i",&b);
  scanf("%i",&c);
  scanf("%i",&d);
  scanf("%i",&e);
  int x;
if (a < b) { x = a; a = b; b = x; }
if (c < d) { x = c; c = d; d = x; }
if (a < c) { x = a; a = c; c = x; }
if (b < d) { x = b; b = d; d = x; }
if (b < c) { x = b; b = c; c = x; }
if (e > a) { x = e; e = a; a = x; }
if (e > b) { x = e; e = b; b = x; }
if (e > c) { x = e; e = c; c = x; }
if (e > d) { x = e; e = d; d = x; }
printf("%i, %i, %i, %i, %i",a,b,c,d,e);

}
