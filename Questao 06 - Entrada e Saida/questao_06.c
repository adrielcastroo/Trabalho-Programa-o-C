#include <stdio.h> //Biblioteca padrão de C
#include <locale.h>	//Biblioteca necessária para usar acentuação em C

int main (){ //Função principal
	
	setlocale(LC_CTYPE, "Portuguese"); //Comando para usar português no programa. CTYPE é para restringir o português somente à variável do tipo CHAR.
	
	char nome[100];	//Vetor de caracteres com tamanho de 100 para armazenar qualquer nome
	int idade;	//Variável que armazenará a idade
	char cidade[100];	//Vetor de caracteres para armazenar mais de 1 char
	
	printf("Digite seu nome: \n"); 	// Pergunta a nome
	scanf("%s", &nome);	//Armazena a nome
	
	printf("Digite sua idade: \n"); 	//Pergunta a idade
	scanf("%d", &idade);		//Armazena a idade
	
	
	printf("Digite a cidade: \n"); //Pergunta a cidade
	scanf("%s", &cidade);	//Armazena a cidade
	
	printf("Seu nome é: %s\nSua idade é: %d\nA sua cidade é: %s\n", nome, idade, cidade);	//Retorno com os valores do nome, idade e a cidade
	
	
	return 0; //Finalização do código
	
}
