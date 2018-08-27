#include <stdio.h>
#include <math.h>

void linha();
void num01();
void num02();
void num03();
void num04();
void num05();
void num06();
void num07();
void num08();
void num09();
void num10();
void num11();

int main(){
  int exercicio;
  linha();
  printf("Qual o numero do exercício? \n"); 
  scanf("%d", &exercicio);
  linha();
  
  switch(exercicio){
    case (1):
      linha();
      printf("Exercicío 1: \n");
      num01();
    break;
    case(2):
      linha();
      printf("Exercicío 2:\n");
      num02();
    break;
    case(3):
      linha();
      printf("Exercicio 3:\n");
      num03();
    break;
    case(4):
      linha();
      printf("Exercicio 4:\n");
      num04();
    break;
    case(5):
      linha();
      printf("Exercicio 5:\n");
      num05();
    break;
    case(6):
      linha();
      printf("Exercicio 6:\n");
      num06();
    break;
    case(7):
      linha();
      printf("Exercicio 7:\n");
      num07();
    break;
    case(8):
      linha();
      printf("Exercicio 8:\n");
      num08();
    break;
    case(9):
      linha();
      printf("Exercicio 9:\n");
      num09();
    break;
    case(10):
      linha();
      printf("Exercicio 10:\n");
      num10();
    break;
    case(11):
      linha();
      printf("Exercicio 11:\n");
      num11();
    break;
    default:
      printf("Exercicio não encontrado ou não terminado :) \n");
    break;      
  }
  return 0;
} 

  void linha(){
        printf("----------------------------------------------------\n");
  }
  

             
  void num01(){
          float num1, num2, num3;
          printf("Informe os numero 1, numero 2 e o numero 3\n");
          scanf("%f %f %f", &num1, &num2, &num3);
          if (num1 >=0)
            printf("Valor é POSITIVO: %f \n", sqrt(num1));
          else  
            printf("O valor é NEGATIVO: %f \n", pow(num1,4));
          if ((num2 >= 10) && (num2 <=100))
            printf("Número está entre 10 e 100 – intervalo permitido\n");
          else printf("Número não está entre 10 e 100 – intervalo não permitido\n");
          if (num3 < num2)
             printf("a diferença entra %f e %f é de: %f \n",num3, num2, num2-num3 );
          else printf("%f \n", ++num3);
          linha();
  }

  void num02(){
          int sex; 
          float altura;
          printf("Informe seu sexo: 1 para homem -- 2 para mulher\n");
          scanf("%d", &sex);
          if (sex == 1){
              printf("Sexo MASCULINO: \n");
              printf("Informe sua altura:\n");
              scanf("%f", &altura);
              printf("Seu peso ideal é de: %f", (72.7*altura)-58);
          } else {
              printf("Sexo FEMININO: \n");
              printf("Informe sua altura:\n");
              scanf("%f", &altura);
              printf("Seu peso ideal é de: %f \n", (62.1*altura)-44.7);
            }
  }

  void num03(){
         unsigned int idade;
         printf("Informe sua idade:\n");
         scanf("%ls", &idade);
         if ((idade >= 1) && (idade >= 13))
             printf("CRIANÇA\n");
           else if ((idade > 13) && (idade >= 20))
             printf("ADOLECENTE\n");
           else if ((idade > 20) && (idade >= 50))
             printf("ADULTO\n");
         else printf("IDOSA\n");          
  }

  void num04(){
        float s_bruto, bonus;
        printf("Informe o Salario\n");
        scanf("%f", &s_bruto);
        printf("Informe o bonus:\n");
        scanf("%f", &bonus);
        if (s_bruto <= 50)
          printf("Salario com desconto de 5 por cento + o bonus: %f\n", s_bruto-0.05+bonus);
        else printf("Salario com desconto de 10 por cento + o bonus: %f\n", s_bruto-0.10+bonus);
  } 

  void num05(){
        float nota1, nota2, nota3;
        unsigned int aluno;
        printf("Informe o numero do aluno:\n");
        scanf("%d", &aluno );
        printf("Informe o valor das tres notas\n");
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        if ((nota1 > nota2) && (nota1 > nota3))
          printf("valor da média do aluno %d é de: %f\n", aluno, (nota1*4+nota2*3+nota3*3) / 4+3+3);
  }
 
  void num06(){
        int numero;
        printf("Informe um numero:\n");
        scanf("%d", &numero);
        if (numero % 2 == 0)
          printf("O numero é PAR\n");
          else printf("O numero é IMPAR\n");
        if (numero >= 0) 
          printf("Numero é POSITIVO\n");
        else printf("Numero é NEGATIVO\n");

  }

  void num07(){
        int num1, num2, num3;
        printf("Digite os 3 valores: \n");
        scanf("%d %d %d", &num1, &num2, &num3);
         if ((num1<num2)&&(num1<num3))
          printf("\to menor e %d\n",num1);
        else if ((num2<num1)&&(num2<num3))
          printf("\to menor e %d\n",num2);
        if ((num3<num1)&&(num3<num2))
          printf("\to menor e %d \n " ,num3);
  }

  void num08(){
        float real, dolar,cotacao;
        int choice;
        printf("Escolha a conversão:\n \t1 - De REAL PARA DOLAR\n \t2 - De DOLAR PARA REAL\n");
        scanf("%d", &choice);
        switch(choice){
          case(1):
            printf("Informe a quantia em REAIS:\n");
            scanf("%f", &real);
            printf("Informe a cotação do dolar:\n");
            scanf("%f", &cotacao);
            printf("A quantia em Dolares é de: %f\n", real/cotacao);
          break;
          case(2):
            printf("Informe a quantia em DOLARES:\n");
            scanf("%f", &dolar);
            printf("Informe a cotação do dolar:\n");
            scanf("%f", &cotacao);
            printf("A quantia em Dolares é de: %f\n", cotacao*dolar);
          break;
          default:
            printf("ESCOLHA INVALIDA\n");
          break;
        }
  }      
  void num09(){
     float fun_num, salario;
     printf("Informe o numero do Funcionario:\n");
     scanf("%f", &fun_num);
     printf("Informe o salrio atual do funcionario %f: \n",fun_num);
     scanf("%f", &salario);
     if ((salario >= 0) && (salario <= 400)){
       printf("Novo salrio do funcionario %f é de: %f\n", fun_num, salario*0.15+salario);
       printf("O reajuste foi de: %f\n",salario*0.15);
     }
     else if ((salario > 400) && (salario <= 700)){
       printf("Novo salario do funcionario %f é de: %f\n",fun_num, salario*0.12+salario);
       printf("O reajust foi de: %f\n", salario*0.12);
     }
     else if ((salario > 700) && (salario <= 1000)){
       printf("Novo salario do funcionario %f é de: %f\n",fun_num, salario*0.10+salario);
       printf("O reajust foi de: %f\n", salario*0.10 );
     }
     else if ((salario > 1000) && (salario <= 1800)){
       printf("Novo salario do funcionario %f é de: %f\n",fun_num, salario*0.07+salario);
       printf("O reajust foi de: %f\n", salario*0.07);
     }
     else if ((salario > 1800) && (salario <= 2500)){
       printf("Novo salario do funcionario %f é de: %f\n",fun_num, salario*0.04+salario);
       printf("O reajuste foi de: %f\n", salario*0.04);
     }
     else  printf("O salario do funcionario %f não teve reajuste.\n", fun_num);   
  }

  void num10(){
    int id;
    float nota1, nota2, nota3, MA, m;
    printf("Informe o numero de identificação do aluno: \n");
    scanf("%d", &id);
    printf("Informe as 3 notas obtidas pelo aluno: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    m = (nota1+nota2+nota3)/3;
    MA = (nota1+(nota2*2)+(nota3*3)+m)/7;
    linha();
    printf("O aluno %d teve as notas %.2f %.2f %.2f \n", id, nota1, nota2, nota3);
    printf("A media das notas é %.2f e a média de aproveitamento é %.2f \n", m,MA);
    if(MA >= 90)
        printf("Aprovado| conceito A\n");
      else if ((MA < 90) && (MA >= 75))
        printf("Aprovado | conceito B\n");
      else if((MA < 75) && (MA >= 60))
        printf("Aprovado | conceito C");
      else if((MA < 60) && (MA >= 40))
        printf("Reprovado | conceito D\n");
    else printf("Reporvado | conceito E\n");
  }
  
  void num11(){
    int lados;
    float tamanho;
    printf("Informe o numero de lados\n");
    scanf("%d", &lados);
    if (lados < 3) {
      printf("Não é um Poligono\n");
      return;
    }
    printf("Informe a medida dos lados:\n");
    scanf("%f", &tamanho);
    if (lados == 3)
      printf("TRIANGULO\n Perímentro igual a: %.2f\n", tamanho+tamanho+tamanho);
    else if(lados == 4)
      printf("QUADRADO | Area igual a: %.2f\n", tamanho*tamanho);
    else if(lados == 5)
      printf("PENTAGONO\n");
    else printf("Valor de lados não suportado\n");
  }

  
