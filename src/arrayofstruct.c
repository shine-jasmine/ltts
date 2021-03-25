#include "data.h"



error_t file_success(char *filename, char *mode, FILE **fptr ){
    (*fptr) = fopen(filename,mode);

    if((*fptr) == NULL){
        return FILE_NOT_FOUND;
    }
    else 
    {
        return SUCCESS;
    }

}

void free_struct(info_t *fre){
	free(fre->name);
	free(fre->email_id);
	free(fre->git_link);
}

void allocatemem(char **data , char * token ){
    (*data) = (char *)malloc(strlen(token) + 1);
    strcpy((*data),token);
}
