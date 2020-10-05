
    
# include <stdio.h>


int main(){
    float miles, gallon, res1, res2;

    printf("Hur mycket miles körde du? ");
    scanf("%f",&miles);             // läser in miles
    printf("Hur mycket gallon av bensin använde du? ");
    scanf("%f",&gallon);            // läser in gallon
    res1 = miles/1.609;            // räknar ut km
    res2 = gallon/3.785;           // räknar ut liter
    printf(" Du körde : %f  km.\n", res1 );
    printf(" Du använd : %f liter av bensin.\n", res2 );
    return 0;    
}



