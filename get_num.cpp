#include <stdio.h>
#include <stdint.h>
#include "add_nbo.h"


uint32_t get_num(char* file){
    FILE* fp=NULL;

     fp = fopen(file, "r");
    if (fp==NULL)
    {
        printf("Fopen error");
        return 1;
    }

    uint32_t buffer[1]={0};
    uint32_t a;

    fread(buffer,1,4,fp);
    a = *buffer;

    fclose(fp);

    return a;
}