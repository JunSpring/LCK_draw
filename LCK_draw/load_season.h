#ifndef LOAD_SEASON_H
#define LOAD_SEASON_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "season_struct.h"
#include "load_csv.h"

void load_season(Season* season, char path[]) // Season구조체의 포인터, data폴더 상위의 경로를 매개변수로 받음
{
	char Champion_path[100]; // 챔피언 csv파일경로를 저장할 문자열
	strcpy(Champion_path, path); // 문자열에 매개변수 경로를 복사하고 
	strcat(Champion_path, "\\Champion Stats - OraclesElixir.csv"); // data폴더 하위의 경로를 붙임
	load_data(&season->Champion_Stats, Champion_path, 25); // load_data함수에 챔피언Data, 챔피언 csv파일경로, 행길이를 전달함

	char Player_path[100]; // 선수 csv파일경로를 저장할 문자열
	strcpy(Player_path, path); // 문자열에 매개변수 경로를 복사하고 
	strcat(Player_path, "\\Player Stats - OraclesElixir.csv"); // data폴더 하위의 경로를 붙임
	load_data(&season->Player_Stats, Player_path, 26); // load_data함수에 선수Data, 선수 csv파일경로, 행길이를 전달함

	char Team_path[100]; // 팀 csv파일경로를 저장할 문자열
	strcpy(Team_path, path); // 문자열에 매개변수 경로를 복사하고 
	strcat(Team_path, "\\Team Stats - OraclesElixir.csv"); // data폴더 하위의 경로를 붙임
	load_data(&season->Team_Stats, Team_path, 26); // load_data함수에 팀Data, 팀 csv파일경로, 행길이를 전달함
}

#endif // LOAD_SEASON_h