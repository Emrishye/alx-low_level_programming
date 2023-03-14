#include "main.h"
#include <stdio.h>
/**
 * main - prints arguments received
 * @argc: number arguments
 * @argv: array of arrays
 * Return: Alaways 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);


}
