#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    float val, val2;
    int doc, contat, durac, opcao, serv, numquart, numlav, limpex, card, quarts, quartr, quartsu, quartd, quartl, pes;
    char spa[20], email[20], formpag[20], equipesc[20], salg[20], ref[20], lanc[20], suc[20], doce[20]; //Ponteiro
    printf("Bem vindo ao hotel Bytecode, escolha a uma opção:\n");
    printf("1. Fazer check-in \n");
    printf("2. Solicitar serviço \n");
    printf("3. Fazer pedido \n");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1:
        printf("Adicione seu email \n");
        scanf("%s", email);
        printf("Adicione um contato para comunicação \n");
        scanf("%d", &contat);
        printf("Quanto tempo de hospedagem você deseja? \n");
        scanf("%d", &durac);
        printf("Quantas pessoas irão se hospedar? \n");
        scanf("%d", &pes);
        val = durac * 350;
        val2 = (durac * 350) + 100;
        if (pes <= 5){
            printf("O seu quarto será o Quarto Basico, o valor total da hospedagem será %.2f \n", val);
        }
        else {
            printf("O seu quarto é o Quarto Complex, com adicional de 100 reais, o valor total da hospedagem será %.2f \n", val2);
        }
        printf("Qual sera a forma de pagamento? \n" );
        scanf("%s", formpag);
        printf ("Seu cadastro foi feito com sucesso. Voce pode pagar a hospedagem na recepção, muito obrigado pela preferencia! \n");
        break; 
        case 2:
            printf("Selecione a opção de serviço \n");
            printf("1. Camareira \n");
            printf("2. Lavanderia \n");
            printf("3. Equipamentos de escritório \n");
            printf("4. Spa \n");
            printf("5. Limpeza extra \n");
            scanf("%d", &serv);
            switch (serv) {
                case 1:
                printf("Informe o numero do seu quarto \n");
                scanf ("%d", &numquart);
                printf("Esta marcado! \n");
                break;
                case 2:
                printf("Informe o numero do seu quarto \n");
                scanf("%d", &numlav);
                printf("Esta marcado! \n");
                break;
                case 3:
                printf("Informe qual equipamento você necessita \n");
                scanf("%s", equipesc);
                printf("Esta marcado! \n" );
                break;
                case 4:
                printf("Informe o horario que você quer marcar sua sessão \n");
                scanf ("%s", spa);
                printf("Esta marcado! \n");
                break;
                case 5:
                printf("Informe numero do seu quarto \n");
                scanf("%d", &limpex);
                printf("Esta marcado! \n");
                break;
                default:
                    printf ("ERRO, volte ao inicio \n" );
                return 0;
            }
        break;
        case 3:
            printf("Selecione seu pedido \n");
            printf("1. Salgados: Coxinha R$ 5,00 - Pastel de Carne R$ 4,50 - Empada de Frango R$ 4,00 - Kibe - R$ 3,50 \n");
            printf("2. Refrigerantes: Coca-Cola (350ml) R$ 4,00 - Guaraná Antarctica (350ml) R$ 4,00 - Fanta Laranja (350ml) R$ 4,00 - Sprite (350ml) R$ 4,00 \n");
            printf("3. Lanches: X-Salada R$ 12,00 - X-Bacon R$ 14,00 - Misto Quente R$ 8,00 - Sanduíche Natural R$ 10,00 \n");
            printf("4. Sucos: Suco de Laranja (300ml) - Suco de Maracujá (300ml) - Suco de Morango (300ml) - Suco de Abacaxi (300ml) - Todos R$ 6,00 \n");
            printf("5. Doces: Brigadeiro R$ 2,50 - Bolo de Chocolate R$ 4,50 - Pudim R$ 5,00 - Bolo de Cenoura R$ 4,00 \n");
            scanf("%d", &card);
            switch (card) {
                case 1:
                printf("Qual numero do seu quarto? \n");
                scanf ("%d", &quarts);
                printf("Qual salgado? \n");
                scanf ("%s", salg);
                printf("Chegará no seu quarto em 10 minutos!");
                break;
                case 2:
                printf("Qual numero do seu quarto? \n");
                scanf ("%d", &quartr);
                printf("Qual refrigerante? \n");
                scanf("%s", ref);
                printf("Chegará no seu quarto em 10 minutos!");
                break;
                case 3:
                printf("Qual numero do seu quarto? \n");
                scanf ("%d", &quartl);
                printf("Qual lanche? \n");
                scanf("%s", lanc);
                printf("Chegará no seu quarto em 10 minutos!");
                break;
                case 4:
                printf("Qual numero do seu quarto? \n");
                scanf ("%d", &quartsu);
                printf("Qual suco? \n");
                scanf ("%s", suc);
                printf("Chegará no seu quarto em 10 minutos!");
                break;
                case 5:
                printf("Qual numero do seu quarto? \n");
                scanf ("%d", &quartd);
                printf("Qual doce? \n");
                scanf("%s", doce);
                printf("Chegará no seu quarto em 10 minutos!");
                break;
                default:
                    printf ("ERRO, volte ao inicio \n" );
                return 0;
                
            }
        default:
        return 0;
    }
    
return 0; 
}