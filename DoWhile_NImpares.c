#include <stdio.h> //Inclusión de libreria estandar

int main(){
int repeticiones;  //Variable para almacenar el numero de repeticiones

//muestra mensaje descriptivo y pide al usuario que ingrese el numero de repeticiones
printf("Vamos a imprimir la suma de numeros impares\n");
printf("Por favor ingrese la cantidad de numeros impares que quiere que se sumen\n");
scanf("%d", &repeticiones);

int suma=0; //variable para almacenar la suma de los numeros impares
int contador=0; //variable para almacenar el contador que pare cuando iguale el numero de repeticiones requerido

//Uso de la estructura do while para calcular los numeros impares y su suma
int nInicial=1;
do{
if(nInicial%2 != 0){
        suma += nInicial;
        contador++;
}
nInicial++;
}while(contador <repeticiones);

//muestra en pantalla el resultado de la suma de numeros impares
printf("La suma de los primeros %d numeros impares es: %d", repeticiones, suma);
    return 0;
}