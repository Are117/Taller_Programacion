#include <stdio.h> // Incluimos la librería estánda

int main(){

//muestra mensaje descriptivo
printf("Calcular el producto de la serie 1 + 1/2 + 1/3... + 1/n.\n");

float numerador=1; //Variable para almacenar el numerador
float denominador=1; //Variable para almacenar el denominador
int repeticiones; //Variable para almacenar el numero de repeticiones

//pide al usuario que ingrese el numero de repeticiones
printf("Por favor ingrese el numero de veces que quiere que se multiplique la serie\n");
scanf("%d", &repeticiones);


float producto=1; //Variable para almacenar el producto de la serie

//Uso de la estructura do while para calcular el denominador y la suma de serie
int i=1;
do{
denominador=i;
producto *= (numerador/denominador);
i++;
}
while(denominador<repeticiones);

//Muestra resultado en pantalla
printf("El producto de los primeros %d valores de la serie es: %f", repeticiones, producto);



    return 0;
}