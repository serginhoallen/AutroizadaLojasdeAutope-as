#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	typedef struct{
		char nome[20];
		int id;
		float preco;
		int quantidade;
	}Produto;

	typedef struct{
		char nome[20];
		int id;
		Produto produto;
		float caixa;
	}Loja;

int main() {
	

	
	Loja *loja;	
	//struct Loja *loja;
	loja = (struct Loja *) malloc(5 * 64);
	
	loja[0].id = 0;
	loja[1].id = 1;
	loja[2].id = 2;
	loja[3].id = 3;
	loja[4].id = 4;
	strcpy(loja[0].nome, "teste");
	strcpy(loja[1].nome, "loja1");
	strcpy(loja[2].nome, "loja2");
	strcpy(loja[3].nome, "loja3");
	strcpy(loja[4].nome, "loja4");
	
	
	int index = 0;
	int aux = 1;
	int repeticao = 1;
	while(repeticao == 1){		
		printf("\n===MENU===\n");
		printf("1. Lojas\n");
		printf("2. Ver produtos\n");
		printf("3. Sair\n");
			
		int escolha;
		scanf("%d", &escolha);
		
		switch(escolha){
			case 1:
				printf("\n\n");
				while(index != 5){				
						printf("%d - ", aux);
						printf("%s\n", loja[index].nome);
						index++;
						aux++;
				}
				break;
					
			case 2:
				exibirProdutos();
				menuProdutos();
				break;
					
			case 3:
				repeticao = 0;
				break;
					
			default:
				printf("\nDigite um numero valido\n");
		}			
	}
	
	return 0;
}

void exibirProdutos(){
	printf("\n===PRODUTOS===\n");
	printf("1. Motor - 399.99\n");
	printf("2. Buzina - 54.49\n");
	printf("3. Parachoque - 100.00\n");
	printf("4. Radiador - 87.90\n");
	printf("5. Pneu - 119.90\n");		
}
	
		
void menuProdutos(){
	int repeticao = 1;
	while(repeticao = 1){		
		printf("\n1. Ver lojas para fazer compra");
		printf("\n2. Adicionar produtos");
		printf("\n3. Voltar ao menu");
		
		int escolha;
		scanf("%d", &escolha);
		
		switch(escolha){
			case 1:				
				break;
				
			case 2:
				break;
				
			case 3:
				repeticao = 2;
				break;
				
			default:
				break;
		}	
	}
}
