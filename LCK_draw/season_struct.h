#ifndef SEASON_STRUCT_H
#define SEASON_STRUCT_H

#include "data_struct.h"
#include "read_csv.h"

typedef struct season
{
	Data Champion_Stats; // è�Ǿ� Data����ü ����
	Data Player_Stats; // ���� Data����ü ����
	Data Team_Stats; // �� Data����ü ����
}Season;

void free_season(Season* season) // Season����ü�� �����͸� �Ű������� ����
{
	free_data(&season->Champion_Stats); // Season����ü�� è�Ǿ�Data�� �����͸� ������
	free_data(&season->Player_Stats); // Season����ü�� ����Data�� �����͸� ������
	free_data(&season->Team_Stats); // Season����ü�� ��Data�� ������ ������
}
#endif // !SEASON_STRUCT_H