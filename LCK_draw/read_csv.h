#ifndef READ_CSV_H
#define READ_CSV_H

#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #define MAX_DATA 4

struct data {
    // char s[MAX_DATA][1024];
    int max_data;
    char** s;
};

void remove_spaces(char* s)
{
    const char* d = s;
    do {
        while (*d == ' ') {
            ++d;
        }
    } while (*s++ = *d++);
}

void getfield(char* line, struct data* d, int end_idx)
{
    int idx = 0;
    char* token = strtok(line, ",");

    d->s = (char**)malloc(sizeof(char*) * end_idx);
    for (int i = 0; i < end_idx; i++) {
        d->s[i] = (char*)malloc(sizeof(char) * 1024);
    }

    do
    {
        //printf("token: %s\n", token);
        strcpy(d->s[idx++], token);
    }    while (idx != end_idx && (token = strtok(NULL, ",")));

}

/*
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
}*/

#endif // !READ_CSV_H