/*------------ PDS II - RECUPERAÇÃO - ARVORE ------------

Integrantes do grupo: 
Bárbara Luisa Crispim Ribeiro
Gabriel Franklin Lopes de Oliveira
Guido Piancastelli Ramos
Gustavo Dornela Constantino
Marcus Vinícius Da Cruz Maia

*/

#include <stdlib.h>
#include <stdio.h>
#include "arvore.h"

int main(){
    Arvore* arvore = arvore_cria();
    arvore_push(arvore, 2);
    busca_arvore(arvore -> raiz, 2);

}