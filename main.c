#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

/* nao conseguimos passar o array de struct dentro das funcoes :( */
	typedef struct{
		char nome[20]; //40
		float preco;   //8
		int quantidade;//4
	}Produto;

	typedef struct{ // nao conseguimos passar um array de Produto dentro da struct Loja, entao criamos 5 produtos fixos :(
		char nome[20]; //40
		Produto pneu;  //52
		Produto cambio; //52 
		Produto parachoque; //52
		Produto farol; //52
		Produto volante; //52
		float caixa;
	}Loja;

int main() {	
	
	Loja *lojas;	
	//struct lojaz *lojaz;
	lojas = (struct lojaz *) malloc(5 * 308); //com sizeof da erro
	
	strcpy(lojaz[0].nome, "lojaz Zona Sul");
	strcpy(lojaz[1].nome, "lojaz Zona Norte");
	strcpy(lojaz[2].nome, "lojaz Centro");
	strcpy(lojaz[3].nome, "lojaz Zona Leste");
	strcpy(lojaz[4].nome, "lojaz Zona Oeste");
	
	lojaz[0].caixa = 330.90;
	lojaz[1].caixa = 220.80;
	lojaz[2].caixa = 555.55;
	lojaz[3].caixa = 120.90;
	lojaz[4].caixa = 180.20;
	
	strcpy(lojaz[0].pneu.nome, "pneu");
	lojaz[0].pneu.preco = 99.90;
	lojaz[0].pneu.quantidade=10;
	
	strcpy(lojaz[1].pneu.nome, "pneu");
	lojaz[1].pneu.preco = 85.90;
	lojaz[1].pneu.quantidade=12;
	
	strcpy(lojaz[2].pneu.nome, "pneu");
	lojaz[2].pneu.preco = 79.90;
	lojaz[2].pneu.quantidade=3;
	
	strcpy(lojaz[3].pneu.nome, "pneu");
	lojaz[3].pneu.preco = 90.00;
	lojaz[3].pneu.quantidade=7;
	
	strcpy(lojaz[4].pneu.nome, "pneu");
	lojaz[4].pneu.preco = 65.90;
	lojaz[4].pneu.quantidade=5;
		
	strcpy(lojaz[0].cambio.nome, "cambio");
	lojaz[0].cambio.preco = 109.99;
	lojaz[0].cambio.quantidade=15;
	
	strcpy(lojaz[1].cambio.nome, "cambio");
	lojaz[1].cambio.preco = 100.90;
	lojaz[1].cambio.quantidade=8;
	
	strcpy(lojaz[2].cambio.nome, "cambio");
	lojaz[2].cambio.preco = 115.90;
	lojaz[2].cambio.quantidade=5;
	
	strcpy(lojaz[3].cambio.nome, "cambio");
	lojaz[3].cambio.preco = 150.90;
	lojaz[3].cambio.quantidade=10;
	
	strcpy(lojaz[4].cambio.nome, "cambio");
	lojaz[4].cambio.preco = 170.90;
	lojaz[4].cambio.quantidade=20;
	
	strcpy(lojaz[0].parachoque.nome, "parachoque");
	lojaz[0].parachoque.preco = 99.90;;
	lojaz[0].parachoque.quantidade=2;
	
	strcpy(lojaz[1].parachoque.nome, "parachoque");
	lojaz[1].parachoque.preco = 120.00;
	lojaz[1].parachoque.quantidade=5;	
	
	strcpy(lojaz[2].parachoque.nome, "parachoque");
	lojaz[2].parachoque.preco = 149.90;
	lojaz[2].parachoque.quantidade=7;
	
	strcpy(lojaz[3].parachoque.nome, "parachoque");
	lojaz[3].parachoque.preco = 199.90;
	lojaz[3].parachoque.quantidade=10;
	
	strcpy(lojaz[4].parachoque.nome, "parachoque");
	lojaz[4].parachoque.preco = 179.90;
	lojaz[4].parachoque.quantidade=12;
	
	strcpy(lojaz[0].farol.nome, "farol");
	lojaz[0].farol.preco = 99.90;
	lojaz[0].farol.quantidade=20;
	
	strcpy(lojaz[1].farol.nome, "farol");
	lojaz[1].farol.preco = 150.90;
	lojaz[1].farol.quantidade=8;
	
	strcpy(lojaz[2].farol.nome, "farol");
	lojaz[2].farol.preco = 80.90;
	lojaz[2].farol.quantidade=5;
	
	strcpy(lojaz[3].farol.nome, "farol");
	lojaz[3].farol.preco = 199.90;
	lojaz[3].farol.quantidade=18;
	
	strcpy(lojaz[4].farol.nome, "farol");
	lojaz[4].farol.preco = 300.90;
	lojaz[4].farol.quantidade=2;
			
	strcpy(lojaz[0].volante.nome, "volante");
	lojaz[0].volante.preco = 279.90;
	lojaz[0].volante.quantidade=5;
	
	strcpy(lojaz[1].volante.nome, "volante");
	lojaz[1].volante.preco = 94.90;
	lojaz[1].volante.quantidade=29;
	
	strcpy(lojaz[2].volante.nome, "volante");
	lojaz[2].volante.preco = 169.99;
	lojaz[2].volante.quantidade=11;
	
	strcpy(lojaz[3].volante.nome, "volante");
	lojaz[3].volante.preco = 333.90;
	lojaz[3].volante.quantidade=18;
	
	strcpy(lojaz[4].volante.nome, "volante");
	lojaz[4].volante.preco = 158.90;
	lojaz[4].volante.quantidade=6;
	
	int index = 0;
	int repeticao = 1;
	while(repeticao == 1){					
		int escolha;
		
		printf("\n\n");
		while(index != 5){				
				printf("%d - ", index + 1);
				printf("%s\n", lojaz[index].nome);
				index++;
		}
		index = 0;
		printf("Qual lojaz deseja acessar?\n");
		scanf("%d", &escolha);
			if(escolha > 0 && escolha < 6){
				escolha--;
				printf("%s\n", lojaz[escolha].nome);
				printf("%s - R$ %.2f (estoque %d)\n", lojaz[escolha].pneu.nome, lojaz[escolha].pneu.preco, lojaz[escolha].pneu.quantidade);
				printf("%s - R$ %.2f (estoque %d)\n", lojaz[escolha].cambio.nome, lojaz[escolha].cambio.preco, lojaz[escolha].cambio.quantidade);
				printf("%s - R$ %.2f (estoque %d)\n", lojaz[escolha].parachoque.nome, lojaz[escolha].parachoque.preco, lojaz[escolha].parachoque.quantidade);
				printf("%s - R$ %.2f (estoque %d)\n", lojaz[escolha].farol.nome, lojaz[escolha].farol.preco, lojaz[escolha].farol.quantidade);
				printf("%s - R$ %.2f (estoque %d)\n", lojaz[escolha].volante.nome, lojaz[escolha].volante.preco, lojaz[escolha].volante.quantidade);
				
				int escolha2 = menulojaz();
					
				switch(escolha2){
					case 1:
						printf("\n1. %s - R$ %.2f (estoque %d)\n", lojaz[escolha].pneu.nome, lojaz[escolha].pneu.preco, lojaz[escolha].pneu.quantidade);
						printf("2. %s - R$ %.2f (estoque %d)\n", lojaz[escolha].cambio.nome, lojaz[escolha].cambio.preco, lojaz[escolha].cambio.quantidade);
						printf("3. %s - R$ %.2f (estoque %d)\n", lojaz[escolha].parachoque.nome, lojaz[escolha].parachoque.preco, lojaz[escolha].parachoque.quantidade);
						printf("4. %s - R$ %.2f (estoque %d)\n", lojaz[escolha].farol.nome, lojaz[escolha].farol.preco, lojaz[escolha].farol.quantidade);
						printf("5. %s - R$ %.2f (estoque %d)\n", lojaz[escolha].volante.nome, lojaz[escolha].volante.preco, lojaz[escolha].volante.quantidade);
						printf("Qual item deseja comprar?\n");
						int compra;
						scanf("%d", &compra);
						printf("\nQuantos deseja comprar?\n");
						int qtdCompra;
						scanf("%d", &qtdCompra);							
						
						switch(compra){
							case 1:
								if(lojaz[escolha].pneu.quantidade >= qtdCompra && qtdCompra > 0){
									float precoTotal = lojaz[escolha].pneu.preco * qtdCompra;
									printf("\nPreco total: %.2f", precoTotal);
									if(confirmar()==1){
										printf("\nCompra confirmada!\n");
										lojaz[escolha].caixa = lojaz[escolha].caixa + precoTotal;
										lojaz[escolha].pneu.quantidade = lojaz[escolha].pneu.quantidade - qtdCompra;
									}else{
										printf("\nCompra cancelada!\n");
									}
								}else{
									printf("\nDigite um valor valido!\n");
								}
								break;
							
							case 2:	
								if(lojaz[escolha].cambio.quantidade >= qtdCompra && qtdCompra > 0){
									float precoTotal = lojaz[escolha].cambio.preco * qtdCompra;
									printf("\nPreco total: %.2f", precoTotal);
									if(confirmar()==1){
										printf("\nCompra confirmada!\n");
										lojaz[escolha].caixa = lojaz[escolha].caixa + precoTotal;
										lojaz[escolha].cambio.quantidade = lojaz[escolha].cambio.quantidade - qtdCompra;
									}else{
										printf("\nCompra cancelada!\n");
									}
								}else{
									printf("\nDigite um valor valido!\n");
								}
								break;	
								
							case 3:
								if(lojaz[escolha].parachoque.quantidade >= qtdCompra && qtdCompra > 0){
									float precoTotal = lojaz[escolha].parachoque.preco * qtdCompra;
									printf("\nPreco total: %.2f", precoTotal);
									if(confirmar()==1){
										printf("\nCompra confirmada!\n");
										lojaz[escolha].caixa = lojaz[escolha].caixa + precoTotal;
										lojaz[escolha].parachoque.quantidade = lojaz[escolha].parachoque.quantidade - qtdCompra;
									}else{
										printf("\nCompra cancelada!\n");
										}
									}else{
										printf("\nDigite um valor valido!\n");
									}
									break;
									
								case 4:
									if(lojaz[escolha].farol.quantidade >= qtdCompra && qtdCompra > 0){
										float precoTotal = lojaz[escolha].farol.preco * qtdCompra;
										printf("\nPreco total: %.2f", precoTotal);
										if(confirmar()==1){
											printf("\nCompra confirmada!\n");
											lojaz[escolha].caixa = lojaz[escolha].caixa + precoTotal;
											lojaz[escolha].farol.quantidade = lojaz[escolha].farol.quantidade - qtdCompra;
										}else{
											printf("\nCompra cancelada!\n");
										}
									}else{
										printf("\nDigite um valor valido!\n");
									}
									break;
									
								case 5:
									if(lojaz[escolha].volante.quantidade >= qtdCompra && qtdCompra > 0){
										float precoTotal = lojaz[escolha].volante.preco * qtdCompra;
										printf("\nPreco total: %.2f", precoTotal);
										if(confirmar()==1){
											printf("\nCompra confirmada!\n");
											lojaz[escolha].caixa = lojaz[escolha].caixa + precoTotal;
											lojaz[escolha].volante.quantidade = lojaz[escolha].volante.quantidade - qtdCompra;
										}else{
											printf("\nCompra cancelada!\n");
										}
									}else{
										printf("\nDigite um valor valido!\n");
									}
									break;	
									
								default:
									printf("/nDigite um numero valido!\n");
							}//final switch compra de produtos
							
							break;	
							
						case 2:
							printf("\n1 - %s (estoque %d)\n", lojaz[escolha].pneu.nome, lojaz[escolha].pneu.quantidade);
							printf("2 - %s (estoque %d)\n", lojaz[escolha].cambio.nome, lojaz[escolha].cambio.quantidade);
							printf("3 - %s (estoque %d)\n", lojaz[escolha].parachoque.nome, lojaz[escolha].parachoque.quantidade);
							printf("4 - %s (estoque %d)\n", lojaz[escolha].farol.nome, lojaz[escolha].farol.quantidade);
							printf("5 - %s (estoque %d)\n", lojaz[escolha].volante.nome, lojaz[escolha].volante.quantidade);
							
							printf("\nQual produto deseja transferir?\n");
							int escolha2;
							scanf("%d", &escolha2);
							printf("Quantos deseja transferir?\n");
							int qtdProduto;
							scanf("%d", &qtdProduto);
							switch(escolha2){
								case 1:
									if(lojaz[escolha].pneu.quantidade >= qtdProduto && qtdProduto > 0){
										int numerolojaz = 0;
										while(numerolojaz != 5){				
											printf("%d - ", numerolojaz + 1);
											printf("%s\n", lojaz[numerolojaz].nome);
											numerolojaz++;
										}
										printf("\nPara qual lojaz deseja transferir?\n");
										scanf("%d", &escolha2);
										escolha2--;
										if(escolha != escolha2){
											printf("\nTransferir %d pneu(s) de %s para %s?\n", qtdProduto, lojaz[escolha].nome, lojaz[escolha2].nome);	
											if(confirmar()==1){
												printf("\nTransferencia confirmada!\n");
												lojaz[escolha].pneu.quantidade = lojaz[escolha].pneu.quantidade - qtdProduto;
												lojaz[escolha2].pneu.quantidade = lojaz[escolha2].pneu.quantidade + qtdProduto;
											}else{
												printf("\nCompra cancelada!\n");	
											}
										}else{
											printf("\nDigite um valor valido!\n");
										}
									}else{
										printf("\nDigite um valor valido!\n");
									}
									break;
									
								case 2:
									if(lojaz[escolha].cambio.quantidade >= qtdProduto && qtdProduto > 0){
										int numerolojaz = 0;
										while(numerolojaz != 5){				
											printf("%d - ", numerolojaz + 1);
											printf("%s\n", lojaz[numerolojaz].nome);
											numerolojaz++;
										}
										printf("\nPara qual lojaz deseja transferir?\n");
										scanf("%d", &escolha2);
										escolha2--;
										if(escolha != escolha2){
											printf("\nTransferir %d cambio(s) de %s para %s?\n", qtdProduto, lojaz[escolha].nome, lojaz[escolha2].nome);	
											if(confirmar()==1){
												printf("\nTransferencia confirmada!\n");
												lojaz[escolha].cambio.quantidade = lojaz[escolha].cambio.quantidade - qtdProduto;
												lojaz[escolha2].cambio.quantidade = lojaz[escolha2].cambio.quantidade + qtdProduto;
											}else{
												printf("\nCompra cancelada!\n");	
											}
										}else{
											printf("\nDigite um valor valido!\n");
										}
									}else{
										printf("\nDigite um valor valido!\n");
									}
									break;
									
								case 3:
									if(lojaz[escolha].parachoque.quantidade >= qtdProduto && qtdProduto > 0){
										int numerolojaz = 0;
										while(numerolojaz != 5){				
											printf("%d - ", numerolojaz + 1);
											printf("%s\n", lojaz[numerolojaz].nome);
											numerolojaz++;
										}
										printf("\nPara qual lojaz deseja transferir?\n");
										scanf("%d", &escolha2);
										escolha2--;
										if(escolha != escolha2){
											printf("\nTransferir %d parachoque(s) de %s para %s?\n", qtdProduto, lojaz[escolha].nome, lojaz[escolha2].nome);	
											if(confirmar()==1){
												printf("\nTransferencia confirmada!\n");
												lojaz[escolha].parachoque.quantidade = lojaz[escolha].parachoque.quantidade - qtdProduto;
												lojaz[escolha2].parachoque.quantidade = lojaz[escolha2].parachoque.quantidade + qtdProduto;
											}else{
												printf("\nCompra cancelada!\n");	
											}
										}else{
											printf("\nDigite um valor valido!\n");
										}
									}else{
										printf("\nDigite um valor valido!\n");
									}
									break;
									
								case 4:
									if(lojaz[escolha].farol.quantidade >= qtdProduto && qtdProduto > 0){
										int numerolojaz = 0;
										while(numerolojaz != 5){				
											printf("%d - ", numerolojaz + 1);
											printf("%s\n", lojaz[numerolojaz].nome);
											numerolojaz++;
										}
										printf("\nPara qual lojaz deseja transferir?\n");
										scanf("%d", &escolha2);
										escolha2--;
										if(escolha != escolha2){
											printf("\nTransferir %d farol(s) de %s para %s?\n", qtdProduto, lojaz[escolha].nome, lojaz[escolha2].nome);	
											if(confirmar()==1){
												printf("\nTransferencia confirmada!\n");
												lojaz[escolha].farol.quantidade = lojaz[escolha].farol.quantidade - qtdProduto;
												lojaz[escolha2].farol.quantidade = lojaz[escolha2].farol.quantidade + qtdProduto;
											}else{
												printf("\nCompra cancelada!\n");	
											}
										}else{
											printf("\nDigite um valor valido!\n");
										}
									}else{
										printf("\nDigite um valor valido!\n");
									}
									break;
									
								case 5:
									if(lojaz[escolha].volante.quantidade >= qtdProduto && qtdProduto > 0){
										int numerolojaz = 0;
										while(numerolojaz != 5){				
											printf("%d - ", numerolojaz + 1);
											printf("%s\n", lojaz[numerolojaz].nome);
											numerolojaz++;
										}
										printf("\nPara qual lojaz deseja transferir?\n");
										scanf("%d", &escolha2);
										escolha2--;
										if(escolha != escolha2){
											printf("\nTransferir %d volante(s) de %s para %s?\n", qtdProduto, lojaz[escolha].nome, lojaz[escolha2].nome);	
											if(confirmar()==1){
												printf("\nTransferencia confirmada!\n");
												lojaz[escolha].volante.quantidade = lojaz[escolha].volante.quantidade - qtdProduto;
												lojaz[escolha2].volante.quantidade = lojaz[escolha2].volante.quantidade + qtdProduto;
											}else{
												printf("\nCompra cancelada!\n");	
											}
										}else{
											printf("\nDigite um valor valido!\n");
										}
									}else{
										printf("\nDigite um valor valido!\n");
									}
									break;
									
								default:
									printf("\nDigite um valor valido!\n");								
							}//final switch transferencia de produtos
							break;	
					
					case 3:
						printf("\n1 - %s (estoque %d)\n", lojaz[escolha].pneu.nome, lojaz[escolha].pneu.quantidade);
						printf("2 - %s (estoque %d)\n", lojaz[escolha].cambio.nome, lojaz[escolha].cambio.quantidade);
						printf("3 - %s (estoque %d)\n", lojaz[escolha].parachoque.nome, lojaz[escolha].parachoque.quantidade);
						printf("4 - %s (estoque %d)\n", lojaz[escolha].farol.nome, lojaz[escolha].farol.quantidade);
						printf("5 - %s (estoque %d)\n", lojaz[escolha].volante.nome, lojaz[escolha].volante.quantidade);
							
						printf("\nQual produto deseja adicionar?\n");
						int idProduto;
						scanf("%d", &idProduto);
						printf("Quantos deseja adicionar?\n");
						int qtdProduto2;
						scanf("%d", &qtdProduto2);
						if(qtdProduto > 0){
							switch(idProduto){
								case 1:
									printf("\nDeseja adicionar %d pneu(s)", qtdProduto2);
									if(confirmar() == 1){
										print("\nAdicionado com sucesso!\n");
										lojaz[escolha].pneu.quantidade = lojaz[escolha].pneu.quantidade + qtdProduto2;
									}else{
										printf("\nAdicao de produto cancelada!\n");
									}
									break;
									
								case 2:
									printf("\nDeseja adicionar %d cambio(s)", qtdProduto2);
									if(confirmar() == 1){
										print("\nAdicionado com sucesso!\n");
										lojaz[escolha].cambio.quantidade = lojaz[escolha].cambio.quantidade + qtdProduto2;
									}else{
										printf("\nAdicao de produto cancelada!\n");
									}
									break;
										
								case 3:
									printf("\nDeseja adicionar %d parachoque(s)", qtdProduto2);
									if(confirmar() == 1){
										print("\nAdicionado com sucesso!\n");
										lojaz[escolha].parachoque.quantidade = lojaz[escolha].parachoque.quantidade + qtdProduto2;
									}else{
										printf("\nAdicao de produto cancelada!\n");
									}
									break;
									
								case 4:
									printf("\nDeseja adicionar %d farol(s)", qtdProduto2);
									if(confirmar() == 1){
										print("\nAdicionado com sucesso!\n");
										lojaz[escolha].farol.quantidade = lojaz[escolha].farol.quantidade + qtdProduto2;
									}else{
										printf("\nAdicao de produto cancelada!\n");
									}
									break;
									
								case 5:
									printf("\nDeseja adicionar %d volante(s)", qtdProduto2);
									if(confirmar() == 1){
										print("\nAdicionado com sucesso!\n");
										lojaz[escolha].volante.quantidade = lojaz[escolha].volante.quantidade + qtdProduto2;
									}else{
										printf("\nAdicao de produto cancelada!\n");
									}
									break;
							}//final switch adicionar produto
						}else{
							printf("\nValor invalido!\n");
						}
						break; // final adicionar produto
					
					case 4:
						printf("\n1 - %s (estoque %.2f)\n", lojaz[escolha].pneu.nome, lojaz[escolha].pneu.preco);
						printf("2 - %s (estoque %.2f)\n", lojaz[escolha].cambio.nome, lojaz[escolha].cambio.preco);
						printf("3 - %s (estoque %.2f)\n", lojaz[escolha].parachoque.nome, lojaz[escolha].parachoque.preco);
						printf("4 - %s (estoque %.2f)\n", lojaz[escolha].farol.nome, lojaz[escolha].farol.preco);
						printf("5 - %s (estoque %.2f)\n", lojaz[escolha].volante.nome, lojaz[escolha].volante.preco);
						
						printf("\nQual produto deseja alterar o preco?\n");
						int idProduto2;
						scanf("%d", &idProduto2);
						printf("Para qual preco deseja alterar?\n");
						float novoPreco;
						scanf("%f", &novoPreco);
						
						if(novoPreco > 1.0){
							switch(idProduto2){
								case 1:
									if(novoPreco != lojaz[escolha].pneu.preco){
										printf("\nMudar preco do pneu de %.2f para %.2f?", lojaz[escolha].pneu.preco, novoPreco);
										if(confirmar() == 1){
											printf("\nPreco alterado com sucesso!\n");
											lojaz[escolha].pneu.preco = novoPreco;
										}else{
											printf("\nAlteracao de preco cancelada!\n");
										}
									}else{
										printf("\nValor invalido!\n");
									}
									break;
								
								case 2:
									if(novoPreco != lojaz[escolha].cambio.preco){
										printf("\nMudar preco do cambio de %.2f para %.2f?", lojaz[escolha].cambio.preco, novoPreco);
										if(confirmar() == 1){
											printf("\nPreco alterado com sucesso!\n");
											lojaz[escolha].cambio.preco = novoPreco;
										}else{
											printf("\nAlteracao de preco cancelada!\n");
										}
									}else{
										printf("\nValor invalido!\n");
									}
									break;
									
								case 3:
									if(novoPreco != lojaz[escolha].parachoque.preco){
										printf("\nMudar preco do parachoque de %.2f para %.2f?", lojaz[escolha].parachoque.preco, novoPreco);
										if(confirmar() == 1){
											printf("\nPreco alterado com sucesso!\n");
											lojaz[escolha].parachoque.preco = novoPreco;
										}else{
											printf("\nAlteracao de preco cancelada!\n");
										}
									}else{
										printf("\nValor invalido!\n");
									}
									break;
									
								case 4:
									if(novoPreco != lojaz[escolha].farol.preco){
										printf("\nMudar preco do farol de %.2f para %.2f?", lojaz[escolha].farol.preco, novoPreco);
										if(confirmar() == 1){
											printf("\nPreco alterado com sucesso!\n");
											lojaz[escolha].farol.preco = novoPreco;
										}else{
											printf("\nAlteracao de preco cancelada!\n");
										}
									}else{
										printf("\nValor invalido!\n");
									}
									break;
									
								case 5:
									if(novoPreco != lojaz[escolha].volante.preco){
										printf("\nMudar preco do volante de %.2f para %.2f?", lojaz[escolha].volante.preco, novoPreco);
										if(confirmar() == 1){
											printf("\nPreco alterado com sucesso!\n");
											lojaz[escolha].volante.preco = novoPreco;
										}else{
											printf("\nAlteracao de preco cancelada!\n");
										}
									}else{
										printf("\nValor invalido!\n");
									}
									break;
									
								default:
									printf("\nDigite um numero valido\n");
							}
						}
						break;	//final alterar preco
						
					case 5:
						repeticao = 0;
						break;
					
					default:
						printf("\nDigite um numero valido\n");									
				}						
		}
	}

	
	return 0;
}

		
int menulojaz(){
	printf("\n1. Fazer compra");
	printf("\n2. Transferir produto");
	printf("\n3. Adicionar produto");
	printf("\n4. Alterar preco");
	printf("\n5. Voltar para lojazs\n");
	
	int escolha;
	scanf("%d", &escolha);
	
	return escolha;
}

int confirmar(){
	printf("\n1 . Confirmar");
	printf("\n2 . Cancelar\n");
	int confirma;
	scanf("%d", &confirma);
	
	return confirma;
}
