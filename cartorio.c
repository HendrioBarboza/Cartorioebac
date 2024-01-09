#include <stdio.h> // BIBLIOTECA DE COMUNICAÇÃO COM O USUÁRIO
#include <stdlib.h> // BIBLIOTECA DE ALOCAÇÃO DE ESPAÇO
#include <locale.h> // BIBLIOTECA DE ALOCAÇÕES DE TEXTO POR REGIÃO
#include<string.h> // BIBLIOTECA RESPONSÁVEL POR CUIDAR DA STRING

int registro()
{
	char arquivo[100];
	char cpf[11];
	char nome[100];
	char sobrenome[100];
	char cargo[100];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); // RESPONSÁVEL POR COPIAR OS VALORES DAS STRING
	
	FILE *file; // CRIA O ARQUIVO
	file = fopen (arquivo, "w"); // CRIA O ARQUIVO
	fprintf(file, "\n CPF: ");
	fprintf(file, cpf); //SALVO O VALOR DA VARIÁVEL
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
	setlocale(LC_ALL, "Portuguese"); //DIFINIÇÃO DA LINGUAGEM
	
	char cpf[11];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: \n");
	scanf("%s", cpf);
	
	FILE * file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf ("Não foi possivel abrir o arquivo, não localizado! \n\n\n");
	}
	
	printf("\n Essas são as informações do usuário:");
	
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

    printf("Digite o CPF do usuário a ser deletado:");
    scanf("%s", cpf);
    
    remove(cpf);
    
    FILE *file;
    file = fopen(cpf, "r");
    
    if(file == NULL)
    {
    	printf("Usuário não se encontra no sistema! \n");
    	system("pause");
	}
    
}



int main ()
	{
	int opcao=0; // DEFINIÇÃO DAS VARIAVEIS
	int x=1;
	
	for(x=1;x=1;)
	
	{
		system("cls");
		
		setlocale(LC_ALL, "Portuguese"); //DIFINIÇÃO DA LINGUAGEM
	
		printf( "### Cartório da EBAC ### \n\n"); // INICIO DO MENU
		printf( "Escolha a opção desejada do menu: \n\n");
		printf("\t 1 Registrar os nomes \n");
		printf("\t 2 Consultar os nomes \n");
		printf("\t 3 Deletar os nomes \n\n"); // FIM DO MENU
		printf("\t  Sair do sistema \n\n"); // FIM DO MENU
		printf("Opção:");
	
		scanf("%d",&opcao); // ARMAZENANDO A ESCOLHA DO USUÁRIO
	
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
				printf("Opção não disponível!"); 
				system("pause");
			break;
	}
	
		
	
}
	
}

