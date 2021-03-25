/**
 * @file data.h
 * @author Shine Jasmine
 * @brief 
 * @version 0.1
 * @date 2021-03-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#ifndef __DATA_H__
#define __DATA_H__


/**
 * @brief define an enum variable error_t
 * 
 */
typedef enum error_t{
    FILE_NOT_FOUND = -1,    /**< Null pointer dereferncing error */
    SUCCESS = 0 /**< Compute operation is successful */
}error_t;

/**
 * @brief Define a structure
 * 
 */
typedef struct info_t {
    char* name;
    char* email_id;
    char* git_link;
} info_t;

/**
 * @brief Function to free the dynamically allocated memory of structure
 * 
 * @param fre 
 */
void free_struct(info_t * fre);
/**
 * @brief Function to dynamically allocate memory for each structure element.
 * 
 * @param data 
 * @param token 
 */
void allocatemem(char **data , char * token );

/**
 * @brief declaring a function to print the values of the csv file
 * 
 */
void print_data(FILE *fp,char *buffer);

/**
 * @brief A test function that retrives a enum which indicates the success or failure of reading a file
 * 
 * @param filename 
 * @param mode 
 * @param fptr 
 * @return error_t 
 */
error_t file_success(char *filename, char *mode, FILE **fptr );
/**
 * @brief A function in source codee to input the file and process it, can be modified to a main function later.
 * 
 */
void file_process();

#endif /* __DATA_H__ */
