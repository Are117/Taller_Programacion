#include <stdio.h> //Inclusión de libreria estandar

int main(){
int base, exponente; //variables para almacenar base y exponente hasta 3
int resultado1=1; //variable para almacenar resultado 1
int resultado2=0; //variable para almacenar resultado 2
int resultado3=0; //variable para almacenar resultado 3

//muestra un mensaje descriptivo y pide ingresar al usuario la base y exponente
printf("Por favor, ingrese la base de la potencia\n");
scanf("%d", &base);
printf("Por favor, ingrese el exponente de la potencia\n");
scanf("%d", &exponente);

//Uso de la estructura if para determinar la raiz en caso de que el exponente sea 0
if(exponente==0){
    printf("El resultado de %d elevado al %d es: %d", base, exponente, resultado1);
}else{
 //Uso de la estructura for para calcular resultado2
    for(int i=1 ; i<=base ; i++){
    resultado2 +=base;
}

    //Uso de la estructura if para determinar la raiz en caso de que el exponente sea 2
if(exponente==2){
printf("El resultado de %d elevado al %d es: %d", base, exponente, resultado2);
}else{
   //Uso de la estructura if para determinar la raiz en caso de que el exponente sea 1
    if(exponente==1){
        printf("El resultado de %d elevado al %d es: %d", base, exponente, base);
    }else{
//uso de la estructura for para calcular el resultado 3 
for(int j=1 ; j<=base ; j++){
        resultado3 +=resultado2;
    }
    //imprime el resultado de la raiz
    printf("El resultado de %d elevado al %d es: %d", base, exponente, resultado3);

    }
 
}
}


    return 0;
}
