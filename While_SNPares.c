#include <stdio.h> 

int main(){
int repeticiones2;  //Variable para almacenar el numero de repeticiones

//muestra mensaje descriptivo y pide al usuario que ingrese el numero de repeticiones
printf("Vamos a imprimir la suma de numeros pares\n");
printf("Por favor ingrese la cantidad de numeros pares que quiere que se sumen\n");
scanf("%d", &repeticiones2);

int suma2=0; //variable para almacenar la suma de los numeros pares
int contador3=0; //variable para almacenar el contador que pare cuando iguale el numero de repeticiones requerido

//uso de la estructura while para el calculo de los numeros pares y su suma
int b=2;
while(contador3<repeticiones2){
 if(b%2 == 0){
        suma2 += b;
        contador3++;
    }
b++;
}

//muestra en pantalla la suma de n numeros pares
printf("La suma de los primeros %d numeros pares es: %d", repeticiones2, suma2);
    return 0;
}