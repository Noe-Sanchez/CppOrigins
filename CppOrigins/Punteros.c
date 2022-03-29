
#include <stdio.h>

int main(){
    
    int valor = 45;

    int *puntero;

    puntero = &valor;


    printf("Valor inicial de la variable:"  );
    printf(" %i \n", valor);
    printf("Valor inicial del puntero:" );
    printf(" %i \n", *puntero);
    printf("\v");
    printf("*************************** \n");
    printf("\v");
    *puntero = *puntero + 45;
    printf("Valor final de la variable:"  );
    printf(" %i \n", valor);
    printf("Valor final del puntero:" );
    printf(" %i \n", *puntero);
    
    return 0;
}
