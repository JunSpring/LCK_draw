#ifndef LOAD_SEASON_H
#define LOAD_SEASON_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "season_struct.h"
#include "load_csv.h"

void load_season(Season* season, char path[]) // Season����ü�� ������, data���� ������ ��θ� �Ű������� ����
{
	char Champion_path[100]; // è�Ǿ� csv���ϰ�θ� ������ ���ڿ�
	strcpy(Champion_path, path); // ���ڿ��� �Ű����� ��θ� �����ϰ� 
	strcat(Champion_path, "\\Champion Stats - OraclesElixir.csv"); // data���� ������ ��θ� ����
	load_data(&season->Champion_Stats, Champion_path, 25); // load_data�Լ��� è�Ǿ�Data, è�Ǿ� csv���ϰ��, ����̸� ������

	char Player_path[100]; // ���� csv���ϰ�θ� ������ ���ڿ�
	strcpy(Player_path, path); // ���ڿ��� �Ű����� ��θ� �����ϰ� 
	strcat(Player_path, "\\Player Stats - OraclesElixir.csv"); // data���� ������ ��θ� ����
	load_data(&season->Player_Stats, Player_path, 26); // load_data�Լ��� ����Data, ���� csv���ϰ��, ����̸� ������

	char Team_path[100]; // �� csv���ϰ�θ� ������ ���ڿ�
	strcpy(Team_path, path); // ���ڿ��� �Ű����� ��θ� �����ϰ� 
	strcat(Team_path, "\\Team Stats - OraclesElixir.csv"); // data���� ������ ��θ� ����
	load_data(&season->Team_Stats, Team_path, 26); // load_data�Լ��� ��Data, �� csv���ϰ��, ����̸� ������
}

#endif // LOAD_SEASON_h