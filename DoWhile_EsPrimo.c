#include <stdio.h> //Inclusión de libreria estandar

int main() {
    int numero;//Variable para almacenar el numero que verificaremos si es primo o no

    //muestra mensaje descriptivo y pide al usuario que ingrese el numero 
    printf("Vamos a determinar si un numero es primo o no\n");
    printf("Por favor ingrese el numero a evaluar\n");
    scanf("%d", &numero);

//uso de la estructura if para determinar que el numero no es primo si es menor que 2
if (numero < 2) {
    printf("El numero %d no es primo\n", numero);
    return 0;
    }

int esPrimo = 1; //variable que cumple funcion booleana para determinar el numero primo

//uso de la estructura do while para ir comprobado el residuo del numero divido desde 2 hasta uno antes de su valor
int a = 2;
do{
if (numero % a == 0) {
    esPrimo = 0;
    //Uso de la funcion break para parar el conteo porque ya se determino que no es primo
    break; 
}
    a++;
}while(a < numero);

//uso de la estructura if para que determine si es primo o no dependiendo de la variable esPrimo y muestre el resultado en pantalla
if(numero==2){
    esPrimo=1;
}

if (esPrimo) {
        printf("El numero %d es primo\n", numero);
} else {
        printf("El numero %d no es primo\n", numero);
    }

    return 0;
}