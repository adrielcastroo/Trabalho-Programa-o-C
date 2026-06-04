#include <stdio.h> //Biblioteca padrão de C
#include <locale.h> //Biblioteca necessária para usar acentuação em C

int main(){ //Função principal do código

	setlocale(LC_CTYPE, "Portuguese"); //Comando para usar português no programa. CTYPE é para restringir o português somente à variável do tipo CHAR.
	
	int number;
	
	printf("Digite um número:\n"); //Mostra a mensagem para o usuário inserir um valor
	scanf("%d", &number); //Armazena o valor
	
	if(number%2==0){ //A condição irá verificar se o resto é idêntico a 0. Caso seja idêntico a 0, será um número par. senão será um número ímpar.
		
		printf("Este é um número par!"); //Mostra ao usuário que o número é par
	} else {
		
		printf("Este é um número ímpar!"); //Mostra ao usuário que o número é ímpar
	}

	return 0; //Finaliza o código
}
