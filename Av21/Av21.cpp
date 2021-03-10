#include <stdio.h>
#include <stdlib.h>

/* 	
	Nome Autor:Erick Leda Correia
	Data:16/12/2020
*/

typedef struct numeracao{
    int numbr;
    int numusa;
    struct numeracao *prox;
}TSAPATO;

// VARIAVEIS GLOBAIS 
TSAPATO *ptrSapato;

// PROTOTIPOS DE MÉTODOS 

void alocarMemoria(TSAPATO **ptr);
void inserirValor(TSAPATO **ptr);
void cadastrarSapato(TSAPATO **ptr);
void listarValor (TSAPATO *ptr);

//IMPLEMENTACAO DOS METODOS 

// MÉTODO: para alocar um novo elemento na memória
void alocarMemoria(TSAPATO **ptr){
    *ptr = (TSAPATO*) malloc(sizeof(TSAPATO*));
	if (ptr == NULL){
        printf("Falha em inserir o elemento. Sem memória");
    } else 	printf("\nNovo Sapato Alocado\n");
}

//Metodo para inserir valores dentro do novo elemento criado na memoria

void inserirValor(TSAPATO **ptr){
    TSAPATO *novo;
    int numbr, numusa;
    alocarMemoria(&novo);

    printf("Digite o numero de tamanho no Brasil: ");
    scanf("%d", &numbr);
    printf("Digite o numero de tamanho no USA: ");
    scanf("%d", &numusa);

    novo->numbr = numbr;
    novo->numusa = numusa;
    novo->prox = NULL;

    *ptr = novo;
}
// Metodo para cadastrar os sapatos 
void cadastrarSapato(TSAPATO **ptr){
    TSAPATO *cadastro;
    int numbr,numusa;
    inserirValor(&cadastro);

  printf("Digite o numero de tamanho no Brasil:");
    scanf("%d", &numbr);
    printf("Digite o numero de tamanho no USA: ");
    scanf("%d", &numusa);

    cadastro->numbr=numbr;
    cadastro->numusa=numusa;
    cadastro->prox = NULL;

    *ptr = cadastro;
}



// Metodo para listar os valores de todos os elementos criados 
void listarValor (TSAPATO *ptr){
    int cont=1;
    printf("\nLista de Numeracao dos Sapatos: \n");

    while(ptr!= NULL){
        printf("Sapato %d tem numeracao Brasil = %d e USA = %d\n", cont, ptr->numbr, ptr->numusa);
        ptr = ptr->prox;
        cont++;
    }
    printf("fim lista \n\n");
}


int main(){

// inicializando o ponteiro 
ptrSapato = NULL;

// inserindo numeracoes para 3 sapatos 
inserirValor(&ptrSapato);
inserirValor(&ptrSapato->prox);
inserirValor(&ptrSapato->prox->prox);


listarValor(ptrSapato);

return 1;

}
