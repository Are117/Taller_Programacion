#include <stdio.h>

int main(){

int numero=1453;
int numerofinal=numero;
int digito=0;

printf("El inverso de %d es:", numero);


for(int i=0; numerofinal>0; numerofinal /=10){
    digito=numerofinal%10;
    printf("%d", digito);
}
    return 0;
}