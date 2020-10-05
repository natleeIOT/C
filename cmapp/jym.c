

#include <stdio.h>


int main()
{
 int times,  biljet=100 , total, kort=2000;
 printf("Hur många gånger planera du  går till jymmet i år\n");
 scanf("%d", &times); //total gänder i år
 total= times * biljet;  // kostnad i år
 if (total>=2000)
  {
  	int t1=total-kort;
  	printf("Du ska spara %d kr\n",t1 );  	
  }
  else
  	printf("Du ska betala %d kr\n",total ); 
} 
