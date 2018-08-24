#include <stdio.h>
#include <math.h>

//void linha();
void num01();

int main(){
  int exercicio;
  //linha();
  printf("Qual o numero do exercício? \n"); 
  scanf("%d", &exercicio);
  //linha();
  
  switch(exercicio){
    case (1):
      printf("Exercicío 1: \n");
      void num01();
    break;
    default:
            printf("Exercicio não encontrado ou não terminado :) \n");
    break;      
  }
}  

/*void linha(){
      printf("----------------------------------------------------\n");
      linha();
  }*/
  

             
void num01(){
        float num1, num2, num3;
        printf("Informe os numero 1, numero 2 e o numero 3");
        scanf("%f %f %f", &num1, &num2, &num3);
        if (num1 >=0)
          printf("Valor é POSITIVO: %f", sqrt(num1));
        else  
          printf("O valor é NEGATIVO: %f", pow(num1,4));
      //linha();
}
