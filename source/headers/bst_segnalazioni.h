#ifndef SEGNALAZIONI_BST_H
#define SEGNALAZIONI_BST_H

#include "segnalazioni.h"

struct node {
	Segnalazione* segnalazione;
	int idSegnalazione;
	struct node* left;
	struct node* right;
};

typedef struct node* BST;

/*Funzioni*/
BST newBST(void);
void inserisci_bstSegnalazione(BST* root, Segnalazione* nuova);
BST rimuovi_bstSegnalazione(BST root, int id);
Segnalazione* ricerca_per_id(BST root, int id);

#endif

