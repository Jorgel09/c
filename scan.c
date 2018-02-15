#include <stdio.h>
#include <stdlib.h>

int main(){

    long long int lli;

    // puts("Ingresa un entero muy grande:\t");
    // //toma los diez primeros digitos
    // scanf("%10lld", &lli); 
    // printf("%lld",lli);

    int entero, hexadecimal, octal;

    // puts("Ingresa un entero");
    // scanf("%d", &entero);

    // puts("Ingresa un entero octal");
    // scanf("%o", &octal);

    // puts("Ingresa un entero hexadecimal");
    // scanf("%x", &hexadecimal);
    puts("Ingresa decimal octal hexadecimal");
    int resultado = scanf("%d%o%x",&entero, &octal, &hexadecimal);
    printf("%d\n",resultado);
    printf("Entero: %d\n", entero);
    printf("Octal: %#o\n", octal);
    printf("Hexadecimal: %#x\n",hexadecimal);

    return EXIT_SUCCESS;
}