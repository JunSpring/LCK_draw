#ifndef LOAD_CSV_H
#define LOAD_SCV_H

#pragma warning(disable:4996)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "read_csv.h"
#include "season_struct.h"

void load_data(Data* data, char path[], int column_size) // Data구조체의 포인터, csv파일경로, 행길이를 매개변수로 받음
{
	char line[1024];

	FILE* stream = fopen(path, "r");
	while (fgets(line, 1024, stream))
	{
		remove_spaces(line);

		char* temp = strdup(line);
		getfield(temp, data, column_size);

		/*for (int i = 0; i < size; i++) // csv파일을 불러옴과 동시에 출력
		{
			printf("%s\t", data->s[i]);
		}
		printf("\n");*/
	}
	/*printf("\n");*/
}

#endif // !LOAD_CSV_H