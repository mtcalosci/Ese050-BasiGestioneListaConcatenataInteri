#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mialib.h"

elemento* inserimento(elemento* p,char scelta[]){
        elemento* temp;
        int conta = 2;
        while(!strcmp(scelta,"s")){
            printf("Vuoi inserire un altro numero ? (s/n) ");
            scanf("%s",scelta);
                if(!strcmp(scelta,"s")){
	             temp = (elemento*)malloc(sizeof(elemento));
                     controllo(p);
	             printf("Inserisci il %d° numero: ", conta);
	             scanf("%d", &((*temp).valore));
	             (*temp).prossimo = p;
	             p = temp;
	             conta = conta + 1;
                }
        }
    return p;
    }

    void stampa(elemento* p){
        elemento* temp;
        temp = p;
        while(temp != NULL){
            printf("%d\n",(*temp).valore);
            temp = (*temp).prossimo;
        }
    }
    
    void svuotaLista(elemento* p){
        elemento* temp = NULL;
        while(p != NULL){
            temp = (*p).prossimo;
            free(p);
            p = temp;
        }
    }
    
    void controllo(elemento* p){
        if(p == NULL){
            fprintf(stderr,"ERRORE NELL'ALLOCAZIONE DELLA MEMORIA HEAP");
            exit(1);
        }
    }
