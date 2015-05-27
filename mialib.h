struct s_elemento{
       int valore;
       struct s_elemento *prossimo;     
       };
       
typedef struct s_elemento elemento;

elemento* inserimento(elemento* p,char scelta[]);
void stampa(elemento* p);
void svuotaLista(elemento* p);
void controllo(elemento* p);
