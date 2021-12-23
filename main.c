
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void) {
 
 
  printf("BEM VINDO, ESCOLHA UMA OPÇÃO\n");
 
printf("Escolha uma opção para iniciar:\n");

printf("Opção 1 (maior e menor elemento)\n");

printf("Opção 2 (Soma de elementos)\n");

printf("Opção 3 (Função elogio)\n");

printf("Opção 4 (Identificação do triângulo)\n");

printf("Opção 5 (sair)\n\n");

int gucci;

scanf("%i", &gucci);
 

if(gucci==1)
{
 int numeros[5]; // Declarando o vetor com 5 elementos inteiros.
int maior, menor;


// Recebendo os valores do vetor.
for (int i = 0; i < 5; ++i) {
printf(" numeros[%d]: ", i);
scanf("%d", &numeros[i]);
}


/*
As variáveis, maior e menor, recebem inicialmente o valor
do primeiro elemento do vetor, ou seja, numeros[0].
*/
maior = numeros[0];
menor = numeros[0];




for (int i = 0; i < 5; ++i) {
if (numeros[i] > maior) maior = numeros[i];
if (numeros[i] < menor) menor = numeros[i];
}


printf("\n\n Maior: %d\n", maior);
printf(" Menor: %d", menor);
}

else if(gucci==2)
{
int num1, num2, resul;
printf("Digite um numero:");
scanf("%d", &num1);




printf("Digite um expoente:");
scanf("%d", &num2);



resul = pow(num1, num2); //eleva a base a potencia

printf("%d elevado a %d potencia e %d",num1,num2,resul);
}



else if (gucci==3)
{

int num;



printf("Você deseja ler um poema?");
printf("\n1- sim/ 2- não\n\n");
scanf("%d", &num);



if(num==1){
printf("Minha terra tem palmeiras onde canta o sabia...");



}else{
printf("Agradecemos o contato tenha um bom dia/tarde/noite!");
}

}

else if (gucci==4)
{
  int ladoA, ladoB, ladoC;

    printf("Digite tres valores: ");
    scanf("%d%d%d", &ladoA, &ladoB, &ladoC);

    if(ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA){
        printf("Os 3 lados formam um triangulo!\n");
        if(ladoA == ladoB && ladoA == ladoC)
            printf("Equilatero\n");
        else
            if(ladoA == ladoB || ladoA == ladoC || ladoB == ladoC)
                printf("Isosceles\n");
            else
                printf("Escaleno\n");
    }
    else
        printf("Os 3 lados NAO formam um trinagulo!\n");
}

else if (gucci==5)
{ 
  exit(5);
}

  return 0;
}