#include <stdio.h>
#include <stdio.h>
#include <locale.h>

#define total 100

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	char palavra[total];
	char letra;
	int ocorrencia = 0;
	
	printf("\nQuestão 2 - Prática 7");
	
	printf("\nInsira a palavra: ");
	gets(palavra);
	
	printf("\nInsira uma letra: ");
	scanf("%c", &letra);
	
	for(int i = 0; i < total; i++) {
		if(letra == palavra[i]) ocorrencia++;
		if(palavra[i] == '\0') break;
	}
	
	printf("\nA letra \"%c\" se repete %d vezes na palavra.", letra, ocorrencia);
	return 0;
}
