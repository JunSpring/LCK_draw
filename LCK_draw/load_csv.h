#ifndef LOAD_CSV_H
#define LOAD_SCV_H

#pragma warning(disable:4996)

#include<iostream>
#include<stdlib.h>
#include<string.h>

#include"read_csv.h"

int main()
{
    FILE* stream = fopen("data\\01. LCK 2021 Summer\\LCK 2021 Summer - Player Stats - OraclesElixir.csv", "r");

    char line[1024];
    while (fgets(line, 1024, stream))
    {
        remove_spaces(line);

        struct data d;

        char* tmp = strdup(line);
        getfield(tmp, &d, MAX_DATA);

        printf("%s %s %s %s\n", d.s[0], d.s[1], d.s[2], d.s[3]);

        free(tmp);
    }
}

#endif // !LOAD_CSV_H