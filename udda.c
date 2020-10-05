

#include <stdio.h>
 

int main()
{	
 int v, k ;  
 long long int pn ;
 printf("Vem är du ?\n Skriva 1 om du är tjej.\n Skriva 0 om du kille\n");
 scanf( "%d", &v ); //läsa 
 printf("Skriva ditt personnummer(utan minustecken).\n ");
 scanf( "%lld", &pn ); //läsa personnummer
 k = (pn/10)/2-(pn/10)/2 ;

 if ( k == 1 && v == 0 )    	
  	printf("Stämmer.\n " );    
 else if ( k == 0 && v == 1 )     
  	printf("Stämmer.\n " );    
 else 
  	printf("Stämmer inte.\n " ); 
  
} 
