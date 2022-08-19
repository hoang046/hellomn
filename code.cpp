#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a = 5, b = 6, c = 7;
   printf (" int a = 5, b = 6, c = 7\n");
   printf("the valua of a > b is \t%i\n\n", a > b);
   printf("the valua of b < c is \t%i\n\n", b < c);
   printf("the valua of a + b >= c is \t%i\n\n",a + b >= c);
   printf("the valua of a - b <= b - c is \t%i\n\n", a-b<=b-c);
   printf("the valua of b -a =b - c is \t%i\n\n", b - a == b - c);
   printf("the valua of a + b!= c * c is\t%i\n\n", a * b < c * c );
   printf("Result of a>10 && b <5 = %d\n\n", a>10 && b<5);
   printf("Result of a>100 || b <50=%d\n\n", a>10 || b<50);
   return 0;
}
























