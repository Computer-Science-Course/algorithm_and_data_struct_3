#include <stdio.h>

int digito(char c){ //Função que informa se é um digito
	if((c>='0') && (c<='9')){
		return 1;
	}else{
		return 0;
	}
}

int letra(char c){
	if(((c>='a') && (c<='z')) || ((c>='A') && (c<='Z'))){
		return 1;
	}else{
		return 0;
	}
}

char maiuscula(char c)
{
	if ( (c>='a') && (c<='z'))
		return(c-32);
	else if( (c>='A') && (c<='Z') )
		return(c);
}

int strlenn(char str[])
{
	int i = 0, cont = 0;
	while( str[i] != '\0' )
	{
		cont++;
		i++;
	}
	return cont;
}

void strcpyy(char strA[], char strB [])
{
	int i = 0;
	while( strA[i] != '\0' )
	{
		strB[i] = strA[i];
		i++;
	}
	strB[i] = '\0';
}


int main(){
	char inputUser, inputUserChar;
	char stringA[10] = "teste", stringB[10];

	printf("Resposta da funcao digito: %d\n", digito('a'));

	printf("Resposta da funcao letra: %d\n", letra(']'));
	
	printf("Resposta da funcao maiuscula: %c\n", maiuscula('D'));
	
	printf("Resposta da funcao strlen: %d\n", strlenn("teste"));

	printf("String B: %s\n", stringB);
	strcpyy(stringA, stringB);	
	printf("String B: %s\n", stringB);

	return 0;
}
