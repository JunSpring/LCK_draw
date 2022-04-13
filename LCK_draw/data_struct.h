#ifndef DATA_STRUCT_H
#define DATA_STRUCT_H

typedef struct data
{
    int max_data;
    char** s;
} Data;

void free_data(Data* data)
{
	for (int i = 0; i < data->max_data; i++) {
		free(data->s[i]);
	}
	free(data->s);
}
#endif // !DATA_STRUCT_H