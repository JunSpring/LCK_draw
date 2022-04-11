#ifndef READ_CSV_H
#define READ_CSV_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DATA 3

struct data {
    char s[MAX_DATA][1024];
};

void remove_spaces(char* s) {
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

    do
    {
        //printf("token: %s\n", token);
        strcpy(d->s[idx++], token);
    }    while (idx != end_idx && (token = strtok(NULL, ",")));

}

#endif // !READ_CSV_H