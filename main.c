#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mialib.h"

int main(){
    elemento* primo = NULL;
    char scelta[2];

    printf("Vuoi inserire dei numeri ? (s/n) ");
    scanf("%s",scelta);
    
    if(!strcmp(scelta,"s")){
        primo = (elemento*)malloc(sizeof(elemento));
        controllo(primo);
        printf("Inserisci il primo numero: ");
        scanf("%d",&((*primo).valore));
        primo = inserimento(primo,scelta);
    }
    
    stampa(primo);
    
    svuotaLista(primo);
    
    return (EXIT_SUCCESS);
    }

    