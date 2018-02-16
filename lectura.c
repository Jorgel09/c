#include <stdio.h>
#include <stdlib.h>

int main (){
    int n1, n2;
    char cad1[100], cad2[100];
    int dia, mes, anio;

    // scanf ("%d", &n1);
    // //lee el valor pero no lo va a guardar
    // scanf("%*c");
    // scanf("%d", &n2);
    // printf("%d\n", n1);
    // printf("%d\n",n2);

    //%*c limpia el buffer para continuar leyendo 
    //Limita el numero de caracteres que se puede desde el buffer scanf("%100[^\n]%*c", cad1);
    
    //Lectura de fechas
    scanf("%d%*[/-]%d%*[/-]%d", &dia, &mes, &anio);
    puts(dia, mes, anio);

    return EXIT_SUCCESS;

}