#ifndef _ASM_GENERIC_BITOPS_CONST_HWEIGHT_H_
#define _ASM_GENERIC_BITOPS_CONST_HWEIGHT_H_

#define hweight8(x) bitcount8(x)
#define hweight16(x) bitcount16(x)
#define hweight32(x) bitcount32(x)
#define hweight64(x) (bitcount32((uint32_t)(x>>32)) + bitcount32((uint32_t)x))


#endif /* _ASM_GENERIC_BITOPS_CONST_HWEIGHT_H_ */
