#include <stdio.h> //Inclusión de libreria estandar

int main(){
int cantidad;
printf("Calcular la suma de los digitos de un numero\n");
printf("Ingrese un numero\n");
scanf("%d", &cantidad);
int residuo=0;
int suma=0;
int cantidadfinal=cantidad;

while(cantidadfinal>0){
residuo=cantidadfinal%10;
    suma +=residuo;
    cantidadfinal /=10;
    
}
printf("La suma de los digitos de %d es: %d", cantidad, suma);


    return 0;
}