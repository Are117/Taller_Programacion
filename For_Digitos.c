#include <stdio.h> //Inclusión de libreria estandar

int main(){
int numero; //Variable para almacenar ek numero del cual sumaremos los digitos

//muestra mensaje descriptivo y pide al usuario que ingrese el numero 
printf("Calculo de el numero de digitos de una cantidad\n");
printf("Por favor ingrese el numero a analizar\n");
scanf("%d", &numero);

int numeroDividido=numero; //Variable para almacenar el numero luego de ser dividido
int contador=0;  //Variable para almacenar el numero de digitos del numero


//uso de la estructura for para calcular el la cantidad de degitos que tiene el numero ingresado
for(int i = 1; numeroDividido > 0; i++){
    numeroDividido /= 10;
    contador=i;
}

//muestra la cantidad de digitos presentes en el numero ingresado
printf("El numero de digitos de %d es: %d", numero, contador);
    return 0;
}