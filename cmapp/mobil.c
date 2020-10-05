

#include <stdio.h>


int main()
{
 int min,  pris=10 , total;
 printf("Hur många minuter pratar du på telefon varja  månad?\n");
 scanf("%d", &min); //total min i mänad
 total= min * pris;  // kostnad i månad 
 if (total>=1000)
  {
  	int t1 = total-(total/10);
  	printf("Du ska betala %d kr\n",t1 );  	
  }
  else
  	printf("Du ska betala %d kr\n",total ); 
} 
