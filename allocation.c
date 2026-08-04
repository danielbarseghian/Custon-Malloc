#include "allocation.h"

struct header {
    size_t size; // located at address + 0 and adress + 2 + size
    unsigned int used; // located at adress + 1 (1 = free | 2 = used)
} header;

void *malloc(size_t size)
{

}

void free(void *ptnr)
{

}

void *get_free_block(size_t size)
{

}