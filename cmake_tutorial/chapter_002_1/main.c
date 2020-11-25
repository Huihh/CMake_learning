

#include <stdio.h>
#include <stdint.h>

#include "tea.h"


void printf_array(uint32_t *buf, uint32_t len)
{
    uint8_t *ptr = (uint8_t *)buf;
    for (int i=0; i<len; i++) 
    {
        printf("%02x ", ptr[i]);
    }

    printf("\n");
}



int main()
{
    uint32_t key[] = {0x11223344, 0x11223344, 0x11223344, 0x11223344};    
    uint32_t id[] = {0x12345678, 0x90123456};

    printf("SRC_ID:--> ");
    printf_array(id, sizeof(id));

    tea_encrypt(id, key);
    printf("ENC_ID:--> ");
    printf_array(id, sizeof(id));

    tea_decrypt(id, key);
    printf("DEC_ID:--> ");
    printf_array(id, sizeof(id));


    return 0;
}

