#include <stdio.h>
#include <stdlib.h>

int main(){

    int sum=17, cuenta=5;
    double media;

    /*Implicita-Transforma las dos variables al siguiente valor
    media= sum / cuenta;
    printf("valor de la media: %f\n",media);*/

    //Explicita cast
    media= (double)sum/ cuenta;
    printf("valor de la media: %f\n",media);

    //cast con char y diferentes tipos de datos

    char b=1;
    char c= 'A';
    short s= 300;

    c=s;
    printf("%d",c);
    /*printf("%d\n", c+20);
    printf("%c\n",b);
    printf("%d\n",sizeof(s));
    printf("%d\n",sizeof(c));*/
    return EXIT_SUCCESS;
}