95 % de l'espace de stockage utilisés … Une fois la limite atteinte, vous n'aurez plus assez d'espace pour créer, modifier ou importer des fichiers. Profitez de 100 Go de stockage pour 19,00 MAD 4,75 MAD/mois pendant 2 mois.
print_list.c
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}
