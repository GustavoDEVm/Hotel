// TRI - Rec 1 a 6
//Isadora Castelo Branco 
//Felipe Mendes
//Gustavo Macedo 
//Daniel Um 

#include <iostream>

void limparBuffer(); 

//programa principal:
int main()
{
	
	//variaveis:
    char tab[20][14]; //declarar a tabela
    int l, c; 
    int opcao; //declarar menu de opcoes
    
    //gerador de tabela:
    for (l = 20; l >= 1; l--)
        for (c = 1; c <= 14; c++)
            tab[l][c] = '.';
    
    do // inciar looping do menu de opcoes
    
    {
    	
        //menu de opcoes:
        printf("*----------------------------*\n");
    	printf("|       Hotel Paradise       |\n");
    	printf("*----------------------------*\n");
    	
        printf("Digite a opcao desejada:\n");
        printf("\n1 - Mostrar os quartos disponiveis \n");
        printf("2 - Realizar uma reserva \n");
        printf("3 - Realizar Check-In com reserva \n");
        printf("4 - Realizar Check-in sem reserva \n");
        printf("5 - Realizar Check-Out \n");
        printf("6 - Cancelar Reserva \n");
        printf("0 - Encerrar Programa\n");
        
        printf("\nOpcao escolhida foi: ");
        scanf("%d", &opcao); //Armazenar a opcao escolhida pelo gerente 
        system("cls");
    
        switch(opcao) //swtich para alternar as funcionalidades de acordo com o numero escolhido no menu
        
        {
        	
            case 1: //Mostrar quartos disponiveis
            	
            { 
                printf ("Quarto ->\t");
                
                
                for (c = 1; c <= 14; c++)
                    printf(" %2d  ", c);
                    
                printf ("\n\n");
            
                for (l = 20; l >= 1; l--)
                
                {   
                
                    printf ("Andar%2d ->    \t", l); //numero da linha
                    
                    for (c = 1; c <= 14; c++)
                        printf ("  %c  ", tab[l][c]);
                        
                    printf ("\n");    
                    
                }
                
                printf ("Pressione Enter para voltar ao menu.\n"); //Enter retorna ao menu para selecionar uma nova opcao
                
                limparBuffer (); 
                
                getchar ();  // Aguarda o usuario pressionar Enter
                
                system ("cls"); //limpa a tela
                
                    break; //impedir que o programa execute os outros cases do switch
                
            }   
            
            case 2: //Realizar uma reserva 
            	
            {
            	
               printf ("Quarto ->\t");
                
                
                for (c = 1; c <= 14; c++)
                    printf(" %2d  ", c);
                    
                printf ("\n\n");
            
                for (l = 20; l >= 1; l--)
                
                {   
                
                   printf ("Andar%2d ->    \t", l); //numero da linha
                    
                    for (c = 1; c <= 14; c++)
                        printf ("  %c  ", tab[l][c]);
                        
                    printf ("\n");    
                }
                        
                printf ("Digite o andar desejado, ou 0 para voltar: ");
                scanf ("%d", &l);

                if (l == 0)
                
                {
                	
                    continue;
                    
                }

                if (l < 0 || l > 20) //caso o andar seja invalido
                
                {
                	
                    system ("cls"); //limpa a tela
                    
                    printf ("\nAndar invalido.\n");
                    
                        continue;
                        
                }

                printf ("Digite o quarto: ");
                scanf ("%d", &c);
                
                if (c < 0 || c > 14) //caso o apartamento seja invalido
                
                {
                	
                    system ("cls");
                    
                    printf ("\nQuarto invalido \n");
                    
                        continue;    
                    
                }   
        
                if (tab[l][c] == 'R')
                
                {
                	
                    system ("cls"); //limpar a tela do windows
                    
                    printf ("\nQuarto ja ocupado, tente novamente.\n\n"); //Informar que o quarto ja esta ocupado
                    
                        continue;
                        
                }
                
                if (tab[l][c] == 'C')
                
                {
                	
                    system ("cls");
                    
                    printf ("\n Quarto desejado ja reservado, selecione outro quarto \n\n"); //Informar que o quarto esta reservado
                    
                    continue;
                }
                
                else 
                
                    system("cls");
                    
                    tab[l][c] = 'R'; //Indicar uma nova reserva e realizar a alteracao no mapa
                
                printf ("Reserva realizada no quarto %d, andar %d\n", l, c );
                
                break;
            }
            
            case 3:
            	
            {
               printf ("Quarto ->\t");
                
                
                for (c = 1; c <= 14; c++)
                    printf(" %2d  ", c);
                    
                printf ("\n\n");
            
                for (l = 20; l >= 1; l--)
                
                {   
                
                    printf ("Andar%2d ->    \t", l); //numero da linha
                    
                    for (c = 1; c <= 14; c++)
                        printf ("  %c  ", tab[l][c]);
                        
                    printf ("\n");    
					 
                }
            
                printf ("Escolha um quarto para realizar Check In\n"); //Solicitar andar e quarto desejado para o check-in

                printf ("Digite o andar desejado, ou 0 para voltar): ");
                scanf ("%d", &l);

                if (l == 0)
                
                {
                	
                    continue;
                    
                }
                
                if (l < 0 || l > 20) //caso o andar seja invalido
                
                {
                	
                    system ("cls"); //limpa a tela
                    
                    printf ("\nAndar invalido.\n");
                    
                        continue;
                    
                }

                printf ("Digite o quarto desejado: ");
                scanf ("%d", &c);
                
                if (c < 0 || c > 14) //caso o apartamento seja invalido
                
                {
                	
                    system("cls");
                    
                    printf("\nQuarto invalido \n");
                    
                        continue;    
                        
                }   

                if (tab[l][c] == '.')
                
                {
                	
                    system ("cls");
                    
                    printf ("\nEsse quarto esta disponivel\n");
                    
                        continue;
                        
                }
                
                if (tab[l][c] == 'O')
                
                {
                	
                    system ("cls");
                    
                    printf ("\nJa fizeram Check In, tente novamente.\n\n");
                    
                        continue;
                    
                }

                if (tab[l][c] != 'O')
                
                {
                	
                    system ("cls");
                    
                    tab[l][c] = 'O';
                    
                    printf ("Check In realizado no quarto %d, andar %d", l,c);
                    
                        break;
                        
                }
                
            }
                
            case 4:
            	
            {   
            
               printf ("Quarto ->\t");
                
                
                for (c = 1; c <= 14; c++)
                    printf(" %2d  ", c);
                    
                printf ("\n\n");
            
                for (l = 20; l >= 1; l--)
                
                {   
                
                    printf ("Andar%2d ->    \t", l); //numero da linha
                    
                    for (c = 1; c <= 14; c++)
                        printf ("  %c  ", tab[l][c]);
                        
                    printf ("\n");    
					   
                }
                
                printf ("Voce escolheu a opcao de fazer check-in sem reserva\n");

                printf ("Digite o andar desejado, ou 0 para voltar: ");
                scanf ("%d", &l);

                if (l == 0)
                
                {
                	
                    continue;
                    
                }

                if (l < 0 || l > 20) //caso o andar seja invalido
                
                {
                	
                    system ("cls"); //limpa a tela
                    
                    printf ("\nAndar invalido \n");
                    
                        continue;
                        
                }

                printf ("Digite o quarto desejado: ");
                scanf ("%d", &c);
                
                if (c < 0 || c > 14) //caso o apartamento seja invalido
                
                {
                	
                    system ("cls");
                    
                    printf ("\nQuarto invalido\n");
                    
                        continue;  
					  
                }   
                
                if (tab[l][c] == 'O' || tab[l][c] == 'R')
                
                {
                	
                	system ("cls");
                	
                	printf ("Nao foi possivel fazer o Check In, este quarto ja esta reservado\n");
                	
                	    continue;
                	    
				}
                
                system ("cls");
                
                tab[l][c] = 'O';
                
                printf ("Check In realizado no quarto %d, andar %d", l,c);
                
                    break;
        
            }
        
            case 5:
            	
            {
            	
                printf ("Opcao escolhida foi efetuar Check-out\n ");
                
                printf ("Quarto ->\t");
                
                
                for (c = 1; c <= 14; c++)
                    printf(" %2d  ", c);
                    
                printf ("\n\n");
            
                for (l = 20; l >= 1; l--)
                
                {   
                
                   printf ("Andar%2d ->    \t", l); //numero da linha
                    
                    for (c = 1; c <= 14; c++)
                        printf ("  %c  ", tab[l][c]);
                        
                    printf ("\n");    
					 
                }
            
                printf ("Digite o andar: ");
                scanf ("%d", &l);

                if (l < 0 || l > 20) //caso o andar seja invalido
                
                {
                	
                    printf ("\nAndar invalido.\n");
                        
                        continue;
                    
                }
        
                printf ("Digite o quarto desejado: ");
                scanf ("%d", &c);
                
                if (c < 0 || c > 14) //caso o apartamento seja invalido
                
                {
                	
                    system ("cls");
                    
                    printf ("\nQuarto invalido \n");
                    
                        continue;   
						 
                }
                    
                if (tab[l][c] == 'C')
                
                {
                	
                    system ("cls");
                    
                    printf ("Check In cancelado \n");
                    
                    tab[l][c] = '.';
                    
                }
                
                else
                
                {
                	
                    system ("cls");
                    
                    printf ("\nEste quarto nao tem Check In \n");
                    
                        continue;
                        
                }
                
                continue;
                
            }
            
            case 6:
            	
            {
                printf ("Opcao escolhida foi cancelar reserva\n");
                
               printf ("Quarto ->\t");
                
                
                for (c = 1; c <= 14; c++)
                    printf(" %2d  ", c);
                    
                printf ("\n\n");
            
                for (l = 20; l >= 1; l--)
                
                {   
                
                    printf ("Andar%2d ->    \t", l); //numero da linha
                    
                    for (c = 1; c <= 14; c++)
                        printf ("  %c  ", tab[l][c]);
                        
                    printf ("\n");    
					   
                }
            
                printf ("Digite o andar: ");
                scanf ("%d", &l);


                if (l < 0 || l > 20) //caso o andar seja invalido
                
                {
                	
                    printf ("\nAndar invalido\n");
                        
						continue;
						
                }

                printf ("Digite o Quarto desejado: ");
                scanf ("%d", &c);
                
                if (c < 0 || c > 14) //caso o apartamento seja invalido
                
                {
                	
                    system ("cls");
                    
                    printf ("\nQuarto invalido \n");
                    
                        continue;    
                    
                }
                    
                if (tab[l][c] == 'R')
                
                {
                	
                    system ("cls");
                    
                    printf ("Reserva cancelada \n");
                    
                    tab[l][c] = '.';
                    
                }
                
                else
                
                {
                	
                    system("cls");
                    
                    printf("\nEste quarto nao tem reserva \n");
                    
                        continue;
                        
                }
                
                continue;
                
            }
            
            case 0:
            	
            {
            	
                printf ("Atendimento finalizado");
                
                    break;
                
            }
            
            default:
            	
            {
            	
                printf ("Opcao invalida, Tente novamente \n");
                
            }
            
        }
        
        printf ("\n");
    
    } 
	
	while (opcao != 0);
    
        return 0;
        
}

void limparBuffer() //Funcao para descartar caracteres adicionais do Buffer e viabilizar a leitura de dados

{
	
    char C;
    while ((C = getchar()) != '\n' && C != EOF) {}
    
}
