#include "myMath.h"
#define E 2.71828182846

double Exponent(int x)
{
      double k ,e;
      int i ;
      e = E;
      k = 1;
      i = 0;
     
      if(x>0)
      {
            for(i=0 ; i < x ; i++)
                  k =k * e;
      }            
      if(x<0)
      {
            x=x*(-1);
            for(i=0 ; i < x ; i++)
                  k =k * (1/e);
      }
      return k;
}

double Power(double x , int y)
{
      double p;
      int i;
    
      p=1.0;
      if(y>0)
      {
            for(i = 0 ; i < y ; ++i)
                  p = p * x;
      }
      if(y<0)
      {
            y=(-1)*y;
            for(i = 0 ; i < y ; ++i)
                  p = p * (1/x); 
      }
      return p;
}
