#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void inicializa(Pilha *p){
	p->topo=-1;
}

void insere(Pilha *p, int elemento){
int i;	
	for(i=0;i<10;i++){
	p->topo++;
	p->pilha++;
	p->pilha=elemento;
	}
}

void retira(Pilha *p){
	p->topo-=1;
}

void imprimetopo(Pilha *p){
	printf("Topo da pilha: %i\n",p->topo);
}
