#include <stdio.h>  //Inclusión de libreria estandar

int main(){

int numero; //variable para almacenar el numero del cual se calculara el factorial

//muestra un mensaje descriptivo y pide ingresar al usuario el numero 
printf("Ingrese el numero cuyo factorial desea calcular\n");
scanf("%d", &numero);

int factorial=numero; //variable para almacenar la factorial del numero, se le da el valor del numero ingresado

//muestra el mensaje de salida del algoritmo. La "x" esta hecha para que aparezca al momento de mostrar el factorial
printf("%d! es: %dx", numero, numero);

//uso de la estructura do while para el calculo de el factorial del numero
int i=numero-1;
do{
    factorial *= i;
    printf("%dx", i);
    i--;
}while(i>0);


//uso de la estructura if para determinar el valor del factorial en caso de que el numero ingresado sea 1
if(numero==1){
    factorial=numero;
}

//muestra el resultado del factorial del numero ingresado
printf("\nEl factorial de %d es: %d", numero, factorial);
    return 0;
}