#include <stdio.h>  //Inclusión de libreria estandar

int main(){
int valor1=0; //variable para almacenar el primer valor de la serie
int valor2=1; //variable para almacenar el segundo valor de la serie
int valorSiguiente=0; //variable para almacenar el primer valor de la serie
int contador; //variable para almacenar el contador que se encargara de parar la serie cuando llegue al numero de repeticiones
int numeroRepeticiones; //variable para almacenar el numero de repeticiones

//muestra un mensaje descriptivo y pide ingresar al usuario el numero de repeticiones
printf("Escriba el numero de veces que quiere que se repita la secuencia\n");
scanf("%d", &numeroRepeticiones);

//imprime la salida de la serie y un pequeño mensaje
printf("La secuencia repetida %d es:\n", numeroRepeticiones);
printf("%d\n", valor1);

//uso de la estructura for para calcular la serie
    for(contador = 0 ; contador < numeroRepeticiones-1 ; contador++){
    valor1=valor2;
    valor2=valorSiguiente;
    valorSiguiente=valor1+valor2;
        //muestra en pantalla el valor de la serie
    printf("%d\n", valorSiguiente);
}
    return 0;
}