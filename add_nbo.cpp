#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>
#include "add_nbo.h"

void add_nbo(uint32_t n1, uint32_t n2){
    uint32_t hn1 = ntohl(n1);
    uint32_t hn2 = ntohl(n2);
    uint32_t hn3 = hn1 + hn2;
    printf("%d(%#x) + %d(%#x) = %d(%#x)\n",hn1,hn1,hn2,hn2,hn3,hn3);
}