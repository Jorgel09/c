#include <stdio.h>
#include <stdlib.h>

int main (){

    int num, den;

    printf("Ingresa una fraccion con el siguiente formato: x/y\n");
    scanf("%d/%d",&num,&den);
    printf("El numero en facccion es: %.2f", (float)num/den);
}