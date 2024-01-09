#include <stdio.h> // BIBLIOTECA DE COMUNICA��O COM O USU�RIO
#include <stdlib.h> // BIBLIOTECA DE ALOCA��O DE ESPA�O
#include <locale.h> // BIBLIOTECA DE ALOCA��ES DE TEXTO POR REGI�O
#include<string.h> // BIBLIOTECA RESPONS�VEL POR CUIDAR DA STRING

int registro()
{
	char arquivo[100];
	char cpf[11];
	char nome[100];
	char sobrenome[100];
	char cargo[100];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); // RESPONS�VEL POR COPIAR OS VALORES DAS STRING
	
	FILE *file; // CRIA O ARQUIVO
	file = fopen (arquivo, "w"); // CRIA O ARQUIVO
	fprintf(file, "\n CPF: ");
	fprintf(file, cpf); //SALVO O VALOR DA VARI�VEL
	fclose(file); // FECHA O ARQUIVO
	
	file = fopen (arquivo, "a");
	fprintf(file, "\n NOME: ");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf ("%s", nome);
	
	file = fopen (arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	file = fopen (arquivo, "a");
	fprintf(file, "\n SOBRENOME: ");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf ("%s", sobrenome);
	
	file = fopen (arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen (arquivo, "a");
	fprintf(file, "\n CARGO: ");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf ("%s", cargo);
	
	file = fopen (arquivo, "a");
	fprintf(file, cargo);
	fprintf(file, "\n SOBRENOME");
	fclose(file);
	
	file = fopen (arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //DIFINI��O DA LINGUAGEM
	
	char cpf[11];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: \n");
	scanf("%s", cpf);
	
	FILE * file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf ("N�o foi possivel abrir o arquivo, n�o localizado! \n\n\n");
	}
	
	printf("\n Essas s�o as informa��es do usu�rio:");
	
	while (fgets(conteudo, 200, file) !=NULL)
	{
		printf("%s", conteudo);
		printf("");
	}
	
	system ("pause");
	
	
	
}

int deletar()
{
    char cpf[100];

    printf("Digite o CPF do usu�rio a ser deletado:");
    scanf("%s", cpf);
    
    remove(cpf);
    
    FILE *file;
    file = fopen(cpf, "r");
    
    if(file == NULL)
    {
    	printf("Usu�rio n�o se encontra no sistema! \n");
    	system("pause");
	}
    
}



int main ()
	{
	int opcao=0; // DEFINI��O DAS VARIAVEIS
	int x=1;
	
	for(x=1;x=1;)
	
	{
		system("cls");
		
		setlocale(LC_ALL, "Portuguese"); //DIFINI��O DA LINGUAGEM
	
		printf( "### Cart�rio da EBAC ### \n\n"); // INICIO DO MENU
		printf( "Escolha a op��o desejada do menu: \n\n");
		printf("\t 1 Registrar os nomes \n");
		printf("\t 2 Consultar os nomes \n");
		printf("\t 3 Deletar os nomes \n\n"); // FIM DO MENU
		printf("\t  Sair do sistema \n\n"); // FIM DO MENU
		printf("Op��o:");
	
		scanf("%d",&opcao); // ARMAZENANDO A ESCOLHA DO USU�RIO
	
		system("cls");
		
		switch(opcao)
		{
			case 1:
				registro();
			break;
			
			case 2:
				consulta();
			break;
			
			case 3:
				deletar();
			break;
			
			case 4:
				printf("Obrigado por utilizar o sistema!\n");
			return 0;
			break;
			
			default:
				printf("Op��o n�o dispon�vel!"); 
				system("pause");
			break;
	}
	
		
	
}
	
}

