#include <stdio.h> //Inclusión de libreria estandar

int main(){
int numeroRepeticiones; //Variable para almacenar el numero de repeticiones

//muestra un mensaje descriptivo y pide al usuario ingresar el numero de repeticiones
printf("Vamos a calcular la suma de la serie 1+2+3+4....\n");
printf("Por favor ingrese el numero de veces que quiere que se repita la serie:\n");
scanf("%d", &numeroRepeticiones);

int suma=0; //variable para almacenar los valores de la suma

//uso de la estructura do while para calcular la suma de cada numero de la serie
int i=1;
do{
suma +=i;
i++;
}while(i<=numeroRepeticiones);

//muestra resultado de la suma de n numeros de la serie
printf("La suma de la serie %d veces es: %d", numeroRepeticiones, suma);
    return 0; 
}