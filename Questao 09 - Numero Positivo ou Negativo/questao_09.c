#include <stdio.h> //Biblioteca padrão de C
#include <locale.h> //Biblioteca necessária para usar acentuação em C

int main(){ //Função principal do código

	setlocale(LC_CTYPE, "Portuguese"); //Comando para usar português no programa. CTYPE é para restringir o português somente à variável do tipo CHAR.
	
	int num; //Recebe o valor que será inserido pelo usuário
	
	printf("Digite um número inteiro:\n"); //Mostra a mensagem para o usuário inserir um valor
	scanf("%d", &num); //Armazena o valor
	
	if(num<0){ //Estrutura de decisão com a condição caso o valor inserido seja menor que 0
		
		printf("Este valor é negativo!"); //Esta mensagem aparecerá se o valor for menor que 0
		
	} else if(num>0){ //Condição caso o valor seja maior que 0
		
		printf("Este valor é positivo!"); //Esta mensagem aparecerá se o valor for maior que 0
		
	} else if(num==0){ //Condição caso o valor seja idêntico a 0
		
		printf("Este valor é zero!"); //Esta mensagem aparecerá se o valor for idêntico a 0
	}

	return 0; //Finaliza o código
}
