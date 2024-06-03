#include <stdio.h> //Inclusión de libreria estandar

int main(){

int numero;
printf("Calcular el inverso de un numero\n");
printf("Ingrese el numero a calcular\n");
scanf("%d", &numero);
int digito=0;

printf("El inverso de %d es: ", numero);

int numerofinal=numero;
do{
digito=numerofinal%10;
    printf("%d", digito);
    numerofinal /=10;
}while(numerofinal>0);

    return 0;
}