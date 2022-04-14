#ifndef DATA_STRUCT_H
#define DATA_STRUCT_H

typedef struct data
{
    int max_data; // 데이터 길이
    char** s; // 이중포인터 선언
} Data;

void free_data(Data* data) // Data구조체의 포인터를 매개변수로 받음
{
	for (int i = 0; i < data->max_data; i++) // 구조체의 데이터 길이만큼 반복
	{
		free(data->s[i]); // s[i]를 해제함
	}
	free(data->s); // s를 해제함
}
#endif // !DATA_STRUCT_H