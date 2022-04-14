#ifndef SEASON_STRUCT_H
#define SEASON_STRUCT_H

#include "data_struct.h"
#include "read_csv.h"

typedef struct season
{
	Data Champion_Stats; // 챔피언 Data구조체 선언
	Data Player_Stats; // 선수 Data구조체 선언
	Data Team_Stats; // 팀 Data구조체 선언
}Season;

void free_season(Season* season) // Season구조체의 포인터를 매개변수로 받음
{
	free_data(&season->Champion_Stats); // Season구조체의 챔피언Data의 데이터를 해제함
	free_data(&season->Player_Stats); // Season구조체의 선수Data의 데이터를 해제함
	free_data(&season->Team_Stats); // Season구조체의 팀Data의 데이터 해제함
}
#endif // !SEASON_STRUCT_H