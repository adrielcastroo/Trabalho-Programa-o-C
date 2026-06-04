#include <stdio.h> //Biblioteca padrão de C
#include <locale.h> //Biblioteca necessária para usar acentuação em C

int main(){ //Função principal do código

	setlocale(LC_CTYPE, "Portuguese"); //Comando para usar português no programa. CTYPE é para restringir o português somente à variável do tipo CHAR.
	
	int celsius;
	int fahrenheit;
	int div = 5;
	int soma = 32;
	
	
	printf("Digite a temperatura atual: \n"); //Solicita inserção da temperatura atual do ambiente
	scanf("%d", &celsius); //Armazena a temperatura atual
	
	printf("Está é a temperatura do seu ambiente em fahrenheit: %d", (celsius/div)+soma);
	
	return 0;
	
	
}
