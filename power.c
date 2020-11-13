#include "myMath.h"
#define E 2.71828182846
// count how mach is e power x
double Exponent(int x)
{
      double k ,e;
      int i ;
      e = E;
      k = 1;
      i = 0;
     
      if(x>0)//when x>0
      {
            for(i=0 ; i < x ; i++)
                  k =k * e;
      }            
      if(x<0)//when x<0 its verey small number
      {
            x=x*(-1);
            for(i=0 ; i < x ; i++)
                  k =k * (1/e);
      }
      return k;
}

// count the value x power y
double Power(double x , int y)
{
      double p;
      int i;
    
      p=1.0;
      //if y > 0 count : multiply x , y times
      if(y>0)
      {
            for(i = 0 ; i < y ; ++i)
                  p = p * x;
      }
      //if y<0 count : 1 divided x , y times
      if(y<0)
      {
            y=(-1)*y;
            for(i = 0 ; i < y ; ++i)
                  p = p * (1/x); 
      }
      return p;
}
