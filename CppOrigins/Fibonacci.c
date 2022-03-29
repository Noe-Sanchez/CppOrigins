/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void fibonacci(int nd){
    
    int i;
    int firstdigit = 0;
    int seconddigit = 1;
    int sum;
    
    for (i = 0; i < nd; i ++){
       
        sum = firstdigit + seconddigit;
        firstdigit = seconddigit;
        seconddigit = sum;
        printf("%i, ", sum );
       
        }
   
}
int main(){
    int numdigits;
    printf("How many digits of the sequence do you want? \n");
    scanf("%d", &numdigits);
    printf("Fibonacci Series: 0, 1, ");
    numdigits = numdigits - 2;
   fibonacci(numdigits);
   printf("...");
   
    return 0;
}
