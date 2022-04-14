#ifndef LOAD_CSV_H
#define LOAD_SCV_H

#pragma warning(disable:4996)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "read_csv.h"
#include "season_struct.h"

void load_data(Data* data, char path[], int column_size) // Data����ü�� ������, csv���ϰ��, ����̸� �Ű������� ����
{
	char line[1024];

	FILE* stream = fopen(path, "r");
	while (fgets(line, 1024, stream))
	{
		remove_spaces(line);

		char* temp = strdup(line);
		getfield(temp, data, column_size);

		/*for (int i = 0; i < size; i++) // csv������ �ҷ��Ȱ� ���ÿ� ���
		{
			printf("%s\t", data->s[i]);
		}
		printf("\n");*/
	}
	/*printf("\n");*/
}

#endif // !LOAD_CSV_H