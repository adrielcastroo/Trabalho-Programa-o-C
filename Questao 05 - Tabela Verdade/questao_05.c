#include <stdio.h> //Biblioteca padrão de C
#include <locale.h> //Biblioteca necessária para usar acentuação em C

int main(){ //Função principal do código
	
	setlocale(LC_CTYPE, "Portuguese"); //Comando para usar português no programa. CTYPE é para restringir o português somente à variável do tipo CHAR.
	
	float trab, prov1, prov2; //Variáveis do trabalho, prova 1 e prova 2
	int freq;
	
	
	printf("Digite a nota do trabalho: \n"); 	// Pergunta a nota do trabalho
	scanf("%f", &trab);	//Armazena a nota do trabalho
	
	printf("Digite a nota do prova 1: \n"); 	//Pergunta a nota da prova 1
	scanf("%f", &prov1);		//Armazena a nota da prova 1
	
	
	printf("Digite a nota do prova 2: \n"); //Pergunta a nota da prova 2
	scanf("%f", &prov2);	//Armazena a nota da prova 2
	
	printf("Digite a sua frequência: \n"); //Pergunta a frenquencia
	scanf("%d", &freq);	//Armazena a nota da prova 2
	
	float media = (trab+prov1+prov2)/3;
	
	printf("A sua média é: %.1f\n", media); //Média final do aluno
	
	if (media>=7.0 && freq>=75){	//Verifica se o aluno possui a média maior ou igual a 7, e, se ele possui a frequência maior ou igual a 75%
		
		printf("Você foi APROVADO!!!"); //Se atingir os dois critérios está APROVADO
	}
	
	else{	//Se não atingir os dois critérios está REPROVADO
		
		printf("Você foi REPROVADO!!!");
		
	}
	
	
	return 0; //Finalização do código
}
