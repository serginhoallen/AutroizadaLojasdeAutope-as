#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* nao conseguimos passar o array de struct dentro das funcoes :( */
typedef struct
{
  char nome[20];		//40
  float preco;			//8
  int quantidade;		//4
} Produto;

typedef struct
{
  char nome[20];		//40
  Produto pneu;			//52
  Produto cambio;		//52 
  Produto parachoque;		//52
  Produto farol;		//52
  Produto volante;		//52
  float caixa;
} Loja;

int
main ()
{

  Loja *loja;
  //struct Loja *loja;
  loja = (struct Loja *) malloc (5 * 308);

  strcpy (loja[0].nome, "Loja Zona Sul");
  strcpy (loja[1].nome, "Loja Zona Norte");
  strcpy (loja[2].nome, "Loja Centro");
  strcpy (loja[3].nome, "Loja Zona Leste");
  strcpy (loja[4].nome, "Loja Zona Oeste");

  loja[0].caixa = 330.90;
  loja[1].caixa = 220.80;
  loja[2].caixa = 555.55;
  loja[3].caixa = 120.90;
  loja[4].caixa = 180.20;

  strcpy (loja[0].pneu.nome, "pneu");
  loja[0].pneu.preco = 99.90;
  loja[0].pneu.quantidade = 10;

  strcpy (loja[1].pneu.nome, "pneu");
  loja[1].pneu.preco = 85.90;
  loja[1].pneu.quantidade = 12;

  strcpy (loja[2].pneu.nome, "pneu");
  loja[2].pneu.preco = 79.90;
  loja[2].pneu.quantidade = 3;

  strcpy (loja[3].pneu.nome, "pneu");
  loja[3].pneu.preco = 90.00;
  loja[3].pneu.quantidade = 7;

  strcpy (loja[4].pneu.nome, "pneu");
  loja[4].pneu.preco = 65.90;
  loja[4].pneu.quantidade = 5;

  strcpy (loja[0].cambio.nome, "cambio");
  loja[0].cambio.preco = 109.99;
  loja[0].cambio.quantidade = 15;

  strcpy (loja[1].cambio.nome, "cambio");
  loja[1].cambio.preco = 100.90;
  loja[1].cambio.quantidade = 8;

  strcpy (loja[2].cambio.nome, "cambio");
  loja[2].cambio.preco = 115.90;
  loja[2].cambio.quantidade = 5;

  strcpy (loja[3].cambio.nome, "cambio");
  loja[3].cambio.preco = 150.90;
  loja[3].cambio.quantidade = 10;

  strcpy (loja[4].cambio.nome, "cambio");
  loja[4].cambio.preco = 170.90;
  loja[4].cambio.quantidade = 20;

  strcpy (loja[0].parachoque.nome, "parachoque");
  loja[0].parachoque.preco = 99.90;;
  loja[0].parachoque.quantidade = 2;

  strcpy (loja[1].parachoque.nome, "parachoque");
  loja[1].parachoque.preco = 120.00;
  loja[1].parachoque.quantidade = 5;

  strcpy (loja[2].parachoque.nome, "parachoque");
  loja[2].parachoque.preco = 149.90;
  loja[2].parachoque.quantidade = 7;

  strcpy (loja[3].parachoque.nome, "parachoque");
  loja[3].parachoque.preco = 199.90;
  loja[3].parachoque.quantidade = 10;

  strcpy (loja[4].parachoque.nome, "parachoque");
  loja[4].parachoque.preco = 179.90;
  loja[4].parachoque.quantidade = 12;

  strcpy (loja[0].farol.nome, "farol");
  loja[0].farol.preco = 99.90;
  loja[0].farol.quantidade = 20;

  strcpy (loja[1].farol.nome, "farol");
  loja[1].farol.preco = 150.90;
  loja[1].farol.quantidade = 8;

  strcpy (loja[2].farol.nome, "farol");
  loja[2].farol.preco = 80.90;
  loja[2].farol.quantidade = 5;

  strcpy (loja[3].farol.nome, "farol");
  loja[3].farol.preco = 199.90;
  loja[3].farol.quantidade = 18;

  strcpy (loja[4].farol.nome, "farol");
  loja[4].farol.preco = 300.90;
  loja[4].farol.quantidade = 2;

  strcpy (loja[0].volante.nome, "volante");
  loja[0].volante.preco = 279.90;
  loja[0].volante.quantidade = 5;

  strcpy (loja[1].volante.nome, "volante");
  loja[1].volante.preco = 94.90;
  loja[1].volante.quantidade = 29;

  strcpy (loja[2].volante.nome, "volante");
  loja[2].volante.preco = 169.99;
  loja[2].volante.quantidade = 11;

  strcpy (loja[3].volante.nome, "volante");
  loja[3].volante.preco = 333.90;
  loja[3].volante.quantidade = 18;

  strcpy (loja[4].volante.nome, "volante");
  loja[4].volante.preco = 158.90;
  loja[4].volante.quantidade = 6;

  int index = 0;
  int repeticao = 1;
  while (repeticao == 1)
    {
      printf ("\n===MENU===\n");
      printf ("1. Lojas\n");
      printf ("2. Sair\n");

      int escolha;
      scanf ("%d", &escolha);

      switch (escolha)
	{
	case 1:
	  printf ("\n\n");
	  while (index != 5)
	    {
	      printf ("%d - ", index + 1);
	      printf ("%s\n", loja[index].nome);
	      index++;
	    }
	  index = 0;
	  printf ("Qual loja deseja acessar?\n");
	  scanf ("%d", &escolha);
	  if (escolha > 0 && escolha < 6)
	    {
	      escolha--;
	      printf ("%s\n", loja[escolha].nome);
	      printf ("%s - R$ %f (estoque %d)\n", loja[escolha].pneu.nome,
		      loja[escolha].pneu.preco,
		      loja[escolha].pneu.quantidade);
	      printf ("%s - R$ %f (estoque %d)\n", loja[escolha].cambio.nome,
		      loja[escolha].cambio.preco,
		      loja[escolha].cambio.quantidade);
	      printf ("%s - R$ %f (estoque %d)\n",
		      loja[escolha].parachoque.nome,
		      loja[escolha].parachoque.preco,
		      loja[escolha].parachoque.quantidade);
	      printf ("%s - R$ %f (estoque %d)\n", loja[escolha].farol.nome,
		      loja[escolha].farol.preco,
		      loja[escolha].farol.quantidade);
	      printf ("%s - R$ %f (estoque %d)\n", loja[escolha].volante.nome,
		      loja[escolha].volante.preco,
		      loja[escolha].volante.quantidade);

	      printf ("\n1. Fazer compra");
	      printf ("\n2. Transferir produto");
	      printf ("\n3. Adicionar produto");
	      printf ("\n4. Alterar preco");
	      printf ("\n5. Voltar para lojas");

	      int escolha2;
	      scanf ("%d", &escolha2);

	      switch (escolha2)
		{
		case 1:
		  printf ("\n1. %s - R$ %.2f (estoque %d)\n",
			  loja[escolha].pneu.nome, loja[escolha].pneu.preco,
			  loja[escolha].pneu.quantidade);
		  printf ("2. %s - R$ %.2f (estoque %d)\n",
			  loja[escolha].cambio.nome,
			  loja[escolha].cambio.preco,
			  loja[escolha].cambio.quantidade);
		  printf ("3. %s - R$ %.2f (estoque %d)\n",
			  loja[escolha].parachoque.nome,
			  loja[escolha].parachoque.preco,
			  loja[escolha].parachoque.quantidade);
		  printf ("4. %s - R$ %.2f (estoque %d)\n",
			  loja[escolha].farol.nome, loja[escolha].farol.preco,
			  loja[escolha].farol.quantidade);
		  printf ("5. %s - R$ %.2f (estoque %d)\n",
			  loja[escolha].volante.nome,
			  loja[escolha].volante.preco,
			  loja[escolha].volante.quantidade);
		  printf ("Qual item deseja comprar?\n");
		  int compra;
		  scanf ("%d", &compra);
		  printf ("\nQuantos deseja comprar?\n");
		  int qtdCompra;
		  scanf ("%d", &qtdCompra);

		  switch (compra)
		    {
		    case 1:
		      if (loja[escolha].pneu.quantidade >= qtdCompra
			  && qtdCompra > 0)
			{
			  float precoTotal =
			    loja[escolha].pneu.preco * qtdCompra;
			  printf ("\nPreco total: %.2f", precoTotal);
			  if (confirmar () == 1)
			    {
			      printf ("\nCompra confirmada!\n");
			      loja[escolha].caixa =
				loja[escolha].caixa + precoTotal;
			      loja[escolha].pneu.quantidade =
				loja[escolha].pneu.quantidade - qtdCompra;
			    }
			  else
			    {
			      printf ("\nCompra cancelada!\n");
			    }
			}
		      else
			{
			  printf ("\nDigite um valor valido!\n");
			}
		      break;

		    case 2:
		      if (loja[escolha].cambio.quantidade >= qtdCompra
			  && qtdCompra > 0)
			{
			  float precoTotal =
			    loja[escolha].cambio.preco * qtdCompra;
			  printf ("\nPreco total: %.2f", precoTotal);
			  if (confirmar () == 1)
			    {
			      printf ("\nCompra confirmada!\n");
			      loja[escolha].caixa =
				loja[escolha].caixa + precoTotal;
			      loja[escolha].cambio.quantidade =
				loja[escolha].cambio.quantidade - qtdCompra;
			    }
			  else
			    {
			      printf ("\nCompra cancelada!\n");
			    }
			}
		      else
			{
			  printf ("\nDigite um valor valido!\n");
			}
		      break;

		    case 3:
		      if (loja[escolha].parachoque.quantidade >= qtdCompra
			  && qtdCompra > 0)
			{
			  float precoTotal =
			    loja[escolha].parachoque.preco * qtdCompra;
			  printf ("\nPreco total: %.2f", precoTotal);
			  if (confirmar () == 1)
			    {
			      printf ("\nCompra confirmada!\n");
			      loja[escolha].caixa =
				loja[escolha].caixa + precoTotal;
			      loja[escolha].parachoque.quantidade =
				loja[escolha].parachoque.quantidade -
				qtdCompra;
			    }
			  else
			    {
			      printf ("\nCompra cancelada!\n");
			    }
			}
		      else
			{
			  printf ("\nDigite um valor valido!\n");
			}
		      break;

		    case 4:
		      if (loja[escolha].farol.quantidade >= qtdCompra
			  && qtdCompra > 0)
			{
			  float precoTotal =
			    loja[escolha].farol.preco * qtdCompra;
			  printf ("\nPreco total: %.2f", precoTotal);
			  if (confirmar () == 1)
			    {
			      printf ("\nCompra confirmada!\n");
			      loja[escolha].caixa =
				loja[escolha].caixa + precoTotal;
			      loja[escolha].farol.quantidade =
				loja[escolha].farol.quantidade - qtdCompra;
			    }
			  else
			    {
			      printf ("\nCompra cancelada!\n");
			    }
			}
		      else
			{
			  printf ("\nDigite um valor valido!\n");
			}
		      break;

		    case 5:
		      if (loja[escolha].volante.quantidade >= qtdCompra
			  && qtdCompra > 0)
			{
			  float precoTotal =
			    loja[escolha].volante.preco * qtdCompra;
			  printf ("\nPreco total: %.2f", precoTotal);
			  if (confirmar () == 1)
			    {
			      printf ("\nCompra confirmada!\n");
			      loja[escolha].caixa =
				loja[escolha].caixa + precoTotal;
			      loja[escolha].volante.quantidade =
				loja[escolha].volante.quantidade - qtdCompra;
			    }
			  else
			    {
			      printf ("\nCompra cancelada!\n");
			    }
			}
		      else
			{
			  printf ("\nDigite um valor valido!\n");
			}
		      break;

		    default:
		      printf ("/nDigite um numero valido!\n");
		    }		//final switch compra de produtos

		  break;

		case 2:
		  printf ("\n1 - %s (estoque %d)\n", loja[escolha].pneu.nome,
			  loja[escolha].pneu.quantidade);
		  printf ("2 - %s (estoque %d)\n", loja[escolha].cambio.nome,
			  loja[escolha].cambio.quantidade);
		  printf ("3 - %s (estoque %d)\n",
			  loja[escolha].parachoque.nome,
			  loja[escolha].parachoque.quantidade);
		  printf ("4 - %s (estoque %d)\n", loja[escolha].farol.nome,
			  loja[escolha].farol.quantidade);
		  printf ("5 - %s (estoque %d)\n", loja[escolha].volante.nome,
			  loja[escolha].volante.quantidade);

		  printf ("\nQual produto deseja transferir?\n");
		  int escolha2;
		  scanf ("%d", &escolha2);
		  printf ("Quantos deseja transferir?\n");
		  int qtdProduto;
		  scanf ("%d", &qtdProduto);
		  switch (escolha2)
		    {
		    case 1:
		      if (loja[escolha].pneu.quantidade >= qtdProduto
			  && qtdProduto > 0)
			{
			  int numeroLoja = 0;
			  while (numeroLoja != 5)
			    {
			      printf ("%d - ", numeroLoja + 1);
			      printf ("%s\n", loja[numeroLoja].nome);
			      numeroLoja++;
			    }
			  printf ("\nPara qual loja deseja transferir?\n");
			  scanf ("%d", &escolha2);
			  escolha2--;
			  if (escolha != escolha2)
			    {
			      printf
				("\nTransferir %d pneu(s) de %s para %s?\n",
				 qtdProduto, loja[escolha].nome,
				 loja[escolha2].nome);
			      if (confirmar () == 1)
				{
				  printf ("\nTransferencia confirmada!\n");
				  loja[escolha].pneu.quantidade =
				    loja[escolha].pneu.quantidade -
				    qtdProduto;
				  loja[escolha2].pneu.quantidade =
				    loja[escolha2].pneu.quantidade +
				    qtdProduto;
				}
			      else
				{
				  printf ("\nCompra cancelada!\n");
				}
			    }
			  else
			    {
			      printf ("\nDigite um valor valido!\n");
			    }
			}
		      else
			{
			  printf ("\nDigite um valor valido!\n");
			}
		      break;

		    case 2:
		      if (loja[escolha].cambio.quantidade >= qtdProduto
			  && qtdProduto > 0)
			{
			  int numeroLoja = 0;
			  while (numeroLoja != 5)
			    {
			      printf ("%d - ", numeroLoja + 1);
			      printf ("%s\n", loja[numeroLoja].nome);
			      numeroLoja++;
			    }
			  printf ("\nPara qual loja deseja transferir?\n");
			  scanf ("%d", &escolha2);
			  escolha2--;
			  if (escolha != escolha2)
			    {
			      printf
				("\nTransferir %d cambio(s) de %s para %s?\n",
				 qtdProduto, loja[escolha].nome,
				 loja[escolha2].nome);
			      if (confirmar () == 1)
				{
				  printf ("\nTransferencia confirmada!\n");
				  loja[escolha].cambio.quantidade =
				    loja[escolha].cambio.quantidade -
				    qtdProduto;
				  loja[escolha2].cambio.quantidade =
				    loja[escolha2].cambio.quantidade +
				    qtdProduto;
				}
			      else
				{
				  printf ("\nCompra cancelada!\n");
				}
			    }
			  else
			    {
			      printf ("\nDigite um valor valido!\n");
			    }
			}
		      else
			{
			  printf ("\nDigite um valor valido!\n");
			}
		      break;

		    case 3:
		      if (loja[escolha].parachoque.quantidade >= qtdProduto
			  && qtdProduto > 0)
			{
			  int numeroLoja = 0;
			  while (numeroLoja != 5)
			    {
			      printf ("%d - ", numeroLoja + 1);
			      printf ("%s\n", loja[numeroLoja].nome);
			      numeroLoja++;
			    }
			  printf ("\nPara qual loja deseja transferir?\n");
			  scanf ("%d", &escolha2);
			  escolha2--;
			  if (escolha != escolha2)
			    {
			      printf
				("\nTransferir %d parachoque(s) de %s para %s?\n",
				 qtdProduto, loja[escolha].nome,
				 loja[escolha2].nome);
			      if (confirmar () == 1)
				{
				  printf ("\nTransferencia confirmada!\n");
				  loja[escolha].parachoque.quantidade =
				    loja[escolha].parachoque.quantidade -
				    qtdProduto;
				  loja[escolha2].parachoque.quantidade =
				    loja[escolha2].parachoque.quantidade +
				    qtdProduto;
				}
			      else
				{
				  printf ("\nCompra cancelada!\n");
				}
			    }
			  else
			    {
			      printf ("\nDigite um valor valido!\n");
			    }
			}
		      else
			{
			  printf ("\nDigite um valor valido!\n");
			}
		      break;

		    case 4:
		      if (loja[escolha].farol.quantidade >= qtdProduto
			  && qtdProduto > 0)
			{
			  int numeroLoja = 0;
			  while (numeroLoja != 5)
			    {
			      printf ("%d - ", numeroLoja + 1);
			      printf ("%s\n", loja[numeroLoja].nome);
			      numeroLoja++;
			    }
			  printf ("\nPara qual loja deseja transferir?\n");
			  scanf ("%d", &escolha2);
			  escolha2--;
			  if (escolha != escolha2)
			    {
			      printf
				("\nTransferir %d farol(s) de %s para %s?\n",
				 qtdProduto, loja[escolha].nome,
				 loja[escolha2].nome);
			      if (confirmar () == 1)
				{
				  printf ("\nTransferencia confirmada!\n");
				  loja[escolha].farol.quantidade =
				    loja[escolha].farol.quantidade -
				    qtdProduto;
				  loja[escolha2].farol.quantidade =
				    loja[escolha2].farol.quantidade +
				    qtdProduto;
				}
			      else
				{
				  printf ("\nCompra cancelada!\n");
				}
			    }
			  else
			    {
			      printf ("\nDigite um valor valido!\n");
			    }
			}
		      else
			{
			  printf ("\nDigite um valor valido!\n");
			}
		      break;

		    case 5:
		      if (loja[escolha].volante.quantidade >= qtdProduto
			  && qtdProduto > 0)
			{
			  int numeroLoja = 0;
			  while (numeroLoja != 5)
			    {
			      printf ("%d - ", numeroLoja + 1);
			      printf ("%s\n", loja[numeroLoja].nome);
			      numeroLoja++;
			    }
			  printf ("\nPara qual loja deseja transferir?\n");
			  scanf ("%d", &escolha2);
			  escolha2--;
			  if (escolha != escolha2)
			    {
			      printf
				("\nTransferir %d volante(s) de %s para %s?\n",
				 qtdProduto, loja[escolha].nome,
				 loja[escolha2].nome);
			      if (confirmar () == 1)
				{
				  printf ("\nTransferencia confirmada!\n");
				  loja[escolha].volante.quantidade =
				    loja[escolha].volante.quantidade -
				    qtdProduto;
				  loja[escolha2].volante.quantidade =
				    loja[escolha2].volante.quantidade +
				    qtdProduto;
				}
			      else
				{
				  printf ("\nCompra cancelada!\n");
				}
			    }
			  else
			    {
			      printf ("\nDigite um valor valido!\n");
			    }
			}
		      else
			{
			  printf ("\nDigite um valor valido!\n");
			}
		      break;

		    default:
		      printf ("\nDigite um valor valido!\n");
		    }		//final switch transferencia de produtos
		  break;

		case 3:
		  printf ("\n1 - %s (estoque %d)\n", loja[escolha].pneu.nome,
			  loja[escolha].pneu.quantidade);
		  printf ("2 - %s (estoque %d)\n", loja[escolha].cambio.nome,
			  loja[escolha].cambio.quantidade);
		  printf ("3 - %s (estoque %d)\n",
			  loja[escolha].parachoque.nome,
			  loja[escolha].parachoque.quantidade);
		  printf ("4 - %s (estoque %d)\n", loja[escolha].farol.nome,
			  loja[escolha].farol.quantidade);
		  printf ("5 - %s (estoque %d)\n", loja[escolha].volante.nome,
			  loja[escolha].volante.quantidade);

		  printf ("\nQual produto deseja adicionar?\n");
		  int idProduto;
		  scanf ("%d", &idProduto);
		  printf ("Quantos deseja adicionar?\n");
		  int qtdProduto2;
		  scanf ("%d", &qtdProduto2);
		  if (qtdProduto > 0)
		    {
		      switch (idProduto)
			{
			case 1:
			  printf ("\nDeseja adicionar %d pneu(s)",
				  qtdProduto2);
			  if (confirmar () == 1)
			    {
			      printf ("\nAdicionado com sucesso!\n");
			      loja[escolha].pneu.quantidade =
				loja[escolha].pneu.quantidade + qtdProduto2;
			    }
			  else
			    {
			      printf ("\nAdicao de produto cancelada!\n");
			    }
			  break;

			case 2:
			  printf ("\nDeseja adicionar %d cambio(s)",
				  qtdProduto2);
			  if (confirmar () == 1)
			    {
			      printf ("\nAdicionado com sucesso!\n");
			      loja[escolha].cambio.quantidade =
				loja[escolha].cambio.quantidade + qtdProduto2;
			    }
			  else
			    {
			      printf ("\nAdicao de produto cancelada!\n");
			    }
			  break;

			case 3:
			  printf ("\nDeseja adicionar %d parachoque(s)",
				  qtdProduto2);
			  if (confirmar () == 1)
			    {
			      printf ("\nAdicionado com sucesso!\n");
			      loja[escolha].parachoque.quantidade =
				loja[escolha].parachoque.quantidade +
				qtdProduto2;
			    }
			  else
			    {
			      printf ("\nAdicao de produto cancelada!\n");
			    }
			  break;

			case 4:
			  printf ("\nDeseja adicionar %d farol(s)",
				  qtdProduto2);
			  if (confirmar () == 1)
			    {
			      printf ("\nAdicionado com sucesso!\n");
			      loja[escolha].farol.quantidade =
				loja[escolha].farol.quantidade + qtdProduto2;
			    }
			  else
			    {
			      printf ("\nAdicao de produto cancelada!\n");
			    }
			  break;

			case 5:
			  printf ("\nDeseja adicionar %d volante(s)",
				  qtdProduto2);
			  if (confirmar () == 1)
			    {
			      printf ("\nAdicionado com sucesso!\n");
			      loja[escolha].volante.quantidade =
				loja[escolha].volante.quantidade +
				qtdProduto2;
			    }
			  else
			    {
			      printf ("\nAdicao de produto cancelada!\n");
			    }
			  break;
			}	//final switch adicionar produto
		    }
		  else
		    {
		      printf ("\nValor invalido!\n");
		    }
		  break;	// final adicionar produto

		case 4:
		  printf ("\n1 - %s (estoque %.2f)\n",
			  loja[escolha].pneu.nome, loja[escolha].pneu.preco);
		  printf ("2 - %s (estoque %.2f)\n",
			  loja[escolha].cambio.nome,
			  loja[escolha].cambio.preco);
		  printf ("3 - %s (estoque %.2f)\n",
			  loja[escolha].parachoque.nome,
			  loja[escolha].parachoque.preco);
		  printf ("4 - %s (estoque %.2f)\n", loja[escolha].farol.nome,
			  loja[escolha].farol.preco);
		  printf ("5 - %s (estoque %.2f)\n",
			  loja[escolha].volante.nome,
			  loja[escolha].volante.preco);

		  printf ("\nQual produto deseja alterar o preco?\n");
		  int idProduto2;
		  scanf ("%d", &idProduto2);
		  printf ("Para qual preco deseja alterar?\n");
		  float novoPreco;
		  scanf ("%f", &novoPreco);

		  if (novoPreco > 1.0)
		    {
		      switch (idProduto2)
			{
			case 1:
			  if (novoPreco != loja[escolha].pneu.preco)
			    {
			      printf
				("\nMudar preco do pneu de %.2f para %.2f?",
				 loja[escolha].pneu.preco, novoPreco);
			      if (confirmar () == 1)
				{
				  printf ("\nPreco alterado com sucesso!\n");
				  loja[escolha].pneu.preco = novoPreco;
				}
			      else
				{
				  printf
				    ("\nAlteracao de preco cancelada!\n");
				}
			    }
			  else
			    {
			      printf ("\nValor invalido!\n");
			    }
			  break;

			case 2:
			  if (novoPreco != loja[escolha].cambio.preco)
			    {
			      printf
				("\nMudar preco do cambio de %.2f para %.2f?",
				 loja[escolha].cambio.preco, novoPreco);
			      if (confirmar () == 1)
				{
				  printf ("\nPreco alterado com sucesso!\n");
				  loja[escolha].cambio.preco = novoPreco;
				}
			      else
				{
				  printf
				    ("\nAlteracao de preco cancelada!\n");
				}
			    }
			  else
			    {
			      printf ("\nValor invalido!\n");
			    }
			  break;

			case 3:
			  if (novoPreco != loja[escolha].parachoque.preco)
			    {
			      printf
				("\nMudar preco do parachoque de %.2f para %.2f?",
				 loja[escolha].parachoque.preco, novoPreco);
			      if (confirmar () == 1)
				{
				  printf ("\nPreco alterado com sucesso!\n");
				  loja[escolha].parachoque.preco = novoPreco;
				}
			      else
				{
				  printf
				    ("\nAlteracao de preco cancelada!\n");
				}
			    }
			  else
			    {
			      printf ("\nValor invalido!\n");
			    }
			  break;

			case 4:
			  if (novoPreco != loja[escolha].farol.preco)
			    {
			      printf
				("\nMudar preco do farol de %.2f para %.2f?",
				 loja[escolha].farol.preco, novoPreco);
			      if (confirmar () == 1)
				{
				  printf ("\nPreco alterado com sucesso!\n");
				  loja[escolha].farol.preco = novoPreco;
				}
			      else
				{
				  printf
				    ("\nAlteracao de preco cancelada!\n");
				}
			    }
			  else
			    {
			      printf ("\nValor invalido!\n");
			    }
			  break;

			case 5:
			  if (novoPreco != loja[escolha].volante.preco)
			    {
			      printf
				("\nMudar preco do volante de %.2f para %.2f?",
				 loja[escolha].volante.preco, novoPreco);
			      if (confirmar () == 1)
				{
				  printf ("\nPreco alterado com sucesso!\n");
				  loja[escolha].volante.preco = novoPreco;
				}
			      else
				{
				  printf
				    ("\nAlteracao de preco cancelada!\n");
				}
			    }
			  else
			    {
			      printf ("\nValor invalido!\n");
			    }
			  break;

			default:
			  printf ("\nDigite um numero valido\n");
			}
		    }
		  break;	//final alterar preco

		case 5:
		  repeticao = 0;
		  break;

		default:
		  printf ("\nDigite um numero valido\n");
		}

	    }
	  break;

	case 2:
	  repeticao = 0;
	  break;

	default:
	  printf ("\nDigite um numero valido\n");
	}
    }

  return 0;
}

int
menuLoja ()
{
  printf ("\n1. Fazer compra");
  printf ("\n2. Transferir produto");
  printf ("\n3. Adicionar produto");
  printf ("\n4. Alterar preco");
  printf ("\n5. Voltar para lojas\n");

  int escolha;
  scanf ("%d", &escolha);

  return escolha;
}

int
confirmar ()
{
  printf ("\n1 . Confirmar");
  printf ("\n2 . Cancelar\n");
  int confirma;
  scanf ("%d", &confirma);

  return confirma;
}
