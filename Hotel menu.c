#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char email[50];   
    int contato, duracao, pessoas;
    float valor;
} Hotel;

Hotel serv[10];
int numHotel = 0;

void fazerCheck();
void solicitarServ();
void fazerPed();

int main() {
    int opcao;

    do {
        printf("------Bem vindo ao hotel Bytecode-------\n");
        printf("Escolha uma opção:\n");
        printf("1. Fazer check-in\n");
        printf("2. Solicitar serviço\n");
        printf("3. Fazer pedido\n");
        printf("0. Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                fazerCheck();
                break;
            case 2:
                solicitarServ();
                break;
            case 3:
                fazerPed();
                break;
            case 0:
                printf("Obrigado !!\n");
                break;
            default:
                printf("Opção Inválida!\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}

void fazerCheck() {
    if (numHotel >= 20) {
        printf("Limite de hóspedes atingido!\n");
    }
    Hotel h;

    printf("Digite seu email (sem espaços): \n");
    scanf("%s", h.email);

    printf("Digite seu telefone (apenas números): \n");
    scanf("%d", &h.contato);

    printf("Quantos dias deseja ficar? \n");
    scanf("%d", &h.duracao);

    printf("Quantas pessoas irão se hospedar? \n");
    scanf("%d", &h.pessoas);

    if (h.pessoas <= 5) {
        h.valor = h.duracao * 350;
        printf("Quarto Básico. Valor total: R$ %.2f\n", h.valor);
    } else {
        h.valor = h.duracao * 350 + 100;
        printf("Quarto Complexo com adicional de R$ 100. Valor total: R$ %.2f\n", h.valor);
    }

    numHotel++;

    printf("Check-in realizado com sucesso!\n");
    printf("Pressione Enter para continuar...");
    getchar(); getchar();
    system("clear");
}

void solicitarServ() {
    int opcao, quarto;

    printf("Selecione o serviço:\n");
    printf("1. Camareira\n");
    printf("2. Lavanderia\n");
    printf("3. Equipamento de escritório\n");
    printf("4. Spa\n");
    printf("5. Limpeza extra\n");
    scanf("%d", &opcao);

    printf("Informe o número do quarto: \n");
    scanf("%d", &quarto);

    switch(opcao) {
        case 1:
            printf("Serviço de Camareira solicitado para o quarto %d\n", quarto);
            break;
        case 2:
            printf("Serviço de Lavanderia solicitado para o quarto %d\n", quarto);
            break;
        case 3:
            printf("Equipamento de escritório solicitado para o quarto %d\n", quarto);
            break;
        case 4:
            printf("Sessão no Spa solicitada para o quarto %d\n", quarto);
            break;
        case 5:
            printf("Limpeza extra solicitada para o quarto %d\n", quarto);
            break;
        default:
            printf("Opção inválida!\n");
    }
    printf("Pressione Enter para continuar...");
    getchar(); getchar();
    system("clear");
}

void fazerPed() {
    int opcao, quarto;
    char salg[50], ref[50], lanc[50], doce[50], suc[50];
    printf("Selecione seu pedido:\n");
    printf("1. Salgados: Coxinha R$ 5,00 - Pastel de Carne R$ 4,50 - Empada de Frango R$ 4,00 - Kibe - R$ 3,50 \n");
    printf("2. Refrigerantes: Coca-Cola (350ml) R$ 4,00 - Guaraná Antarctica (350ml) R$ 4,00 - Fanta Laranja (350ml) R$ 4,00 - Sprite (350ml) R$ 4,00 \n");
    printf("3. Lanches: X-Salada R$ 12,00 - X-Bacon R$ 14,00 - Misto Quente R$ 8,00 - Sanduíche Natural R$ 10,00 \n");
    printf("4. Sucos: Suco de Laranja (300ml) - Suco de Maracujá (300ml) - Suco de Morango (300ml) - Suco de Abacaxi (300ml) - Todos R$ 6,00 \n");
    printf("5. Doces: Brigadeiro R$ 2,50 - Bolo de Chocolate R$ 4,50 - Pudim R$ 5,00 - Bolo de Cenoura R$ 4,00 \n");
    scanf("%d", &opcao);

    printf("Número do quarto: \n");
    scanf("%d", &quarto);

    switch(opcao) {
        case 1:
            printf("Qual(is) salgado(s)? \n");
            scanf ("%s", salg);
            printf("Pedido de salgados para o quarto %d recebido.\n", quarto);
            break;
        case 2:
            printf("Qual(is) refrigerante(s)? \n");
            scanf ("%s", ref);
            printf("Pedido de refrigerantes para o quarto %d recebido.\n", quarto);
            break;
        case 3:
            printf("Qual(is) lanche(s)? \n");
            scanf ("%s", lanc);
            printf("Pedido de lanches para o quarto %d recebido.\n", quarto);
            break;
        case 4:
            printf("Qual(is) suco(s)? \n");
            scanf ("%s", suc);
            printf("Pedido de sucos para o quarto %d recebido.\n", quarto);
            break;
        case 5:
            printf("Qual(is) doce(s)? \n");
            scanf ("%s", doce);
            printf("Pedido de doces para o quarto %d recebido.\n", quarto);
            break;
        default:
            printf("Opção inválida!\n");
    }
    printf("Chegara em até 10 minutos!\n");
    printf("Pressione Enter para continuar...");
    getchar(); getchar();
    system("clear");
}
