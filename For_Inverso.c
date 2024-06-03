#include <stdio.h> //Inclusión de libreria estandar

int main(){

int numero;
printf("Calcular el inverso de un numero\n");
printf("Ingrese el numero a calcular\n");
scanf("%d", &numero);
int digito=0;

printf("El inverso de %d es:", numero);


for(int numerofinal=numero; numerofinal>0; numerofinal /=10){
    digito=numerofinal%10;
    printf("%d", digito);
}
    return 0;
}