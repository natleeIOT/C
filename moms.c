
    
#include <stdio.h>


double pris(double utanmoms, double procent)
{
     return utanmoms + utanmoms*procent/100;
}
  
int main() 
{
  double total;
  printf("Priset utan moms?\n "); 
  scanf("%lf", &total);
  printf("Priset : %.2f", pris(total, 25));
}


