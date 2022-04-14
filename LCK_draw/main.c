#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "load_season.h"

#pragma warning(disable:4996) // scanf오류 전처리기

#define LCK_2021_Spring 0
#define LCK_2021_Spring_Playoffs 1
#define LCK_2021_Summer 2
#define LCK_2021_Summer_Playoffs 3
#define LCK_2021_Regional_Finals 4
#define LCK_2022_Spring 5
#define LCK_2022_Spring_Playoffs 6
#define SEASONS_NUM 7 // 시즌개수

int main()
{
	Season seasons[SEASONS_NUM]; // 시즌배열 선언

	load_season(&seasons[LCK_2021_Spring], "data\\01. LCK 2021 Spring"); 
	load_season(&seasons[LCK_2021_Spring_Playoffs], "data\\02. LCK 2021 Spring Playoffs");
	load_season(&seasons[LCK_2021_Summer], "data\\03. LCK 2021 Summer");
	load_season(&seasons[LCK_2021_Summer_Playoffs], "data\\04. LCK 2021 Summer Playoffs");
	load_season(&seasons[LCK_2021_Regional_Finals], "data\\05. LCK 2021 Regional Finals");
	load_season(&seasons[LCK_2022_Spring], "data\\06. LCK 2022 Spring");
	load_season(&seasons[LCK_2022_Spring_Playoffs], "data\\07. LCK 2022 Spring Playoffs"); // 시즌정보를 불러옴

	for (int i = 0; i < SEASONS_NUM; i++)
		free_season(&seasons[i]); // 모든 시즌의 동적할당된 객체를 해제함
}