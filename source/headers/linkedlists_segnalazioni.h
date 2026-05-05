#ifndef LINKEDLISTS_SEGNALAZIONI_H
#define LINKEDLISTS_SEGNALAZIONI_H

#include "segnalazioni.h"

typedef struct Lista {
	Segnalazione* segnalazione;
	struct Lista* prossimo;
} Lista;

/*Funzioni*/
Lista creaLista();
Lista aggiungiSegnalazione(Lista* testa, Segnalazione* nuova);
Lista rimuoviSegnalazione(Lista* testa, Segnalazione* nuova);
Segnalazione** converti_in_array(Lista* testa, int* length);
int lunghezza(Lista* testa);

#endif
