#include <stdio.h>
#include "myMath.h"

int main()
{
      printf("Please enter numbers:\n");
      float x;
      scanf("%f", &x);
      float f;

      f=0;
      f =  sub( add( Exponent(x) , Power(x , 3)) , 2);
      printf("The value of f(𝑥) = 𝑒^𝑥 + 𝑥^3 − 2 at the point %f = %0.4lf\n",x , f);
      f=0;
      f=add( mul(x , 3), mul(Power(x ,2) , 2));
      printf("The value of f(x) = 3x + 2X^2 at the point %f = %0.4lf\n",x , f);
      f=0;
      f=sub(div(mul(Power(x ,3) , 4) ,5) , mul(x ,2));
      printf("The value of f(x) = (4x^3)/5 -2x at the point %f = %0.4lf\n",x , f);


      return 0;
}
