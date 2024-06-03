#include  <stdio.h> //insertamos libreria

int main(){

    int cuadrado = 0; // Variable para almacenar el cuadrado de un número
    int sumaCuadrados = 0; // Variable para almacenar la suma de los cuadrados
    int repeticiones; // Variable para almacenar el número de repeticiones (hasta qué número calcular)

//Imprimimos un mensaje descriptivo y pedimos al usuario que ingrese el numero de repeticiones
printf("Vamos a calcular la suma de los cuadrados de los primeros n numeros\n");
printf("Por favor ingresa la cantidad de cuadrados que quieres que se sumen\n");
scanf("%d", &repeticiones);

//uso de la estructura for para calcular el cuadrado de cada numero y su suma
for(int d=1; d<=repeticiones; d++){
    cuadrado=d*d;
    sumaCuadrados +=cuadrado;
}

//Mostrar en pantalla el resultado de la suma
printf("La suma de los cuadrados de los primeros %d numeros es: %d", repeticiones, sumaCuadrados);
    return 0;
}