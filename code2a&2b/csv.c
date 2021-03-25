#include "info.h"

void free_struct(info_t *temp){
	free(temp->name);
	free(temp->email_id);
	free(temp->git_link);
}

error_t open_file(char* address, char* mode, FILE **ptr){
	(*ptr) = fopen(address,mode);

	if ((*ptr) == NULL)
		return FILE_NOT_FOUND;
	else
		return SUCCESS;
}	

int readLine(FILE **ptr, char* data){
	return fscanf(*ptr, "%s", data);
}


void allocAndStore(char **data, char *token){
	(*data) = (char *) malloc(strlen(token) + 1);		
	strcpy((*data), token);
}
