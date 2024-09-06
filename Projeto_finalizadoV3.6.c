#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<time.h>
#include<math.h>
#include<windows.h>


int main()


{
    setlocale(LC_ALL, "Portuguese");  // ADICIONA O IDIOMA PORTUGUES AO PROGRAMA

    int vagas_disponiveis=20, forma_pagamento, encerrar_sistema, erro_senha, vagas_atualizadas, infos_controle_saida, infos_controle_entrada;
    int menu_entrada=1, opcao_menu, infos_corretas_saida, infos_corretas_entrada;
    int num_vaga_entrada, num_vaga_saida; // vetores de entrada e saida
    int tabela_invalida, cpf_incorreto, vaga_ocupada[20], indice_veiculo[20];
    char tipo_veiculo, veiculo_selecionado[50], pagamento_por[10], vaga_ocupada_char[20]= "                    ";
    char botao_iniciar, modelo_carro[50], placa_veiculo[100], senha[15], login[20], cpf[20];
    float taxa_estacionamento, valor_total, valor_total1, taxa_por_vaga[20];
    float hora_perm_int, valor_perm_int, dinheiro_pago, troco, faltou_dinheiro;
    int hora_entrada[21], hora_saida[21], opcao_cpf_invalida;
    char veiculo_saida[50];
    int tipo_veiculo_int;
    int continuar_pagamento;
    int hora_dividida_entrada, minutos_divida_entrada, deseja_cpf;
    int hora_dividida_saida, minutos_dividida_saida, minutos_faltam, hora_perm, pagamento_concluido;
    char tipo_veiculo_char, num_vaga_entrada_char[5], num_vaga_saida_char[5], hora_entrada_char[5], minutos_entrada_char[5], hora_saida_char[5], minutos_saida_char[5];
    int tipo_veiculo_vaga[20];
    char valor_total_char[10], hora_transformada_char[10], minutos_faltam_char[10];
    char data_char[3], mes_char[3], ano_char[5];
    int horas_comprovante_saida[20], minutos_comprovante_saida[20];
    char minutos_comprovante_saida_char[5], horas_comprovante_saida_char[5];


    FILE*arq1;

    FILE*arq2;

    login: // COMANDO GO TO PARA QUADO SAIR DO SISTEMA, VOLTAR AQUI

    printf("    __| |_____________________________________________________________________________________| |__\n");
    printf("    __   _____________________________________________________________________________________   __\n");
    printf("      | |                                                                                     | |\n");
    printf("      | |                ________      ___       __       ________                            | |\n");
    printf("      | |               |\\   ____\\    |\\  \\     |\\  \\    |\\   __  \\                           | |\n");
    printf("      | |               \\ \\  \\___|    \\ \\  \\    \\ \\  \\   \\ \\  \\|\\ /_                          | |\n");
    printf("      | |                \\ \\  \\        \\ \\  \\  __\\ \\  \\   \\ \\   __  \\                         | |\n");
    printf("      | |                 \\ \\  \\____    \\ \\  \\|\\__\\_\\  \\   \\ \\  \\|\\  \\                        | |\n");
    printf("      | |                  \\ \\_______\\   \\ \\____________\\   \\ \\_______\\                       | |\n");
    printf("      | |                   \\|_______|    \\|____________|    \\|_______|                       | |\n");
    printf("      | |                                                                                     | |\n");
    printf("      | |                                                                                     | |\n");
    printf("      | |                                                                                     | |\n");
    printf("      | |                ________    ________      ________      ___  __                      | |\n");
    printf("      | |               |\\   __  \\  |\\   __  \\    |\\   __  \\    |\\  \\|\\  \\                    | |\n");
    printf("      | |               \\ \\  \\|\\  \\ \\ \\  \\|\\  \\   \\ \\  \\|\\  \\   \\ \\  \\/  /|_                  | |\n");
    printf("      | |                \\ \\   ____\\ \\ \\   __  \\   \\ \\   _  _\\   \\ \\   ___  \\                 | |\n");
    printf("      | |                 \\ \\  \\___|  \\ \\  \\ \\  \\   \\ \\  \\\\  \\|   \\ \\  \\\\ \\  \\                | |\n");
    printf("      | |                  \\ \\__\\      \\ \\__\\ \\__\\   \\ \\__\\\\ _\\    \\ \\__\\\\ \\__\\               | |\n");
    printf("      | |                   \\|__|       \\|__|\\|__|    \\|__|\\|__|    \\|__| \\|__|               | |\n");
    printf("      | |                                                                                     | |\n");
    printf("      | |                                                                                     | |\n");
    printf("      | |                        Pressione ENTER para iniciar o sistema.                      | |\n"); // ABRE O SISTEMA
    printf("      | |                                                                                     | |\n");
    printf("    __| |_____________________________________________________________________________________| |__\n");
    printf("    __   _____________________________________________________________________________________   __\n");
    printf("      | |                                                                                     | |\n");



    scanf("%c", &botao_iniciar);
    system("cls");

    fflush(stdin);
    logar:

    printf("    __| |_____________________________________________________________________________________| |__\n");
    printf("    __   _____________________________________________________________________________________   __\n");
    printf("      | |                                                                                     | |\n");
    printf("      | |                ________      ___       __       ________                            | |\n");
    printf("      | |               |\\   ____\\    |\\  \\     |\\  \\    |\\   __  \\                           | |\n");
    printf("      | |               \\ \\  \\___|    \\ \\  \\    \\ \\  \\   \\ \\  \\|\\ /_                          | |\n");
    printf("      | |                \\ \\  \\        \\ \\  \\  __\\ \\  \\   \\ \\   __  \\                         | |\n");
    printf("      | |                 \\ \\  \\____    \\ \\  \\|\\__\\_\\  \\   \\ \\  \\|\\  \\                        | |\n");
    printf("      | |                  \\ \\_______\\   \\ \\____________\\   \\ \\_______\\                       | |\n");
    printf("      | |                   \\|_______|    \\|____________|    \\|_______|                       | |\n");
    printf("      | |                                                                                     | |\n");
    printf("      | |                                                                                     | |\n");
    printf("      | |                                                                                     | |\n");
    printf("      | |                ________    ________      ________      ___  __                      | |\n");
    printf("      | |               |\\   __  \\  |\\   __  \\    |\\   __  \\    |\\  \\|\\  \\                    | |\n");
    printf("      | |               \\ \\  \\|\\  \\ \\ \\  \\|\\  \\   \\ \\  \\|\\  \\   \\ \\  \\/  /|_                  | |\n");
    printf("      | |                \\ \\   ____\\ \\ \\   __  \\   \\ \\   _  _\\   \\ \\   ___  \\                 | |\n");
    printf("      | |                 \\ \\  \\___|  \\ \\  \\ \\  \\   \\ \\  \\\\  \\|   \\ \\  \\\\ \\  \\                | |\n");
    printf("      | |                  \\ \\__\\      \\ \\__\\ \\__\\   \\ \\__\\\\ _\\    \\ \\__\\\\ \\__\\               | |\n");
    printf("      | |                   \\|__|       \\|__|\\|__|    \\|__|\\|__|    \\|__| \\|__|               | |\n");
    printf("      | |                                                                                     | |\n");
    printf("      | |                                                                                     | |\n");
    printf("      | |                                                                                     | |\n");
    printf("    __| |_____________________________________________________________________________________| |__\n");
    printf("    __   _____________________________________________________________________________________   __\n");
    printf("      | |                                                                                     | |\n");

     time_t segundos;
    struct tm *data_atual;


    do {  // inicia o loop de login

    printf("                           Login: ");
    scanf("%s", &login);
    system("cls");
    printf("    __| |_____________________________________________________________________________________| |__\n");
    printf("    __   _____________________________________________________________________________________   __\n");
    printf("      | |                                                                                     | |\n");
    printf("      | |                ________      ___       __       ________                            | |\n");
    printf("      | |               |\\   ____\\    |\\  \\     |\\  \\    |\\   __  \\                           | |\n");
    printf("      | |               \\ \\  \\___|    \\ \\  \\    \\ \\  \\   \\ \\  \\|\\ /_                          | |\n");
    printf("      | |                \\ \\  \\        \\ \\  \\  __\\ \\  \\   \\ \\   __  \\                         | |\n");
    printf("      | |                 \\ \\  \\____    \\ \\  \\|\\__\\_\\  \\   \\ \\  \\|\\  \\                        | |\n");
    printf("      | |                  \\ \\_______\\   \\ \\____________\\   \\ \\_______\\                       | |\n");
    printf("      | |                   \\|_______|    \\|____________|    \\|_______|                       | |\n");
    printf("      | |                                                                                     | |\n");
    printf("      | |                                                                                     | |\n");
    printf("      | |                                                                                     | |\n");
    printf("      | |                ________    ________      ________      ___  __                      | |\n");
    printf("      | |               |\\   __  \\  |\\   __  \\    |\\   __  \\    |\\  \\|\\  \\                    | |\n");
    printf("      | |               \\ \\  \\|\\  \\ \\ \\  \\|\\  \\   \\ \\  \\|\\  \\   \\ \\  \\/  /|_                  | |\n");
    printf("      | |                \\ \\   ____\\ \\ \\   __  \\   \\ \\   _  _\\   \\ \\   ___  \\                 | |\n");
    printf("      | |                 \\ \\  \\___|  \\ \\  \\ \\  \\   \\ \\  \\\\  \\|   \\ \\  \\\\ \\  \\                | |\n");
    printf("      | |                  \\ \\__\\      \\ \\__\\ \\__\\   \\ \\__\\\\ _\\    \\ \\__\\\\ \\__\\               | |\n");
    printf("      | |                   \\|__|       \\|__|\\|__|    \\|__|\\|__|    \\|__| \\|__|               | |\n");
    printf("      | |                                                                                     | |\n");
    printf("      | |                                                                                     | |\n");
    printf("      | |                                                                                     | |\n");
    printf("    __| |_____________________________________________________________________________________| |__\n");
    printf("    __   _____________________________________________________________________________________   __\n");
    printf("      | |                                                                                     | |\n");
    printf("                           Login: %s                Senha: ", login);
    scanf("%s", &senha);
    system("cls");

    if ((strcmp (senha, "123")==0)){
            erro_senha=0;  // ATRIBUI UM VALOR QUE VAI ENCERRAR O LOOP DE LOGIN, ASSIM DIZENDO QUE A SENHA ESTA CORRETA
    }

    else {
            erro_senha=1; // ATRIBUI UM VALOR QUE VAI REPETIR O LOOP DE LOGIN, ASSIM DIZENDO QUE A SENHA ESTA ERRADA
        printf("                                           Senha incorreta. Tente novamente. \n");
        printf("\n");
        system("\n \n \n \n \n \n \n \n \n \n pause");
        system("cls");
                goto logar;

    }
        } while (erro_senha==1);  // EXECUTA O LOOP "ENQUANTO" PARA REPETIR A TELA DE LOGIN CASO SENHA INCORRETA.

        fflush(stdin);

     do {
            pagina_principal:

            printf("====================================================================================== \n");

            // MOSTRA A QUANTIDADE DE VAGAS DISPONVEIS E O USUARIO QUE ESTA REGISTRANDO
            printf(" Vagas disponíveis: %i                                             Usuário: %s \n", vagas_disponiveis, login);
            printf("\n");
                printf("1 - Entrada de veículo \n");
                printf("2 - Saída de veículo \n");
                printf("3 - Consultar vagas \n");
                printf("4 - Sair do sistema \n");
                printf("\n");
                printf("Selecione a opção desejada: ");
                scanf("%i", &opcao_menu);
                fflush(stdin);
                system("cls");

        switch (opcao_menu){

            case 1:

                if (vagas_disponiveis<=0){  // SE AS VAGAS CHEGAREM A 0, NAO SERA POSSIVEL ENTRADA DE MAIS VEICULOS
                    printf("No momento, não há vagas disponíveis. \n \n");
                    system("pause");
                    system("cls");

                    break;  // ENCERRA O CASO VOLTANDO PARA O MENU DE ESCOLHA

                }

                        do {  // faz loop na tabela enquanto a opcao for invalida

                            do {


                printf("--------------------------------------------- \n");
                printf("|       Veículo         |   Preço/hora (R$) | \n");
                printf("--------------------------------------------- \n");
                printf("| 1 - Carro             |     R$ 5,00       | \n") ;
                printf("| 2 - Carro elétrico    |     R$ 6,50       | \n") ;
                printf("| 3 - Moto              |     R$ 3,50       | \n") ;
                printf("| 4 - Veículos maiores  |     R$ 7,50       | \n") ;
                printf("| 5 - Voltar                                | \n");
                printf("--------------------------------------------- \n");


                printf("\n");
                printf("Selecione o tipo de veículo: ");
                scanf("%c", &tipo_veiculo);

                system("cls");

                    switch (tipo_veiculo)
                    {
                        case '1':
                            printf("-------- Entrada de veículo [CARRO] -------- \n");
                            strcpy(veiculo_selecionado, "CARRO");
                            tipo_veiculo_int=1;
                            taxa_estacionamento=5;
                            tabela_invalida=0;
                            break;

                        case '2':
                            printf("-------- Entrada de veículo [CARRO ELÉTRICO]  -------- \n");
                            strcpy(veiculo_selecionado, "CARRO ELÉTRICO");
                            tipo_veiculo_int=2;
                            taxa_estacionamento=6.5;
                            tabela_invalida=0;
                            break;

                        case '3':
                            printf("-------- Entrada de veículo [MOTO]  -------- \n");
                            strcpy(veiculo_selecionado, "MOTO");
                            tipo_veiculo_int=3;
                            taxa_estacionamento=3.5;
                            tabela_invalida=0;
                            break;

                        case '4':
                            printf("-------- Entrada de veículo [VEÍCULOS MAIORES]  -------- \n");
                            strcpy(veiculo_selecionado, "VEÍCULOS MAIORES");
                            taxa_estacionamento=7.5;
                            tipo_veiculo_int=4;
                            tabela_invalida=0;
                            break;

                        case '5':
                            goto pagina_principal;
                            system("cls");
                            break;


                        default:
                            printf("Opção inválida. Tente novamente. \n");
                            system("pause");
                            system("cls");
                            tabela_invalida=1;

                    }
                            }while (tabela_invalida==1); // ENQUANTO A OPCAO DA TABELA FOR INVALIDA


                    encerrar_sistema=0;

                printf("\n");
                printf("Informe a placa do veículo: ");
                fflush(stdin);
                scanf("%[^\n]s", &placa_veiculo);
                fflush(stdin);  // LIBERA A MEMORIA PARA PODER DIGITAR NOVAS INFORMACOES COM CARACTERE
                printf("\n");
                printf("Informe o modelo do veículo: ");
                scanf("%[^\n]s", &modelo_carro);
                fflush(stdin);
                printf("\n");
                do{
                printf("Informe o número da vaga: ");
                scanf("%i", &num_vaga_entrada);
                    if (num_vaga_entrada<=0 || num_vaga_entrada>20) // SE VAGA SELECIONADA - 0 FICA LOOPANDO ATE SER VALIDA
                    {
                        printf("\n");
                        printf("Vaga inexistente. Tente novamente. \n");
                        printf("\n");
                        system("pause");
                        system("cls");

                printf("-------- Entrada de veículo [%s] -------- \n", veiculo_selecionado);

                printf("\n");
                printf("Informe a placa do veículo: %s \n", placa_veiculo);
                printf("\n");
                printf("Informe o modelo do veículo: %s \n", modelo_carro);
                printf("\n");
                    }

                    if(vaga_ocupada[num_vaga_entrada]==1)
                        {
                            printf("Vaga Ocupada. \n");
                            printf("\n");
                            system("pause");
                            system("cls");
                             printf("-------- Entrada de veículo [%s] -------- \n", veiculo_selecionado);

                            printf("\n");
                            printf("Informe a placa do veículo: %s \n", placa_veiculo);
                            printf("\n");
                            printf("Informe o modelo do veículo: %s \n", modelo_carro);
                            printf("\n");
                            num_vaga_entrada=-1;
                        }

                    }while(num_vaga_entrada<=0 || num_vaga_entrada>20);
                printf("\n");


                printf("Informe o horário de entrada (formato 24 H): ");
                scanf("%d:%d", &hora_dividida_entrada, &minutos_divida_entrada); // RECEBE DUAS VARIAVEIS SEPARADAS, HORAS E MINUTOS EM DOIS LOCAIS DIFERENTES

                horas_comprovante_saida[num_vaga_entrada] = hora_dividida_entrada;
                minutos_comprovante_saida[num_vaga_entrada] = minutos_divida_entrada;


                    hora_entrada[num_vaga_entrada] = (hora_dividida_entrada*60) + minutos_divida_entrada;  // CALCULA A QUANTIDADE TOTAL DE HORAS EM MINUTOS, TENDO A QUANTIDADE DE MINUTOS EM QUE A PESSOA ENTROU
                    fflush(stdin);

                taxa_por_vaga[num_vaga_entrada]=taxa_estacionamento;

                system("cls");


                // Exibir horário atual
                time(&segundos);
                data_atual = localtime(&segundos);

                sprintf(num_vaga_entrada_char, "%d", num_vaga_entrada);
                sprintf(hora_entrada_char, "%d", hora_dividida_entrada);
                sprintf(minutos_entrada_char, "%.2d", minutos_divida_entrada);
                sprintf(data_char, "%.2d", data_atual->tm_mday);
                sprintf(mes_char, "%.2d", data_atual->tm_mon+1);
                sprintf(ano_char, "%.2d", data_atual->tm_year+1900);



                printf("-------- Entrada de veículo [%s] -------- \n", veiculo_selecionado);
                printf("\n");
                printf("- Placa do veiculo: %s \n", placa_veiculo);
                printf("- Modelo do veiculo: %s \n", modelo_carro);
                printf("- Número da vaga: %i \n", num_vaga_entrada);
                printf("- Horario de Entrada: %d:", hora_dividida_entrada);
                printf("%.2d \n", minutos_divida_entrada);
                printf("\n");
                printf("As informações estão corretas? (1 - SIM  /  2 - NÃO) \n"); // verifica se as informacoes estao corretas para poder imprimir o ticket
                scanf("%i", &infos_corretas_entrada);
                fflush(stdin);
                system("cls");



                if (infos_corretas_entrada==1){  // se infos corretas entradas for verdade, entao exibe abaixo

                        infos_controle_entrada=1;



                        arq1 = fopen("ticket_entrada_clientes.txt", "a");

                        // IMPRIME O TICKET DO ESTACIONAMENTO
                        printf("==========================================\n");
                        printf("                   CWB PARK              \n");
                        printf("==========================================\n");
                        printf("Tipo de veículo.............. %s \n", veiculo_selecionado);
                        printf("Placa do veiculo............. %s\n", placa_veiculo);
                        printf("Modelo do veiculo............ %s\n", modelo_carro);
                        printf("Número da vaga............... %i\n", num_vaga_entrada);
                        printf("Horário de entrada........... %d:", hora_dividida_entrada);
                        printf("%.2d \n", minutos_divida_entrada);
                        printf("Data ........................ %.2d/", data_atual -> tm_mday);
                        printf("%.2d/", data_atual -> tm_mon+1);
                        printf("%d \n", data_atual -> tm_year+1900);
                        printf("==========================================\n");
                        printf("Em caso de perda, será cobrado o valor \n");
                        printf("         referente a diária. \n");
                        printf("Comprovante emitido por: %s \n", login);
                        printf("==========================================\n");



                        fputs("==========================================\n", arq1);
                        fputs("                   CWB PARK              \n", arq1);
                        fputs("==========================================\n", arq1);
                        fputs("Tipo de veículo.............. ", arq1);
                        fputs(veiculo_selecionado, arq1);
                        fputs("\n", arq1);
                        fputs("Placa do veiculo............. ", arq1);
                        fputs(placa_veiculo, arq1);
                        fputs("\n", arq1);
                        fputs("Modelo do veiculo............ ", arq1);
                        fputs(modelo_carro, arq1);
                        fputs("\n", arq1);
                        fputs("Número da vaga............... ", arq1);
                        fputs(num_vaga_entrada_char, arq1);
                        fputs("\n", arq1);
                        fputs("Horário de entrada........... ", arq1);
                        fputs(hora_entrada_char, arq1);
                        fputs(":", arq1);
                        fputs(minutos_entrada_char, arq1);
                        fputs("\n", arq1);
                        fputs("Data ........................ ", arq1);
                        fputs(data_char, arq1);
                        fputs("/", arq1);
                        fputs(mes_char, arq1);
                        fputs("/", arq1);
                        fputs(ano_char, arq1);
                        fputs("\n", arq1);
                        fputs("==========================================\n", arq1);
                        fputs("Em caso de perda, será cobrado o valor \n", arq1);
                        fputs("         referente a diária. \n", arq1);
                        fputs("Comprovante emitido por: ", arq1);
                        fputs(login, arq1);
                        fputs("\n", arq1);
                        fputs("==========================================\n", arq1);
                        fputs("\n", arq1);
                        fputs("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx \n", arq1);
                        fputs("\n", arq1);

                        fclose(arq1);




                            vaga_ocupada[num_vaga_entrada]=1;

                            indice_veiculo[num_vaga_entrada]=tipo_veiculo_int;

                            vaga_ocupada_char[num_vaga_entrada-1] = 'X';

                            tipo_veiculo_vaga[num_vaga_entrada] = tipo_veiculo;

                        system("pause");
                        system("cls");

                vagas_disponiveis=vagas_disponiveis-1;  // DIMINUI UMA VAGA A CADA ACAO DE ENTRADA DOS VEICULOS
                vagas_atualizadas=vagas_disponiveis;   // MANTEM NA MEMORIA O NUMERO DE VAGAS SE O CASO ESCOLHIDO FOR OUTRO

                }

                else {  // se nao for verdade, exibe isso
                        printf("vamos corrigir então. \n");
                        printf("\n");
                        infos_controle_entrada=0; // e faz voltar nas perguntas sobre o veiculo:
                        system("pause");
                        system("cls");
                }

        } while (infos_controle_entrada==0);  // enquanto infos controle estiver desligado, ou seja, for errado fica no loop

                break;

            case 2:
                encerrar_sistema=0;

                if (vagas_disponiveis>=20){  // SE AS VAGAS ESTIVEREM EM 20, NAO SERA POSSIVEL A SAIDA DE VEICULOS POIS NAO TERA O QUE SAIR
                    printf("Não há veículos estacionados no momento");
                    printf("\n");
                    system("pause");
                    system("cls");

                    break;  // ENCERRA O CASO VOLTADO PARA O MENU DE ESCOLHA
                }

                    do{

                printf("-------- Saída de veículo -------- \n");
                printf("\n");
                printf("Informe a placa do veículo: ");
                scanf("%[^\n]s", &placa_veiculo);
                fflush(stdin);  // LIBERA A MEMORIA PARA PODER DIGITAR NOVAS INFORMACOES COM CARACTERE
                printf("\n");
                printf("Informe o modelo do veículo: ");
                scanf("%[^\n]s", &modelo_carro);
                fflush(stdin);
                printf("\n");
                 do{
                printf("Informe o número da vaga: ");
                scanf("%i", &num_vaga_saida);


                    if (num_vaga_saida<=0 || num_vaga_saida>20) // SE VAGA SELECIONADA - 0 FICA LOOPANDO ATE SER VALIDA
                    {
                        printf("Vaga inexistente. Tente novamente. \n");
                        printf("\n");
                        system("pause");
                        system("cls");
                printf("-------- Saída de veículo -------- \n");

                printf("\n");
                printf("Informe a placa do veículo: %s \n", placa_veiculo);
                printf("\n");
                printf("Informe o modelo do veículo: %s \n", modelo_carro);
                printf("\n");
                num_vaga_saida=-1;
                    }

                    if(vaga_ocupada[num_vaga_saida]!=1 && num_vaga_saida>0 && num_vaga_saida<21)
                        {
                            printf("Não há veículos nessa vaga. \n");
                            printf("\n");
                            system("pause");
                            system("cls");
                            printf("-------- Saída de veículo -------- \n");

                            printf("\n");
                            printf("Informe a placa do veículo: %s \n", placa_veiculo);
                            printf("\n");
                            printf("Informe o modelo do veículo: %s \n", modelo_carro);
                            printf("\n");
                            num_vaga_saida=-1;
                        }

                    }while(num_vaga_saida<0);

                printf("\n");
                printf("Informe o horário de saída (formato 24H): ");
                scanf("%d:%d", &hora_dividida_saida, &minutos_dividida_saida);


                    hora_saida[num_vaga_saida] = (hora_dividida_saida*60) + minutos_dividida_saida;
                    fflush(stdin);


                system("cls");

                printf("-------- Saída de veículo -------- \n \n");
                printf("- Placa do veiculo: %s \n", placa_veiculo);
                printf("- Modelo do veiculo: %s \n", modelo_carro);
                printf("- Numero da vaga: %i \n", num_vaga_saida);
                printf("- Horario de Saída: %d:", hora_dividida_saida);
                printf("%.2d \n", minutos_dividida_saida);
                printf("\n");
                printf("As informações estão corretas? (1 - SIM  /  2 - NÃO) \n"); // verifica se as informacoes estao corretas para poder imprimir o ticket
                scanf("%i", &infos_corretas_saida);
                fflush(stdin);
                system("cls");

                if (infos_corretas_saida==1){


                        // CALCULA O TEMPO DE PERMANENCIA NO ESTACIONAMENTO

                       hora_perm = hora_saida[num_vaga_saida] - hora_entrada[num_vaga_saida];   // CALCULA A HORA TOTAL EM MINUTOS!!
                       hora_perm_int = hora_perm / 60;  // TRANSFORMA OS MINUTOS DE PERMANENCIA EM HORAS
                       int hora_tranformada_int = hora_perm_int;  // TRANSFORMA VALORES QUEBRADOS EM VALORES INTEIROS
                       minutos_faltam = hora_perm - (hora_tranformada_int * 60) ;  // CALCULA OS MINUTOS QUE FALTAM DO VALOR TOTAL DE MINUTOS


                       float taxa_dividida = taxa_por_vaga[num_vaga_saida]/4;  // DIVIDE O VALOR DA TAXA EM 4 PARTES DE 15 MINUTOS
                       valor_perm_int = hora_perm / 15;  // DIVIDE OS MINUTOS TOTAIS PARA VER QUANTAS PARTES DE 15 MINUTOS VAO EXISTIR
                       int valor_transformado_int = valor_perm_int;  // TRANSFORMA A QUANTIDADE DE 15 MINUTOS EM UM VALOR INTEIRO (EX 5 PARTES DE 15 MINUTOS AO INVES DE 5,25 PARTES)
                       float diferenca_valor = hora_perm - (valor_transformado_int * 15) ;  // CALCULA QUAL A DIFERENÇA QUE VAI PRECISAR SER FEITA COM BASE NOS MINUTOS DE PERMANENCIA TOTAL

                            if (diferenca_valor == 0 && hora_perm >=15)  // SE OS MINUTOS DEREM RESTO 0, SIGNIFICA QUE NAO TEM MINUTOS QUEBRADOS, ENTAO VAI SER COBRADO PERIODO FECHADO DE 15 MIN
                            {
                                valor_total = taxa_dividida * valor_perm_int;
                            }

                            else if (diferenca_valor != 0 && hora_perm >=15) // SE O RESTO FOR MAIOR DE 0 ENTAO TEM QUE ADICIONAR MAIS UM "PERIODO" DE 15 MINUTOS PARA O CALCULO POIS A PESSOA NAO FECHOU MAIS UM CICLO DE 15 MIN, MAS PASSOU DE UM CICLO
                            {
                                valor_transformado_int = valor_transformado_int + 1;
                                valor_total = taxa_dividida * valor_transformado_int;
                            }

                            else
                            {
                                valor_total = 0; // CASO SEJA OS PRIMEIROS 15 MINUTOS, VAI SER O VALOR ZERADO POIS OS 15 INICIAIS SAO GARTIS
                            }

                        valor_total1=valor_total;

                        do{  // REPETE O LOOP DE PEDIR O CPF CASO A OPCAO SEJA INVÁLIDA

                        printf("Deseja CPF na nota? (1 - SIM) (2 - NAO) ");
                        scanf("%i", &deseja_cpf);

                                switch (deseja_cpf)
                                {
                                    case 1:
                                        do{
                                            printf("Informe o CPF: ");
                                            scanf("%s", &cpf);
                                            Sleep(1000);
                                            system("cls");

                                            printf("CPF: %s \n \n", cpf);
                                            printf("O CPF está correto? (1 - SIM) (2 - NÃO)");
                                            scanf("%i", &cpf_incorreto);
                                            opcao_cpf_invalida=2;
                                            system("cls");

                                                if (cpf_incorreto==1)
                                                    {
                                                    cpf_incorreto==1;
                                                    }

                                                else if (cpf_incorreto==2)
                                                {
                                                    cpf_incorreto==2;
                                                }

                                                else
                                                {
                                                    printf("Opção inválida. Tente novamente. \n");
                                                    system("pause");
                                                    system("cls");
                                                    cpf_incorreto==2;
                                                }

                                        }while(cpf_incorreto==2);
                                            break;

                                    case 2:
                                        strcpy(cpf, "CPF não informado");  // ATRIBUI CONSUMIDOR NAO IDENTIFICADO PARA A VARIAVEL CPF ATRAVES DA BIBLIOTECA STRING.H
                                        opcao_cpf_invalida=2;
                                        break;

                                    default:
                                        printf("Opção inválida. Tente novamente. \n");
                                        printf("\n");
                                        system("pause");
                                        system("cls");
                                        opcao_cpf_invalida=1;
                                }
                        }while(opcao_cpf_invalida==1);


            system("cls");
            menu_pagamentos:
                do{
            printf("Total....................: R$ %.2f \n", valor_total);
            printf("\n");




            printf(" ------------------------- \n");
            printf("|    FORMA DE PAGAMENTO   | \n");
            printf("| 1 - PIX                 | \n");
            printf("| 2 - DINHEIRO            | \n");
            printf("| 3 - CARTÃO DE DÉBITO    | \n");
            printf("| 4 - CARTÃO DE CRÉDITO   | \n");
            printf(" ------------------------- \n");
            printf("\n");
            printf("Selecione a forma de pagamento: ");
            scanf("%i", &forma_pagamento);
            system("cls");


            switch (forma_pagamento)
            {
                case 1:
                    strcpy(pagamento_por, "PIX");
                    printf("    Pagamento: PIX  \n");
                    printf("\n");
                    printf("Pressione 1 para continuar ou 2 para voltar.. ");
                    scanf("%i", &continuar_pagamento);
                    printf("\n");

                    if (continuar_pagamento==1)
                    {

                    }

                    else
                    {
                        system("cls");
                        goto menu_pagamentos;

                    }
                    printf("\n");
                    printf("Total....................: R$ %.2f \n", valor_total);
                    printf("\n");
                    printf("Carregando chave pix... \n");
                    Sleep(1500); // ESPERA 3 SEGUNDOS ANTES DE ABRIR A IMAGEM

                    system("C:\ProgramData\Microsoft\Windows\Start Menu\Programs\CodeBlocks");

                    printf("\n");
                    printf("Pagamento aprovado! \n");
                    pagamento_concluido=1;
                    printf("\n");
                    system("pause");
                    system("cls");

                    break;

                case 2:
                    strcpy(pagamento_por, "DINHEIRO");
                    printf("    Pagamento: DINHEIRO  \n");
                   printf("\n");
                    printf("Pressione 1 para continuar ou 2 para voltar.. ");
                    scanf("%i", &continuar_pagamento);
                    printf("\n");

                    if (continuar_pagamento==1)
                    {

                    }

                    else
                    {
                        system("cls");
                        goto menu_pagamentos;

                    }
                    printf("Total....................: R$ %.2f \n", valor_total);
                    printf("\n");
                    printf("Valor pago...............: R$ ");
                    scanf("%f", &dinheiro_pago);

                        if (dinheiro_pago>=valor_total)
                        {
                            troco = dinheiro_pago - valor_total;
                            system("cls");
                            printf("Troco....................: R$ %.2f \n", troco);
                            printf("\n \n \n");
                            pagamento_concluido=1;

                            valor_total=valor_total1;


                            system("pause");
                            system("cls");
                        }

                        else if (dinheiro_pago<valor_total)
                        {
                            faltou_dinheiro = valor_total - dinheiro_pago;
                            printf("\n");
                            printf("Faltam: R$ %.2f", faltou_dinheiro);
                            printf("\n");
                            valor_total=faltou_dinheiro;
                            pagamento_concluido=0;
                            system("pause");
                            system("cls");
                        }
                        break;

                case 3:
                    strcpy(pagamento_por, "DÉBITO");
                    printf("    Pagamento: DÉBITO  \n");
                    printf("\n");
                    printf("Pressione 1 para continuar ou 2 para voltar.. ");
                    scanf("%i", &continuar_pagamento);
                    printf("\n");

                    if (continuar_pagamento==1)
                    {

                    }

                    else
                    {
                        system("cls");
                        goto menu_pagamentos;

                    }
                    printf("Total....................: R$ %.2f \n", valor_total);
                    printf("\n");
                    printf("Aproxime ou insira o cartão... \n");
                    printf("\n");
                    Sleep(3000);
                    printf("Transação aprovada! \n");
                    pagamento_concluido=1;
                    printf("\n");
                    system("pause");
                    system("cls");

                    break;

                case 4:
                    strcpy(pagamento_por, "CRÉDITO");
                    printf("    Pagamento: CRÉDITO  \n");
                    printf("\n");
                    printf("Pressione 1 para continuar ou 2 para voltar.. ");
                    scanf("%i", &continuar_pagamento);
                    printf("\n");

                    if (continuar_pagamento==1)
                    {

                    }

                    else
                    {
                        system("cls");
                        goto menu_pagamentos;

                    }
                    printf("Total....................: R$ %.2f \n", valor_total);
                    printf("\n");
                    printf("Aproxime ou insira o cartão... \n");
                    printf("\n");
                    Sleep(3000);
                    printf("Transação aprovada! \n");
                    pagamento_concluido=1;
                    printf("\n");
                    system("pause");
                    system("cls");

                    break;

                default:
                    printf("Opção inválida. Tente novamente. \n");
                    printf("\n");
                    system("pause");
                    system("cls");
                    pagamento_concluido=0;
                    break;
            }

                    }while(pagamento_concluido==0);

                    if (indice_veiculo[num_vaga_saida] == 1)
                    {
                        strcpy(veiculo_saida, "CARRO");

                    }

                    else if (indice_veiculo[num_vaga_saida] == 2)
                    {
                        strcpy(veiculo_saida, "CARRO ELÉTRICO");
                    }

                    else if (indice_veiculo[num_vaga_saida] == 3)
                    {
                        strcpy(veiculo_saida, "MOTO");
                    }

                    else if (indice_veiculo[num_vaga_saida] == 4)
                    {
                        strcpy(veiculo_saida, "VEÍCULOS MAIORES");
                    }


                        sprintf(num_vaga_saida_char, "%d", num_vaga_saida);
                        sprintf(hora_saida_char, "%d", hora_dividida_saida);
                        sprintf(minutos_saida_char, "%.2d", minutos_dividida_saida);
                        sprintf(hora_transformada_char, "%d", hora_tranformada_int);
                        sprintf(minutos_faltam_char, "%.2d", minutos_faltam);
                        sprintf(valor_total_char, "%.2f", valor_total);
                        sprintf(data_char, "%.2d", data_atual->tm_mday);
                        sprintf(mes_char, "%.2d", data_atual->tm_mon+1);
                        sprintf(ano_char, "%.2d", data_atual->tm_year+1900);
                        sprintf(horas_comprovante_saida_char, "%.2d", horas_comprovante_saida[num_vaga_saida]);
                        sprintf(minutos_comprovante_saida_char, "%.2d", minutos_comprovante_saida[num_vaga_saida]);


                        // IMPRIME O TICKET DE SAIDA

                        arq2 = fopen("ticket_saida_clientes.txt", "a");



                            printf("=================================================\n");
                            printf("                    CWB PARK              \n");
                            printf("=================================================\n");
                            printf("Tipo de veículo.......... %s \n", veiculo_saida);
                            printf("Placa do veículo......... %s\n", placa_veiculo);
                            printf("Modelo do veículo........ %s\n", modelo_carro);
                            printf("Número da vaga........... %i\n", num_vaga_saida);
                            printf("Horário de entrada....... %d:", horas_comprovante_saida[num_vaga_saida]);
                            printf("%.2d \n", minutos_comprovante_saida[num_vaga_saida]);
                            printf("Horário de saída......... %d:", hora_dividida_saida);
                            printf("%.2d \n", minutos_dividida_saida);
                            printf("Tempo de utilização...... %i horas e %i minutos \n", hora_tranformada_int, minutos_faltam);
                            printf("CPF...................... %s \n", cpf);
                            printf("Valor a ser pago......... R$ %.2f \n", valor_total1);
                            printf("Pagamento via............ %s \n", pagamento_por);
                            printf("Data .................... %.2d/", data_atual->tm_mday);
                            printf("%.2d/", data_atual->tm_mon + 1);
                            printf("%d \n", data_atual->tm_year + 1900);
                            printf("=================================================\n");
                            printf("                 VOLTE SEMPRE! \n");
                            printf("       Comprovante emitido por: %s \n", login);
                            printf("=================================================\n");



                            fputs("=================================================\n", arq2);
                            fputs("                     CWB PARK              \n", arq2);
                            fputs("=================================================\n", arq2);
                            fputs("Tipo de veículo.............. ", arq2);
                            fputs(veiculo_saida, arq2);
                            fputs("\n", arq2);
                            fputs("Placa do veículo............. ", arq2);
                            fputs(placa_veiculo, arq2);
                            fputs("\n", arq2);
                            fputs("Modelo do veículo............ ", arq2);
                            fputs(modelo_carro, arq2);
                            fputs("\n", arq2);
                            fputs("Número da vaga............... ", arq2);
                            fprintf(arq2, num_vaga_saida_char, arq2);
                            fputs("\n", arq2);
                            fputs("Horário de entrada........... ", arq2);
                            fputs(horas_comprovante_saida_char, arq2);
                            fputs(":", arq2);
                            fputs(minutos_comprovante_saida_char, arq2);
                            fputs("\n", arq2);
                            fputs("Horário de saída............. ", arq2);
                            fputs(hora_saida_char, arq2);
                            fputs(":", arq2);
                            fputs(minutos_saida_char, arq2);
                            fputs("\n", arq2);
                            fputs("Tempo de utilização.......... ", arq2);
                            fputs(hora_transformada_char, arq2);
                            fputs(" horas e ", arq2);
                            fputs(minutos_faltam_char, arq2);
                            fputs(" minutos", arq2);
                            fputs("\n", arq2);
                            fputs("CPF.......................... ", arq2);
                            fputs(cpf, arq2);
                            fputs("\n", arq2);
                            fputs("Valor a ser Pago............. R$ " , arq2);
                            fputs(valor_total_char, arq2);
                            fputs("\n", arq2);
                            fputs("Pagamento via................ ", arq2);
                            fputs(pagamento_por, arq2);
                            fputs("\n", arq2);
                            fputs("Data ........................ ", arq2);
                            fputs(data_char, arq2);
                            fputs("/", arq2);
                            fputs(mes_char, arq2);
                            fputs("/", arq2);
                            fputs(ano_char, arq2);
                            fputs("\n", arq2);
                            fputs("=================================================\n", arq2);
                            fputs("                  VOLTE SEMPRE! \n", arq2);
                            fputs("         Comprovante emitido por: ", arq2 );
                            fputs(login, arq2);
                            fputs("\n", arq2);
                            fputs("=================================================\n", arq2);
                            fputs("\n", arq2);
                            fputs("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx \n", arq2);
                            fputs("\n", arq2);

                            fclose(arq2);




                vagas_disponiveis=vagas_disponiveis+1;  // AUMENTA UMA VAGA A CADA ACAO DE SAIDA DE VEICULOS
                vagas_atualizadas=vagas_disponiveis; // MANTEM NA MEMORIA O NUMERO DE VAGAS SE O CASO ESCOLHIDO FOR OUTRO

                infos_controle_saida=1;

            vaga_ocupada_char[num_vaga_saida-1] = ' ';   // REMOVE STATUS DE VAGA OCUPADA


            vaga_ocupada[num_vaga_saida]=0;


                system("pause");
                system("cls");

                }

                else {

                    system("pause");
                    system("cls");
                    goto pagina_principal;
                    infos_controle_saida=0;
                }

            } while (infos_controle_saida==0);


                break;

            case 3:

                printf(">>===========================================================================================<<\n");
                printf("||                                                                                           ||\n");
                printf("||  __  __   __  __   __  __   __  __   __  __   __  __   __  __   __  __   __  __   __  __  ||\n");
                printf("|| | _||_ | | _||_ | | _||_ | | _||_ | | _||_ | | _||_ | | _||_ | | _||_ | | _||_ | | _||_ | ||\n");
                printf("|| | |01| | | |02| | | |03| | | |04| | | |05| | | |06| | | |07| | | |08| | | |09| | | |10| | ||\n");
                printf("|| | |  | | | |  | | | |  | | | |  | | | |  | | | |  | | | |  | | | |  | | | |  | | | |  | | ||\n");
                printf("|| | |%c%c| | | |%c%c| | | |%c%c| | | |%c%c| | | |%c%c| | | |%c%c| | | |%c%c| | | |%c%c| | | |%c%c| | | |%c%c| | ||\n", vaga_ocupada_char[0], vaga_ocupada_char[0], vaga_ocupada_char[1], vaga_ocupada_char[1],vaga_ocupada_char[2],vaga_ocupada_char[2],vaga_ocupada_char[3],vaga_ocupada_char[3],vaga_ocupada_char[4],vaga_ocupada_char[4],vaga_ocupada_char[5],vaga_ocupada_char[5],vaga_ocupada_char[6],vaga_ocupada_char[6],vaga_ocupada_char[7],vaga_ocupada_char[7],vaga_ocupada_char[8],vaga_ocupada_char[8],vaga_ocupada_char[9],vaga_ocupada_char[9]);
                printf("|| |__||__| |__||__| |__||__| |__||__| |__||__| |__||__| |__||__| |__||__| |__||__| |__||__| ||\n");
                printf("||                                                                                           ||\n");
                printf("||                                                                                           ||\n");
                printf("||  __  __   __  __   __  __   __  __   __  __   __  __   __  __   __  __   __  __   __  __  ||\n");
                printf("|| | _||_ | | _||_ | | _||_ | | _||_ | | _||_ | | _||_ | | _||_ | | _||_ | | _||_ | | _||_ | ||\n");
                printf("|| | |11| | | |12| | | |13| | | |14| | | |15| | | |16| | | |17| | | |18| | | |19| | | |20| | ||\n");
                printf("|| | |  | | | |  | | | |  | | | |  | | | |  | | | |  | | | |  | | | |  | | | |  | | | |  | | ||\n");
                printf("|| | |%c%c| | | |%c%c| | | |%c%c| | | |%c%c| | | |%c%c| | | |%c%c| | | |%c%c| | | |%c%c| | | |%c%c| | | |%c%c| | ||\n", vaga_ocupada_char[10], vaga_ocupada_char[10], vaga_ocupada_char[11], vaga_ocupada_char[11],vaga_ocupada_char[12],vaga_ocupada_char[12],vaga_ocupada_char[13],vaga_ocupada_char[13],vaga_ocupada_char[14],vaga_ocupada_char[14],vaga_ocupada_char[15],vaga_ocupada_char[15],vaga_ocupada_char[16],vaga_ocupada_char[16],vaga_ocupada_char[17],vaga_ocupada_char[17],vaga_ocupada_char[18],vaga_ocupada_char[18],vaga_ocupada_char[19],vaga_ocupada_char[19]);
                printf("|| |__||__| |__||__| |__||__| |__||__| |__||__| |__||__| |__||__| |__||__| |__||__| |__||__| ||\n");
                printf("||                                                                                           ||\n");
                printf(">>===========================================================================================<<\n");
                printf("\n");
                printf(" Vagas disponíveis: %i\n", vagas_disponiveis);
                printf("\n");


                system("pause");
                system("cls");
                goto pagina_principal;
                break;


            case 4:

                encerrar_sistema=1;  // ATRIBUI A FUNCAO ENCCERRAR COMO "LIGADO"


                    break;

            default:
                printf("Opção inválida. Tente novamento. \n");
                system("pause");
                system("cls");
                encerrar_sistema=0;

        }

        opcao_menu=0; // DEIXA A FUNCAO DO MENU ZERADA PARA QUE POSSA SER FEITO UMA NOVA ESCOLHA DE SAIDA OU ENTRADA DE VEICULOS
        valor_total=0;
        deseja_cpf=0;


        }while (encerrar_sistema==0);  // EXECUTA O MENU DE ENTRADA E SAIDA DOS CARROS "ENQUANTO" O SISTEMA NAO RECEBER O COMANDO ENCERRAR COMO LIGADO=1



    goto login;



    return 0;

}





