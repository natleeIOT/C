

#include <stdio.h>


int main()
{	
 int p; 
 printf("Hur många poänger fick du på provet ?\n");
 scanf("%d", &p); //läsa poäng
 if ( 50 >= p && p >= 45)    	
  	printf("Du fick betyg A\n " );    
  else if ( 45 > p && p>= 40 ) 
  	printf("Du fick betyg B\n " ); 
  else if ( 405 > p && p>= 35 )
  	printf("Du fick betyg C\n " ); 
  else if ( 35 > p && p>= 30 )
  	printf("Du fick betyg D\n " ); 
  else if ( 30 >= p && p >= 25 )
  	printf("Du fick betyg E\n " ); 
  else if ( p < 25)
  	printf("Du fick icke godkänd, prova igen.\n ");
  
} 
