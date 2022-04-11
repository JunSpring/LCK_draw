#include<stdio.h>

#include "read_csv.h"

int main()
{
    FILE* stream = fopen("location.csv", "r");

    char line[1024];
    while (fgets(line, 1024, stream))
    {
        remove_spaces(line);

        struct data d;

        char* tmp = strdup(line);
        getfield(tmp, &d, MAX_DATA);

        printf("[%s] [%s] [%s]\n", d.s[0], d.s[1], d.s[2]);

        free(tmp);
    }
}