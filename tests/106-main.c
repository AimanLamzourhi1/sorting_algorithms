95 % de l'espace de stockage utilisés … Une fois la limite atteinte, vous n'aurez plus assez d'espace pour créer, modifier ou importer des fichiers. Profitez de 100 Go de stockage pour 19,00 MAD 4,75 MAD/mois pendant 2 mois.
106-main.c
#include <stdio.h>
#include <stdlib.h>
#include "../sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {100, 93, 40, 57, 14, 58, 85, 54, 31, 56, 46, 39, 15, 26, 78, 13};
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf("\n");
	bitonic_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}
