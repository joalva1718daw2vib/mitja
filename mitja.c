#include <stdio.h>

int main(){
float suma=0.0;
float mitja=0.0;
float nou_valor;
int numero_repeticions=0;
char consulta='s';
while(consulta=='s'){
printf("Dóna la següent dada: ");
suma=suma+nou_valor;
numero_repeticions=numero_repeticions+1;
printf("Vols continuar s/n: ");
scanf("%c",&consulta);
}
mitja=suma/numero_repeticions;
printf("La mitja resultat és: %.2f\n",mitja);
return 0;
}
