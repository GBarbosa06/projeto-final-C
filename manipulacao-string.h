//Header para manipulação de Strings em C, parte tirada de https://gist.github.com/raphaelnapi/ed0c29e049ee6dd0d36d687b77b9ee0a
//por Raphael Pina Viana

#include <string.h>

int instr(int ipos, char* str1, char* str2){
	int i; //caracteres em str1
	int z; //caracteres em str2
	
	if(ipos >= strlen(str1)) //posição inicial nao pode ser maior que str1.length
		return -2;
	
	for(i = ipos; i < strlen(str1); i ++){ //LOOP em str1
		for(z = 0; z < strlen(str2); z ++){ //LOOP em str2 comparando cada caracter
			if(*(str1 + i + z) != *(str2 + z)) //se caracter for diferente passa para proximo caracter de str1
				break;
		}

		if(z == strlen(str2)) //se z == str2.length então loop rodou até o final (todos os caracteres foram comparados e retornaram true)
			return i; //retorna posição do primeiro caracter da sequencia de caracteres
	}
	
	return -1; //fim do loop sem encontrar str2 em str1
}