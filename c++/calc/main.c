#include <stdio.h>
#include <stdlib.h>

 main()
{
   double num1, num2, total;
   int c1, c2, tc;
   char sign;
   scanf("%lf%c%lf", &num1, &sign, &num2);

   switch(sign)
   {
      case '+': printf("%lf", total=num1+num2); break;
      case '-': printf("%lf", total=num1-num2); break;
      case '*': printf("%lf", total=num1*num2); break;
      case '/': printf("%lf", total=num1/num2); break;
      case '%':
          c1=num1;
          c2=num2;
          tc=c1%c2;
          printf("%d", tc);
   }






}
