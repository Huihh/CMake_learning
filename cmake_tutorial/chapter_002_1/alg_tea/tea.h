
#ifndef __TEA_H__
#define __TEA_H__


#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


int32_t tea_encrypt(uint32_t *v, uint32_t *k);
int32_t tea_decrypt(uint32_t *v, uint32_t *k);










#ifdef __cplusplus
}
#endif

#endif