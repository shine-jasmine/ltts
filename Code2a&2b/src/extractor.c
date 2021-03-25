#include "data.h"
#define MAX_SIZE 1024

info_t persondata[10];

/**
 * @brief Creating a file pointer function definition
 * 
 */
void print_data(FILE *fp,char *buffer){
    int row=0;
    int column=0;
    int i=0;
    while(fgets(buffer,MAX_SIZE,fp)){
        column=0; /**< At the end of the line reinitialise column to 0 */
        row++; /**< At the end of the line, increment row */

        char* val = strtok(buffer,","); /**< Splitting the string based on the delimeter "," */

        /**
         * @brief iterating through each character
         * 
         */
        
        while(val){
        if(column==0){
            allocatemem(&persondata[i].name,val);
            printf("Name = %s\n",persondata[i].name);
        }
        if(column==1){
            allocatemem( &persondata[i].email_id,val);
            printf("EmailID = %s\n",persondata[i].email_id);
        }
        if(column==2){
            allocatemem( &persondata[i].git_link,val);
            printf("GitHub link = %s\n",persondata[i].git_link);
        }
        val = strtok(NULL,",");
        column++;
        }
        printf("\n");
        i++;
    }
    while(row--){
        free_struct(&persondata[i]);
    }
}

void file_process(){

FILE *fp = NULL;
char* buffer = (char *)malloc(sizeof(char)*1024);
error_t  open = file_success("data.csv","r",&fp);
/** < Pass the file name and the mode to a file pointer through file_success function */
 if(open==FILE_NOT_FOUND){
     exit(1);
 }
else if(open==SUCCESS){
   
   print_data(fp,buffer);

fclose(fp); /** < Close the file */
free(buffer);
}

}
