#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char marca[30], modelo[30], cor[30];
	float valor;
	int id, ano, comb;
} Carro;

Carro carros[10];

int numCarros = 0;

void registrarCarros();
void listarCarros();
void filtrarporComb();
void buscarCarro();

int main()
{
	int opcao;
	
	do {
	    printf("***** Cadastro *****\n");
		printf("1 - Cadastrar Veiculo\n");
		printf("2 - Listar Veiculos\n");
		printf("3 - Filtrar por tipo de combustivel\n");
	    printf("4 - Buscar veiculo\n");
	    printf("0 - Sair\n");
		printf("Selecione uma opção: ");
		scanf("%d", &opcao);

		switch(opcao) {
		case 1:
		    registrarCarros();
			break;
		case 2:
            listarCarros();
			break;
		case 3:
		    filtrarporComb();
			break;
		case 4:
            buscarCarro();
		    break;
		case 0:
			printf("Obrigado !!");
			break;
		default:
			printf("Opcao Invalida !\n");
			break;
		}
	} while(opcao != 0);

	return 0;
}

void registrarCarros() {
	printf("---Nova Venda---\n");
	printf("Nome da Marca: ");
	scanf("%s", carros[numCarros].marca);
	printf("Modelo do Carro: ");
	scanf("%s", carros[numCarros].modelo);
	printf("Ano do Carro: ");
	scanf("%d", &carros[numCarros].ano);
	printf("Cor: ");
	scanf("%s", carros[numCarros].cor);
	printf("Id de registro: ");
	scanf("%d", &carros[numCarros].id);
	printf("Valor : ");
	scanf("%f", &carros[numCarros].valor);
	printf("***** Tipo Combustivel *****\n");
	printf("\n1 - Etanol\n 2 - Gasolina\n 3 - Flex\n 4 - Elétrico\n");
	scanf("%d", &carros[numCarros].comb);
	numCarros++;
    printf ("\n Enter para continuar");
    getchar (); 
    getchar (); 
    system("clear");
}

void listarCarros() {
	printf("----- Carros Cadastrados -----\n");
    for(int i = 0; i < numCarros; i++) {
        printf("Marca : %s\n", carros[i].marca);
        printf("Modelo : %s\n", carros[i].modelo);
        printf("Ano : %d\n", carros[i].ano);
        printf("Cor: %s\n", carros[i].cor);
        printf("Valor : %f\n", carros[i].valor);
        printf("Combustivel : %d", carros[i].comb);
        printf("\n-----------------------------\n");
        printf ("\n Enter para continuar");
        getchar (); 
        getchar (); 
        system("clear");
    }
}

void filtrarporComb() {
    int comb;
    printf("-----Carros por combustivel-----\n");
    printf("Deseja filtrar por qual combustivel ? : \n");
    scanf("%d", &comb);
    for(int i = 0; i < numCarros; i++) {
        if (carros[i].comb == comb){
            printf("ID : %d\n", carros[i].id);
            printf("Marca : %s\n", carros[i].marca);
            printf("Modelo : %s\n", carros[i].modelo);
            printf("Ano : %d\n", carros[i].ano);
            printf("Cor: %s\n", carros[i].cor);
            printf("Valor : %.2f\n", carros[i].valor);
            printf("Combustivel : %d", carros[i].comb);
            printf("\n-----------------------------\n");
        printf ("\n Enter para continuar");
        getchar (); 
        getchar (); 
        system("clear");
        }
    } }
    

void buscarCarro() {
    int id;
    printf("Digite o ID do carro: ");
    scanf("%d", &id);
    for (int i = 0; i < numCarros; i++) {
        if (carros[i].id == id ) {
            printf("ID : %d", carros[i].id);
            printf("Marca : %s\n", carros[i].marca);
            printf("Modelo : %s\n", carros[i].modelo);
            printf("Ano : %d\n", carros[i].ano);
            printf("Cor: %s\n", carros[i].cor);
            printf("Valor : %.2f\n", carros[i].valor);
            printf("Combustivel : %d", carros[i].comb);
            printf("\n-----------------------------\n");
        printf ("\n Enter para continuar");
        getchar (); 
        getchar (); 
        system("clear");
        } } }
    