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
    // puts("Ingresa decimal octal hexadecimal");
    // int resultado = scanf("%d%o%x",&entero, &octal, &hexadecimal);
    // printf("%d\n",resultado);
    // printf("Entero: %d\n", entero);
    // printf("Octal: %#o\n", octal);
    // printf("Hexadecimal: %#x\n",hexadecimal);

    //variables de punto flotante 

    // int dia, mes, anio;

    // puts("Ingresa una fecha");
    // scanf("%d/%d/%d", &dia, &mes, &anio);

    // printf("%d/%d/%d",dia, mes, anio);
    // puts("Ingresa 3 valores de punto flotante");
    // scanf("%le,%lf,%lg", &h, &i, &j);

    // printf("%le\n", h);
    // printf("%lf\n", i);
    // printf("%lg\n", j);

    char cadena[100];

    puts("Escribe algo:\t");
    //Estos caracteres si los puede leer
    //scanf("%[0-9]");
    //scanf("[a-zA-Z]");
    //[^]
    scanf("%[^\n]", cadena);
    
    printf("%s",cadena);
    return EXIT_SUCCESS;
}