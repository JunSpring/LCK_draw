﻿#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//#include "load_csv.h"
#include "read_csv.h"

#pragma warning(disable:4996)

int main()
{
    FILE* stream = fopen("data\\01. LCK 2021 Summer\\LCK 2021 Summer - Player Stats - OraclesElixir.csv", "r");

    char line[1024];
    while (fgets(line, 1024, stream))
    {
        remove_spaces(line);

        struct data d;

        char* tmp = strdup(line);
        getfield(tmp, &d, 4);

        printf("[%s]\t [%s]\t [%s]\t [%s]\n", d.s[0], d.s[1], d.s[2], d.s[3]);

        free(tmp);
    }
}