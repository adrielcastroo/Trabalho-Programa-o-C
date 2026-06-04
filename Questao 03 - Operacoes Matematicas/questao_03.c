#include <stdio.h> //Biblioteca padrão de C
#include <locale.h> //Biblioteca necessária para usar acentuação em C

int main(){ //Função principal do código
	
	setlocale(LC_CTYPE, "Portuguese"); //Comando para usar português no programa. CTYPE é para restringir o português somente à variável do tipo CHAR.
	
	int num1, num2; //Váriaveis dos dois numeros
	
	printf("Digite dois números: \n"); //Solicita inserção de dois números inteiros
	scanf("%d" "%d", &num1 , &num2); //Armazena os dois números
	
	printf("A soma dos dois números é: %d\n", num1+num2); //Soma os dois valores
	printf("A subtração dos dois números é: %d\n", num1-num2); //Subtrai os dois valores
	printf("A multiplicação dos dois números é: %d\n", num1*num2); //Multiplica os dois valores
	printf("A divisão dos dois números é: %d\n", num1/num2); //Divide os dois valores
	
	return 0; //Finalização do código
}
