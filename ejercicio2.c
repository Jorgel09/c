#include <stdio.h>
#include <stdlib.h>

int main (){
    int dia, hora, minutos, segundos, resultado;

    puts("Cuantos segundos quieres convertir:");
    scanf("%d",&segundos);


    if((segundos/86400)==0){
        dia=0;
    }

    else{
         dia=segundos/86400;
         resultado=segundos%86400;
    }

    if((segundos/3600)!=0)
    {
       hora=segundos/3600;
       resultado=segundos%3600;     
    }
    
    else{
        hora=0;
        resultado=segundos%3600;
    }
     
    if((resultado/60)!=0)
    {
        minutos=resultado/60;
        resultado=resultado%60;
        segundos=resultado;
    }

    
    printf("El resultado de la operacion es: %d:%d:%d:%d",dia,hora,minutos,segundos);

    return EXIT_SUCCESS;
}