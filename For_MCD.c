#include <stdio.h> //Inclusión de libreria estandar

//funcion para calcular máximo comun divisor
int funcionCalculoMaximoComunDivisor(int primerNumero, int segundoNumero) {
    for(int MCD=segundoNumero; segundoNumero>0 ; primerNumero=MCD){
        MCD=segundoNumero;
        segundoNumero= primerNumero%segundoNumero;
    }
    return primerNumero;
}

int main() {
    int primerNumero, segundoNumero;

    // Solicitar al usuario que ingrese dos números
    printf("Ingrese el primer numero:\n");
    scanf("%d", &primerNumero);
    printf("Ingrese el segundo numero:\n");
    scanf("%d", &segundoNumero);

    // Calcular y mostrar el MCD
    int MaximoCD = funcionCalculoMaximoComunDivisor(primerNumero, segundoNumero);
    printf("El maximo comun divisor de %d y %d es: %d\n", primerNumero, segundoNumero, MaximoCD);

    return 0;
}
