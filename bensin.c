
    
# include <stdio.h>


int main(){
    float miles, gallon, res1, res2;

    printf("Hur mycket miles k�rde du? ");
    scanf("%f",&miles);             // l�ser in miles
    printf("Hur mycket gallon av bensin anv�nde du? ");
    scanf("%f",&gallon);            // l�ser in gallon
    res1 = miles/1.609;            // r�knar ut km
    res2 = gallon/3.785;           // r�knar ut liter
    printf(" Du k�rde : %f  km.\n", res1 );
    printf(" Du anv�nd : %f liter av bensin.\n", res2 );
    return 0;    
}



