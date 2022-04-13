#ifndef SEASON_STRUCT_H
#define SEASON_STRUCT_H

#include "data_struct.h"
#include "read_csv.h"

typedef struct season
{
	Data Champion_Stats;
	Data Player_Stats;
	Data Team_Stats;
}Season;

void free_season(Season* season)
{
	free_data(&season->Champion_Stats);
	free_data(&season->Player_Stats);
	free_data(&season->Team_Stats);
}
#endif // !SEASON_STRUCT_H