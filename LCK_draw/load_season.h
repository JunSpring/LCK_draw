#ifndef LOAD_SEASON_H
#define LOAD_SEASON_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "season_struct.h"
#include "load_csv.h"

void load_season(Season* season, char path[])
{
	char Champion_path[100];
	strcpy(Champion_path, path);
	strcat(Champion_path, "\\Champion Stats - OraclesElixir.csv");
	load_data(&season->Champion_Stats, Champion_path, 25);

	char Player_path[100];
	strcpy(Player_path, path);
	strcat(Player_path, "\\Player Stats - OraclesElixir.csv");
	load_data(&season->Player_Stats, Player_path, 26);

	char Team_path[100];
	strcpy(Team_path, path);
	strcat(Team_path, "\\Team Stats - OraclesElixir.csv");
	load_data(&season->Team_Stats, Team_path, 26);
}

#endif // LOAD_SEASON_h