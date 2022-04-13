#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "load_season.h"

#pragma warning(disable:4996)

#define LCK_2021_Spring 0
#define LCK_2021_Spring_Playoffs 1
#define LCK_2021_Summer 2
#define LCK_2021_Summer_Playoffs 3
#define LCK_2021_Regional_Finals 4
#define LCK_2022_Spring 5
#define LCK_2022_Spring_Playoffs 6
#define SEASONS_NUM 7
#define June_Spring "정준범"

int main()
{
	Season seasons[SEASONS_NUM];

	load_season(&seasons[0], "data\\01. LCK 2021 Spring");
	load_season(&seasons[1], "data\\02. LCK 2021 Spring Playoffs");
	load_season(&seasons[2], "data\\03. LCK 2021 Summer");
	load_season(&seasons[3], "data\\04. LCK 2021 Summer Playoffs");
	load_season(&seasons[4], "data\\05. LCK 2021 Regional Finals");
	load_season(&seasons[5], "data\\06. LCK 2022 Spring");
	load_season(&seasons[6], "data\\07. LCK 2022 Spring Playoffs");

	for (int i = 0; i < SEASONS_NUM; i++)
		free_season(&seasons[i]);
}