#include <stdio.h> 
#include <stdlib.h>

int main (){

    int dia, hora, minutos, segundos;
    int resultado=0;

    puts("Ingresa dia-hora-minutos-segundos");
    scanf("%d%d%d%d",&dia,&hora,&minutos,&segundos);
    printf("El resultado es: %d",dia*86400+hora*3600+minutos*60+segundos);
}