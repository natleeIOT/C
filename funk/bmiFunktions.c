#include<stdio.h>

double getWeight();
double getHeight();
double calculatorBmi(double weight,double height);
void printResultat(double bmi);

double getWeight(){
   printf("skriv in vikt:");
   double myWieight;
   scanf ("%lf", &myWieight);
   return myWEight;
}
double getHeight(){
   printf("skriv in längd:");
   double myWieight;
   scanf ("%lf", &myHeight);
   return myHeight;
}
double calculatorBmi(double weight,double height){
      return weight/(height*height);
}

void printResultat(double bmi){
    printf("ditt bmi ar %f", bmi);	
}
int main(){
	
	double weight,height, bmi;
	weight=getWeight();
    height=getHeight();
    bmi=calculatorBmi(weight, height);
    printfResultat( bmi);	
    return 0;             
}



