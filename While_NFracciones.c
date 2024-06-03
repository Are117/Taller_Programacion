#include <stdio.h>//Incluimos libreria estandar 

int main(){

//Muestra mensaje descriptivo
printf("Calcular la suma de la serie 1 + 1/2 + 1/3... + 1/n.\n");

float numerador=1; //Variable para almacenar el numerador
float denominador=1; //Variable para almacenar el denominador
int repeticiones; //Variable para almacenar el numero de repeticiones

//Pide al usuario que ingrese el numero de repeticiones de la serie
printf("Por favor ingrese el numero de veces que quiere que se sume la serie\n");
scanf("%d", &repeticiones);

float suma=0; //Variable para almacenar la suma de fracciones

//uso de la estructura while para is cambiando el denomindor e ir sumando los resultados de las fracciones
int i=1;
while(denominador<repeticiones){
denominador=i;
suma += numerador/denominador;
i++;
}

//Condiciono en caso que solo quiera una repeticion
if(repeticiones==1){
    suma=repeticiones;
}

//muestra la suma de las fracciones
printf("La suma de los primeros %d valores de la serie es: %.2f", repeticiones, suma);
    return 0;
}