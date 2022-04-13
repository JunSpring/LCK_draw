#ifndef LOAD_CSV_H
#define LOAD_SCV_H

#pragma warning(disable:4996)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "read_csv.h"
#include "season_struct.h"

void load_data(Data* data, char path[], int size)
{
	char line[1024];

	FILE* stream = fopen(path, "r");
	while (fgets(line, 1024, stream))
	{
		remove_spaces(line);

		Data d;

		char* tmp = strdup(line);
		getfield(tmp, data, size);

		for (int i = 0; i < size; i++)
		{
			printf("%s\t", data->s[i]);
		}
		printf("\n");

		free(tmp);
	}
	printf("\n");
}

#endif // !LOAD_CSV_H