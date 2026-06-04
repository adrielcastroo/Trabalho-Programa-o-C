#include <stdio.h> //Biblioteca padrão de C
#include <locale.h> //Biblioteca necessária para usar acentuação em C

int main(){ //Função principal do código
	
	setlocale(LC_CTYPE, "Portuguese");  //Comando para usar português no programa. CTYPE é para restringir o português somente à variável do tipo CHAR.
	
	int valor1, valor2;	 //Primeiro e segundo valor inteiro
	
	printf("Insira dois números inteiros: \n"); //Solicita inserção de dois números inteiros
	scanf(" %d" "%d", &valor1, &valor2); //Armazena os dois números
	
	
	printf("A soma dos dois números é igual: %d\n", valor1+valor2); //Mostra ao usuário o resultado da soma entre os dois números
	printf("A divisão dos dois números é igual: %d\n", valor1/valor2); //Mostra ao usuário o resultado da divisão entre os dois números
	

	float casting = (float)valor1/valor2; //valor1 irá se comportar como um número real
	
	printf("A divisão real dos dois números é igual: %.2f\n", casting); //Mostra ao usuário o resultado da divisão entre os dois números
	
	return 0; //Finalização do código
	
}
