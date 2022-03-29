
#include <stdio.h>
#include <math.h>

int seacabo = 0;

void interfaz(){
    printf("Conversor de unidades de temperatura.\n\n");
    printf("Qué unidades desea convertir?\n");
    printf("1. Grados Celsius a Farenheit\n");
    printf("2. Grados Farenheit a Celsius\n");
}
void FarenCel(double t){
     double gCconv;
     gCconv = (t - 32.0) * 0.5555555555555555555555; 
     printf("%.0f", gCconv);
 }
void CelFaren(double g){
     double gFconv;
     gFconv = (g / 0.5555555555555555555555) + 32.0;
     printf("%.1f", gFconv);
 }
 
int main(){
    
    double tempUs1 = 0.0;
    double tempUs2 = 0.0;
    
   // while(seacabo == 0){
        
    interfaz();
    int deseo;
   // int denuevo = 1;
    scanf("%d", &deseo);
    if(deseo == 1){
    
        printf("Ingrese la temperatura en grados Celsius a convertir (en formato xx.x): ");
        scanf("%lf", &tempUs1);
        printf ("Temperatura en grados Farenheit: ");
        CelFaren(tempUs1);
       // printf("\n\nConvertir de nuevo?\n1.Si\n2.No\n");
       // scanf("%d", &denuevo);
       // if(denuevo == 1){
        //    seacabo = 0;
       // }else{
       //     seacabo = 1;
       // }
        
    }else if(deseo == 2){
        
        printf("Ingrese la temperatura en grados Farenheit a convertir (en formato xx.x): ");
        scanf("%lf", &tempUs2);
        printf ("Temperatura en grados Celsius: ");
        FarenCel(tempUs2);
       // printf("\n\nConvertir de nuevo?\n1.Si\n2.No\n");
       // scanf("%d", &denuevo);
       // if(denuevo == 1){
       //     seacabo = 0;
       // }else{
      //      seacabo = 1;
      //  }
        
    }
   // }
    
}
