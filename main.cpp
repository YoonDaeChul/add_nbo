#include <stdio.h>
#include <stdint.h>
#include "add_nbo.h"

int main(int argc, char* argv[]){

    if(argc != 3){
        printf("Only need 2 bin files");
        return 1;
    }
    
    uint32_t a1,a2;
    a1 = get_num(argv[1]);
    a2 = get_num(argv[2]);

    add_nbo(a1,a2);

    return 0;
}



  