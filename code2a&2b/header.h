#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#ifndef __INFO_H__
#define __INFO_H__

typedef enum error_t
{

	FILE_NOT_FOUND = -1,	
	SUCCESS = 0
}error_t;

typedef struct info_t
{
	char *name;
	char *email_id;
	char *git_link;
}info_t;

error_t open_file(char* addr,char* mode,FILE **ptr);

void free_struct(info_t *temp);
int readLine(FILE **ptr, char *data);
void allocAndStore(char **data, char *token);


#endif
