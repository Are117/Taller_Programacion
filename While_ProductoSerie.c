#include <stdio.h> //Inclusión de libreria estandar

int main(){
int numeroRepeticiones; //variable para almacenar numero de repeticiones
int producto=1; //variable para almacenar producto de la serie geometrica
int siguiente=1; //variable para almacenar el siguiente termino de la serie

//imprime mensaje descriptivo y pide al usuario que ingrese el numero de repeticiones
printf("Vamos a calcular el producto de la siguiente serie: 2, 4, 8, 16...\n");
printf("Ingrese la cantidad de repeticiones de la serie\n");
scanf("%d", &numeroRepeticiones);

//uso de la estructura while para calcular el siguiente termino de la serie y el producto de la serie
int i=1;
while(i<=numeroRepeticiones){
siguiente *= 2;
producto *= siguiente;
i++;
}

//imprime mensaje descriptivo y el producto de la serie n veces
printf("El producto de los primeros %d numeros de la serie es: %d", numeroRepeticiones, producto);

    return 0;
}