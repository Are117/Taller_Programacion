#include <stdio.h> //Inclusión de libreria estandar

int main(){
int cantidad;
printf("Calcular la suma de los digitos de un numero\n");
printf("Ingrese un numero\n");
scanf("%d", &cantidad);
int residuo=0;
int suma=0;
int cantidadfinal=0;

for(int cantidadfinal=cantidad ; cantidadfinal>0 ; cantidadfinal /=10){
    residuo=cantidadfinal%10;
    suma +=residuo;
}
printf("La suma de los digitos de %d es: %d", cantidad, suma);


    return 0;
}