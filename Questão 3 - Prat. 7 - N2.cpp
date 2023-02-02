#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define total 100

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	char palavra[total];
	char invertida[total];
	int tamanho;
	
	printf("\nQuestão 3 - Prática 7");
	
	printf("\nInsira a palavra: ");
	gets(palavra);
	
	tamanho = strlen(palavra);
	tamanho--;
	
	for(int i = 0; i <= tamanho; i++) {
		invertida[i] = palavra[tamanho - i]; 
	}
	
	printf("\nA palavra invertida: %s", invertida);
	return 0;
}
