/*
implemente um sistema utilizando FUNÇÃO que
lei um valor e apresenta para o usuário o valor
do cubo do valor digitado.
compartillhar no trello::utnairo@gmail.com

implement a system using FUNCTION that
read a value and present the value to the user
of the cube of the entered value.
share on trello::utnairo@gmail.com
*/

#include <stdio.h>

void cubo(float a){//definição do parâmetro (função)-parameter definition (function)
	
	float resultado; //declaração das variáveis - variable declaration
	resultado=(a*a*a);// formúla para o cálculo desejado - formula for the desired calculation
	
	printf("valor ao cubo %f eh %f \n",a,resultado);//imptrimindo o valor -  printing the value
}

int main()
{
    //início de processamento - processing start
	float valorA;
	// fim de processamento - end of processing
	
	//finalizando a tarefa
	printf("digite o valor desejado cubo:\n");// imprimindo o resultado dejado - printing the desired result
	scanf("%f",&valorA);
	
	cubo(valorA);
	
    return 0;
}

