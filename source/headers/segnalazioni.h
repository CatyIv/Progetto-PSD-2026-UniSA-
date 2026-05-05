#ifndef REPORT_H
#define REPORT_H
#include <stddef.h>

typedef enum {
	Illuminazione,
	Buche,
	Rifiuti,
	Impianti
} Categoria;

typedef enum {
	Aperta,
	Lavorazione,
	Chiusa
} Stato;

typedef enum {
	Bassa,
	Media,
	Alta,
	Critica
} Urgenza;


typedef struct Segnalazione {
	unsigned int id;
	char* nome;
	Categoria categoria;
	char* descrizione;
	int data;
	Urgenza urgenza;
	Stato stato;
} Report;

/*Funzioni*/
Report* creaSegnalazione(int id, char* nome, Categoria cat, char* desc, int data, Urgenza urg, Stato stato);

#endif
