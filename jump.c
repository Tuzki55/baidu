#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
  
int main()  
{  
    int size = 1024;
    char* buff = (char*)malloc(size); 
  
    // read lines  
    while(NULL != fgets(buff, size, stdin)){  
        printf("Read line with len: %d\n", strlen(buff));  
        printf("%s", buff);  
    }     
    // free buff  
    free(buff);   
} 