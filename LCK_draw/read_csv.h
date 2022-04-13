#ifndef READ_CSV_H
#define READ_CSV_H

#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "data_struct.h"

void remove_spaces(char* s)
{
	const char* d = s;
	do 
	{
		while (*d == ' ') 
		{
			++d;
		}
	} while (*s++ = *d++);
}

void getfield(char* line, Data* d, int end_idx)
{
	int idx = 0;
	char* token = strtok(line, ",");
	d->max_data = end_idx;

	d->s = (char**)malloc(sizeof(char*) * end_idx);
	for (int i = 0; i < end_idx; i++) 
	{
		d->s[i] = (char*)malloc(sizeof(char) * 1024);
	}

	do
	{
		strcpy(d->s[idx++], token);
	} while (idx != end_idx && (token = strtok(NULL, ",")));

}

#endif // !READ_CSV_H