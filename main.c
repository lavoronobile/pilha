#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
	Pilha *a;
    int elem, i;
	
    inicializa(a);
      for(i=10; i>0; i--){
	scanf("%d", &elem);
    insere(a, elem);
}
    retira(a);

    imprime(a);
      return 0;
}
