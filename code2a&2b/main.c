#include "info.h"

int main(){
	info_t person;

	FILE *fptr = NULL;
	
	char file_data[100] = {0}; 
	char *token;

	error_t open = open_file("data.csv","r",&fptr);

	switch(open){
		case FILE_NOT_FOUND:
			printf("File not found");
			exit(1);
			break;
		case SUCCESS:
			while(readLine(&fptr,file_data) == 1){
				if(feof(fptr))
					break;
				token = strtok(file_data, ",");
				allocAndStore(&person.name, token);

				token = strtok(NULL, ",");
				allocAndStore(&person.email_id, token);

				token = strtok(NULL, ",");
				allocAndStore(&person.git_link, token);
			
				printf("Name = %s\nEmailID = %s\nGitHub Link = %s\n",person.name,person.email_id,person.git_link);
			
				free_struct(&person);

			}
	}

	fclose(fptr);
	return 0;
}
