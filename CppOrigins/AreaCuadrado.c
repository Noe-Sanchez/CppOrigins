/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void areadouble(double b, double h){
    
    double area = 0.0;
    area = b * h;
    printf("%.2lf", area);
    
}

int main(){
    
    double baseus = 0.0;
    double alturaus = 0.0;
    
    printf("Ingrese la base: ");
    scanf("%lf", &baseus);
    printf("Ingrese la altura: ");
    scanf("%lf", &alturaus);
    printf("\nEl área es: ");
    areadouble(baseus, alturaus);
    

    return 0;
}
