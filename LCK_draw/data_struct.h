#ifndef DATA_STRUCT_H
#define DATA_STRUCT_H

typedef struct data
{
    int max_data; // ������ ����
    char** s; // ���������� ����
} Data;

void free_data(Data* data) // Data����ü�� �����͸� �Ű������� ����
{
	for (int i = 0; i < data->max_data; i++) // ����ü�� ������ ���̸�ŭ �ݺ�
	{
		free(data->s[i]); // s[i]�� ������
	}
	free(data->s); // s�� ������
}
#endif // !DATA_STRUCT_H