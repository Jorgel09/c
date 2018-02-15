#include <stdio.h>
#include <stdlib.h>

int main (){
    //variables de tipo entero
    int entero= 57;
    unsigned sin_signo=100;
    int octal= 057;
    long long int entero_muy_muy_largo= 923372036854775807LL;
    int hexadecimal= 0x57;
    char caracter = 'A';
    char cadena[] ="hola mundo";
    //modificadores de tamaño

    // printf("%d\n", entero_muy_muy_largo);
    // printf("%lld\n", entero_muy_muy_largo);
    // printf("%o\n",octal);
    // printf("%x\n",hexadecimal);
    // printf("%X\n",hexadecimal);
    // printf("%d\n",hexadecimal);
    // //Bandera para colocar el valor en la base
    // //#-Modifica el comportamiento de octales y hexadecimales 
    // printf("%#x\n",hexadecimal);
    // int resultado;
    // //Impresión de cadena y caracter
    // //puts para imprimir en pantalla
    // resultado =printf("%c\n", caracter);
    // printf("%d\n",resultado);

    // resultado=printf("%s\n", cadena);
    
    // printf("%d\n", resultado);
    // puts(cadena);
    // putchar(caracter);

    //Impresiones de variables de punto flotante 
    // printf("Variables de punto flotante\n");
    // printf("%e\n",1234567.89);
    // printf("%e\n",+1234567.89);
    // printf("%E\n",-1234567.89);
    // printf("%.2f\n",1234567.89);
    // printf("%g\n",1234567.89);
    // printf("%G\n",1234567.89);

    // //Ancho de campo
    // printf("%-4d\n",1);
    // printf("%-4d\n",12);
    // printf("%-4d\n",123);
    // printf("%-4d\n",1234);
    // printf("%-4d\n",12345);

    // printf("%4d%4d\n", 123, 456);
    // //justificación a la derecha
    // printf("%-4d%-4d\n", 123, 456);
    // //precisión
    // printf ("%4.5d\n",1);
    // int ancho=4, precision=5;
    // printf("%*.*d\n",ancho, precision, 1);
    // printf("%*.*d\n", 4, 5, 1);
    // printf("%.5s\n", cadena);

    int cuenta;
    printf("%s: %njorge\n", "hola", &cuenta);
    printf("%*s%s", cuenta,"", "pepe");
    return EXIT_SUCCESS;
    



}