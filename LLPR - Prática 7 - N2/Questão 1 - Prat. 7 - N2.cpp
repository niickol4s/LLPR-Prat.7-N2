#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define total 500

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	char texto[total];
	int vogal = 0;
	
	printf("\nInsira uma palavra: ");
	gets(texto);
	
	for(int i = 0; i < total; i++) {
		if(texto[i] == 'A'|| texto[i] == 'a' || texto[i] == 'E' || texto[i] == 'e' || texto[i] == 'I' || texto[i] == 'i' || texto[i] == 'O' || texto[i] == 'o' || texto[i] == 'U' || texto[i] == 'u') vogal++;
		if (texto[i] == '\0') break;
	}
	
	printf("\nQuantidade de vogais na palavra: %d", vogal);
	
	return 0;
}
