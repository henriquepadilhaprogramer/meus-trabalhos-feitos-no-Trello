/******************************************************************************
implemente uma calculadora "turbo" onde faça todas as operações básicas ao 
mesmo tempo, podendo excluir números digitados, com as funções C & CE.

*******************************************************************************/
#include <stdio.h>

void soma(){ //definição de parâmetro para a soma.

    float valorA, valorB, resultado; //declaração de variaveis a serem somadas
    
    printf("\n digite o primeiro valor: "); //imprimindo um valor aleatório desejado pelo usuário.
    scanf ("%f", &valorA); //armazenando o valor a ser somado 
    
    printf("digite o segundo valor: "); //imprimindo um valor aleatório desejado pelo usuário.
    scanf ("%f", &valorB); //armazenando o valor a ser somado 
    
    resultado = valorA + valorB; //fórmula da soma 
    printf("\n resultado: %.2f\n\n ", resultado); //imprimindo o resultado da soma
}
    
void subtracao(){ //definição de parâmetro para a subtração.

    float valorA, valorB, resultado; //declaração de variaveis a serem subtraídas.
    
    
    printf("\n digite o primeiro valor: "); //imprimindo um valor aleatório desejado pelo usuário.
    scanf ("%f", &valorA); //armazenando o valor a ser diminuído.
    
    printf("Digite o segundo valor: "); //imprimindo um valor aleatório desejado pelo usuário.
    scanf ("%f", &valorB); //armazenando o valor a ser diminuído.
    
    resultado = valorA - valorB; //formúla da subtração.
    
    printf("\n resultado: %.2f\n\n ", resultado); //imprimindo o resultado da subtração.
}
void divisao(){ //definição de parâmetro para a divisão.

    float valorA, valorB, resultado;//declaração de variaveis a serem divididas.
    
    printf("\n digite o primeiro valor: ");//imprimindo um valor aleatório desejado pelo usuário.
    scanf ("%f", &valorA);//armazenando o valor a ser dividido.
    
    printf("digite o segundo valor: ");
    scanf ("%f", &valorB);//armazenando o valor a ser dividido.
    
    resultado = valorA / valorB;//formúla da divisão.
    
    printf("\n resultado: %.2f\n\n ", resultado);//imprimindo o resultado da divisão..
    
}
void multiplicacao(){ //definição de parâmetro para a ,multiplicação.

    float valorA, valorB, resultado;//declaração de variaveis a serem multiplicadas.
    
    printf("\n digite o primeiro valor: ");//imprimindo um valor aleatório desejado pelo usuário.
    scanf ("%f", &valorA);//armazenando o valor a ser dividido.
    
    printf("digite o segundo valor: ");//imprimindo um valor aleatório desejado pelo usuário.
    scanf ("%f", &valorB);//armazenando o valor a ser dividido.
    
    resultado = valorA * valorB;//formúla da multiplicação.
    
    printf("\n resultado: %.2f\n\n ", resultado);//imprimindo o resultado da multiplicação.
    
}

int main() //funcão principal
{
    
   float valorA,valorB, resultado;
   char operacao,s;
   int loop = 0;
   int igual,a; 
   printf("\t Bem vindo a calculadora turbo em C by  HENRIQUE PADILHA\n " );
   printf("\t Para fazer o cálculo digite o núm e a oper.desejada, após tecle ENTER, faça o mesmo , para as demais operações\n");
   printf("\t opçao1(+)- adicionar\n");
   printf("\t opção2(-)- subtrair\n");
   printf("\t opção3(/)- dividir\n");
   printf("\t opção4(*)- multiplicar\n");
   printf("\t opção5(s)- digite 'S' 2X seguidas para finalizar a tarefa, após concluir a  operação\n");
   printf("\t Digite os valores:\n");
   scanf("%f",&valorA);
   while(loop){
   pontodepartida:
   scanf("%s",&operacao);
   scanf("%f",&valorB);
   switch(operacao){
   case '+':
   resultado=valorA+valorB;
   printf("=%1.f",resultado);       
   break;
   case '-':
   resultado=valorA-valorB;
   printf("=%1.f",resultado);
   break;
   case '*':
   resultado=valorA*valorB;
   printf("=%1.f",resultado);
   break;
   case '/':
   resultado=valorA/valorB;
   printf("=%1.f",resultado);
   break;
     
   case 's':
   resultado=0;
   printf("operação finazilada");
   break;}
      
   valorA = resultado;}
	
   goto pontodepartida;

   return 0;
   }
  



