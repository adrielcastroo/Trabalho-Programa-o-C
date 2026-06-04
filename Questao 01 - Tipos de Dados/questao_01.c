#include <stdio.h> //Biblioteca padrão de C
#include <locale.h>	//Biblioteca necessária para usar acentuação em C

int main (){ //Função principal
	
	setlocale(LC_CTYPE, "Portuguese"); //Comando para usar português no programa. CTYPE é para restringir o português somente à variável do tipo CHAR.
	
	int idade;	//Variável que armazenará a idade
	float altura;	//Variável que armazenará a altura
	char letra;	//Variável que armazenará a inicial do usuário
	
	printf("Digite sua idade: \n"); 	// Pergunta a idade
	scanf("%d", &idade);	//Armazena a idade
	
	printf("Digite sua altura: \n"); 	//Pergunta a altura
	scanf("%f", &altura);		//Armazena a altura
	
	
	printf("Digite a inicial do seu nome: \n"); //Pergunta a inicial do nome
	scanf(" %c", &letra);	//Armazena a inicial do nome
	
	printf(" Sua idade é: %d\n Sua altura é: %.2f\n A inicial do seu nome é: %c\n", idade, altura, letra);	//Retorno com os valores da idade, altura e inicial do nome do usuário
	
	
	return 0; //Finalização do código
	
}
