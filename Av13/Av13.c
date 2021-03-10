/*
    Algoritmo ED AV13
    Autor:  Erick
    Data: 29/11/2020
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>


struct carro
{
    char modelo[30];
    char renavam[30];
    char fabricante[30];
    char placa[15];
    float kilometragem;
    int ano;
};
struct carro carro;

struct celular{
    char modelo[30];
    char fabricante[30];
    char imei[15];
    char sistema[30];
    int ano;
    int memoria;
    int armazenamento;
};
struct celular celular;

struct aviao
{
    char modelo[30];
    char fabricante[30];
    int capacidade_tripulantes;
    float velocidade;
    int ano;
};
struct aviao aviao;

struct peca_domino
{
    char numero[30];
    char medida[30];
    char material[30];
};
struct peca_domino peca_domino;

struct computador{
    char processador[30];
    char placa_mae[30];
    char memoria[60];
    char armazenamento[60];
};
struct computador computador;

struct relogio{
    char marca[30];
    char tipo[30];
    char construcao[60];
    char medidas[60];
};
struct relogio relogio;

int main(){

    strcpy(carro.modelo, "HB20");
    strcpy(carro.renavam, "144003058");
    strcpy(carro.fabricante, "Hyundai");
    strcpy(carro.placa, "BRA2E19");
    carro.kilometragem = 123456;
    carro.ano = 2020;

    strcpy(celular.modelo, "Samsung A50");
    strcpy(celular.fabricante, "Samsung");
    strcpy(celular.imei, "265146361347578");
    strcpy(celular.sistema, "Android");
    celular.ano = 2019;

    strcpy(aviao.modelo, "Boeing 737");
    strcpy(aviao.fabricante, "Boeing");
    aviao.capacidade_tripulantes = 300;
    aviao.velocidade = 1000;
    aviao.ano = 2017;

    strcpy(peca_domino.numero, "28");
    strcpy(peca_domino.medida, "4.5cm x 2.5cm");
    strcpy(peca_domino.material, "Resina");

    strcpy(computador.processador, "Intel i5-9400f");
    strcpy(computador.placa_mae, "AsRock B365M");
    strcpy(computador.memoria, "HyperX 16GB 2666MHZ");
    strcpy(computador.armazenamento, "Adata XPG Spectrix 512GB ");

    strcpy(relogio.marca, "Rolex");
    strcpy(relogio.tipo, "Analógico");
    strcpy(relogio.construcao, "Analógico");
    strcpy(relogio.medidas, "44mm");

}