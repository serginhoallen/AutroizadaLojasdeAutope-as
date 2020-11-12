#include <stdio.h>
#include <stdlib.h>

/* nao conseguimos passar o array de struct dentro das funcoes :( */
	typedef struct{
		char nome[20]; //40
		float preco;   //8
		int quantidade;//4
	}Produto;

	typedef struct{
		char nome[20]; //40
		Produto pneu;  //52
		Produto cambio; //52 
		Produto parachoque; //52
		Produto farol; //52
		Produto volante; //52
		float caixa;
	}Loja;

int main() {	
	
	Loja *loja;	
	//struct Loja *loja;
	loja = (struct Loja *) malloc(5 * 308);
	
	strcpy(loja[0].nome, "Loja Zona Sul");
	strcpy(loja[1].nome, "Loja Zona Norte");
	strcpy(loja[2].nome, "Loja Centro");
	strcpy(loja[3].nome, "Loja Zona Leste");
	strcpy(loja[4].nome, "Loja Zona Oeste");
	
	loja[0].caixa = 330.90;
	loja[1].caixa = 220.80;
	loja[2].caixa = 555.55;
	loja[3].caixa = 120.90;
	loja[4].caixa = 180.20;
	
	strcpy(loja[0].pneu.nome, "pneu");
	loja[0].pneu.preco = 99.90;
	loja[0].pneu.quantidade=10;
	
	strcpy(loja[1].pneu.nome, "pneu");
	loja[1].pneu.preco = 85.90;
	loja[1].pneu.quantidade=12;
	
	strcpy(loja[2].pneu.nome, "pneu");
	loja[2].pneu.preco = 79.90;
	loja[2].pneu.quantidade=3;
	
	strcpy(loja[3].pneu.nome, "pneu");
	loja[3].pneu.preco = 90.00;
	loja[3].pneu.quantidade=7;
	
	strcpy(loja[4].pneu.nome, "pneu");
	loja[4].pneu.preco = 65.90;
	loja[4].pneu.quantidade=5;
		
	strcpy(loja[0].cambio.nome, "cambio");
	loja[0].cambio.preco = 109.99;
	loja[0].cambio.quantidade=15;
	
	strcpy(loja[1].cambio.nome, "cambio");
	loja[1].cambio.preco = 100.90;
	loja[1].cambio.quantidade=8;
	
	strcpy(loja[2].cambio.nome, "cambio");
	loja[2].cambio.preco = 115.90;
	loja[2].cambio.quantidade=5;
	
	strcpy(loja[3].cambio.nome, "cambio");
	loja[3].cambio.preco = 150.90;
	loja[3].cambio.quantidade=10;
	
	strcpy(loja[4].cambio.nome, "cambio");
	loja[4].cambio.preco = 170.90;
	loja[4].cambio.quantidade=20;
	
	strcpy(loja[0].parachoque.nome, "parachoque");
	loja[0].parachoque.preco = 99.90;;
	loja[0].parachoque.quantidade=2;
	
	strcpy(loja[1].parachoque.nome, "parachoque");
	loja[1].parachoque.preco = 120.00;
	loja[1].parachoque.quantidade=5;	
	
	strcpy(loja[2].parachoque.nome, "parachoque");
	loja[2].parachoque.preco = 149.90;
	loja[2].parachoque.quantidade=7;
	
	strcpy(loja[3].parachoque.nome, "parachoque");
	loja[3].parachoque.preco = 199.90;
	loja[3].parachoque.quantidade=10;
	
	strcpy(loja[4].parachoque.nome, "parachoque");
	loja[4].parachoque.preco = 179.90;
	loja[4].parachoque.quantidade=12;
	
	strcpy(loja[0].farol.nome, "farol");
	loja[0].farol.preco = 99.90;
	loja[0].farol.quantidade=20;
	
	strcpy(loja[1].farol.nome, "farol");
	loja[1].farol.preco = 150.90;
	loja[1].farol.quantidade=8;
	
	strcpy(loja[2].farol.nome, "farol");
	loja[2].farol.preco = 80.90;
	loja[2].farol.quantidade=5;
	
	strcpy(loja[3].farol.nome, "farol");
	loja[3].farol.preco = 199.90;
	loja[3].farol.quantidade=18;
	
	strcpy(loja[4].farol.nome, "farol");
	loja[4].farol.preco = 300.90;
	loja[4].farol.quantidade=2;
			
	strcpy(loja[0].volante.nome, "volante");
	loja[0].volante.preco = 279.90;
	loja[0].volante.quantidade=5;
	
	strcpy(loja[1].volante.nome, "volante");
	loja[1].volante.preco = 94.90;
	loja[1].volante.quantidade=29;
	
	strcpy(loja[2].volante.nome, "volante");
	loja[2].volante.preco = 169.99;
	loja[2].volante.quantidade=11;
	
	strcpy(loja[3].volante.nome, "volante");
	loja[3].volante.preco = 333.90;
	loja[3].volante.quantidade=18;
	
	strcpy(loja[4].volante.nome, "volante");
	loja[4].volante.preco = 158.90;
	loja[4].volante.quantidade=6;
	
	int index = 0;
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
						printf("%d - ", index + 1);
						printf("%s\n", loja[index].nome);
						index++;
				}
				index = 0;
				printf("Qual loja deseja acessar?\n");
				scanf("%d", &escolha);
					if(escolha > 0 && escolha < 6){
						escolha--;
						printf("%s\n", loja[1].nome);
						printf("%s - R$ %f (estoque %d)\n", loja[escolha].pneu.nome, loja[escolha].pneu.preco, loja[escolha].pneu.quantidade);
						printf("%s - R$ %f (estoque %d)\n", loja[escolha].cambio.nome, loja[escolha].cambio.preco, loja[escolha].cambio.quantidade);
						printf("%s - R$ %f (estoque %d)\n", loja[escolha].parachoque.nome, loja[escolha].parachoque.preco, loja[escolha].parachoque.quantidade);
						printf("%s - R$ %f (estoque %d)\n", loja[escolha].farol.nome, loja[escolha].farol.preco, loja[escolha].farol.quantidade);
						printf("%s - R$ %f (estoque %d)\n", loja[escolha].volante.nome, loja[escolha].volante.preco, loja[escolha].volante.quantidade);
						
						printf("\n1. Fazer compra");
						printf("\n2. Transferir produto");
						printf("\n3. Adicionar produto");
						printf("\n4. Alterar preco");
						printf("\n5. Voltar para lojas");
						
						int escolha2;
						scanf("%d", &escolha2);
						
						switch(escolha2){
							case 1:
								break;		
						}
						
					}			
				break;
					
			case 2:
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
		
int menuProdutos(){
	int repeticao = 1;
	while(repeticao = 1){		
		printf("\n1. Ver lojas para fazer compra");
		printf("\n2. Adicionar produtos");
		printf("\n3. Voltar ao menu");
		
		int escolha;
		scanf("%d", &escolha);
		if(escolha == 1 || escolha == 2 || escolha == 3){
			return escolha;
		}
		printf("\nDigite um numero valido!\n");
	}
}
