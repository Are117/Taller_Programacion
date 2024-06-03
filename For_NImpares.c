#include <stdio.h> //Inclusión de libreria estandar

int main(){
int nInicial=0;
int repeticiones;   //Variable para almacenar el numero de repeticiones

//muestra mensaje descriptivo y pide al usuario que ingrese el numero de repeticiones
printf("Vamos a imprimir la suma de numeros impares\n");
printf("Por favor ingrese la cantidad de numeros impares que quiere que se sumen\n");
scanf("%d", &repeticiones);

int suma=0; //variable para almacenar la suma de los numeros impares
int contador2=0; //variable para almacenar el contador que pare cuando iguale el numero de repeticiones requerido

//Uso de la estructura for para calcular los numeros impares y su suma
for(int nInicial=1; contador2<repeticiones; nInicial++){
    if(nInicial%2 != 0){
        suma += nInicial;
        contador2++;
    }
}
//muestra en pantalla el resultado de la suma de numeros impares
printf("La suma de los primeros %d numeros impares es: %d", repeticiones, suma);
    return 0;
}