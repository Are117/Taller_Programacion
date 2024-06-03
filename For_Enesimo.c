#include <stdio.h> //Inclusión de libreria estandar

int main(){
int numeroIngresado; //variable para almacenar el numero que se desea calcular

//Muestra mensaje descriptivo y pide que ingrese un numero
printf("Calcular el n-esimo numero triangular\n");
printf("Por favor ingrese el numero que desea calcular\n");
scanf("%d", &numeroIngresado);

int suma=0; //variable para almacenar la suma de los valores que sera el numero e-nesimo

//Uso de la estructura for para calcular la suma de numeros desde el 1 hasta el numero ingresado, que dara como resultado el numero e-nesimo
for(int i=1; i<=numeroIngresado; i++){
    suma +=i;
}

//muestra el enesimo numero triangular
printf("El n-esimo numero triangular de %d es: %d", numeroIngresado, suma);

    return 0;
}