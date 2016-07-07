#ifndef __IA64_OPTABLE_H__
#define __IA64_OPTABLE_H__

#include <stdint.h>

#define __RM8       0x01
#define __R8        0x02
#define __RM163264  0x03
#define __R163264   0x04
#define __AL        0x05
#define __IMM8      0x06
#define __RAX       0x07
#define __IMM1632   0x08
#define __REG_6416_1 0x09
#define __REG_6416_2 0x0a
#define __REG_6416_3 0x0b
#define __REG_6416_4 0x0c
#define __REG_6416_5 0x0d
#define __REG_6416_6 0x0e
#define __REG_6416_7 0x0f
#define __REG_6416_8 0x10
#define __DX        0x11
#define __RSI_BYTE  0x12
#define __RSI_DWORD 0x13
#define __REL_8     0x14
#define __RDI_BYTE  0x15
#define __RDI_DWORD 0x16

typedef struct ia64_instruction {
    char *mnemonic;

    uint8_t prefix;
    uint8_t of_prefix; // 0x0f prefix
    uint8_t primary_opcode;
    uint8_t secondary_opcode;

    uint8_t operand[4];
    uint8_t register_field;
} ia64_instruction;

const ia64_instruction ia64_optab[] =
{
 {"add", 0x00, 0x00, 0x00, 0x00, {__RM8, __R8, 0x00, 0x00}, 0x00},
 {"add", 0x00, 0x00, 0x01, 0x00, {__RM163264, __R163264, 0x00, 0x00}, 0x00},
 {"add", 0x00, 0x00, 0x02, 0x00, {__R8, __RM8, 0x00, 0x00}, 0x00},
 {"add", 0x00, 0x00, 0x03, 0x00, {__R163264, __RM163264, 0x00, 0x00}, 0x00},
 {"add", 0x00, 0x00, 0x04, 0x00, {__AL, __IMM8, 0x00, 0x00}, 0x00},
 {"add", 0x00, 0x00, 0x05, 0x00, {__RAX, __IMM1632, 0x00, 0x00}, 0x00},
 {"or", 0x00, 0x00, 0x08, 0x00, {__RM8, __R8, 0x00, 0x00}, 0x00},
 {"or", 0x00, 0x00, 0x09, 0x00, {__RM163264, __R163264, 0x00, 0x00}, 0x00},
 {"or", 0x00, 0x00, 0x0a, 0x00, {__R8, __RM8, 0x00, 0x00}, 0x00},
 {"or", 0x00, 0x00, 0x0b, 0x00, {__R163264, __RM163264, 0x00, 0x00}, 0x00},
 {"or", 0x00, 0x00, 0x0c, 0x00, {__AL, __IMM8, 0x00, 0x00}, 0x00},
 {"or", 0x00, 0x00, 0x0d, 0x00, {__RAX, __IMM1632, 0x00, 0x00}, 0x00},
 {"adc", 0x00, 0x00, 0x10, 0x00, {__RM8, __R8, 0x00, 0x00}, 0x00},
 {"adc", 0x00, 0x00, 0x11, 0x00, {__RM163264, __R163264, 0x00, 0x00}, 0x00},
 {"adc", 0x00, 0x00, 0x12, 0x00, {__R8, __RM8, 0x00, 0x00}, 0x00},
 {"adc", 0x00, 0x00, 0x13, 0x00, {__R163264, __RM163264, 0x00, 0x00}, 0x00},
 {"adc", 0x00, 0x00, 0x14, 0x00, {__AL, __IMM8, 0x00, 0x00}, 0x00},
 {"adc", 0x00, 0x00, 0x15, 0x00, {__RAX, __IMM1632, 0x00, 0x00}, 0x00},
 {"sbb", 0x00, 0x00, 0x18, 0x00, {__RM8, __R8, 0x00, 0x00}, 0x00},
 {"sbb", 0x00, 0x00, 0x19, 0x00, {__RM163264, __R163264, 0x00, 0x00}, 0x00},
 {"sbb", 0x00, 0x00, 0x1a, 0x00, {__R8, __RM8, 0x00, 0x00}, 0x00},
 {"sbb", 0x00, 0x00, 0x1b, 0x00, {__R163264, __RM163264, 0x00, 0x00}, 0x00},
 {"sbb", 0x00, 0x00, 0x1c, 0x00, {__AL, __IMM8, 0x00, 0x00}, 0x00},
 {"sbb", 0x00, 0x00, 0x1d, 0x00, {__RAX, __IMM1632, 0x00, 0x00}, 0x00},
 {"and", 0x00, 0x00, 0x20, 0x00, {__RM8, __R8, 0x00, 0x00}, 0x00},
 {"and", 0x00, 0x00, 0x21, 0x00, {__RM163264, __R163264, 0x00, 0x00}, 0x00},
 {"and", 0x00, 0x00, 0x22, 0x00, {__R8, __RM8, 0x00, 0x00}, 0x00},
 {"and", 0x00, 0x00, 0x23, 0x00, {__R163264, __RM163264, 0x00, 0x00}, 0x00},
 {"and", 0x00, 0x00, 0x24, 0x00, {__AL, __IMM8, 0x00, 0x00}, 0x00},
 {"and", 0x00, 0x00, 0x25, 0x00, {__RAX, __IMM1632, 0x00, 0x00}, 0x00},
 {"sub", 0x00, 0x00, 0x28, 0x00, {__RM8, __R8, 0x00, 0x00}, 0x00},
 {"sub", 0x00, 0x00, 0x29, 0x00, {__RM163264, __R163264, 0x00, 0x00}, 0x00},
 {"sub", 0x00, 0x00, 0x2a, 0x00, {__R8, __RM8, 0x00, 0x00}, 0x00},
 {"sub", 0x00, 0x00, 0x2b, 0x00, {__R163264, __RM163264, 0x00, 0x00}, 0x00},
 {"sub", 0x00, 0x00, 0x2c, 0x00, {__AL, __IMM8, 0x00, 0x00}, 0x00},
 {"sub", 0x00, 0x00, 0x2d, 0x00, {__RAX, __IMM1632, 0x00, 0x00}, 0x00},
 {"xor", 0x00, 0x00, 0x30, 0x00, {__RM8, __R8, 0x00, 0x00}, 0x00},
 {"xor", 0x00, 0x00, 0x31, 0x00, {__RM163264, __R163264, 0x00, 0x00}, 0x00},
 {"xor", 0x00, 0x00, 0x32, 0x00, {__R8, __RM8, 0x00, 0x00}, 0x00},
 {"xor", 0x00, 0x00, 0x33, 0x00, {__R163264, __RM163264, 0x00, 0x00}, 0x00},
 {"xor", 0x00, 0x00, 0x34, 0x00, {__AL, __IMM8, 0x00, 0x00}, 0x00},
 {"xor", 0x00, 0x00, 0x35, 0x00, {__RAX, __IMM1632, 0x00, 0x00}, 0x00},
 {"cmp", 0x00, 0x00, 0x38, 0x00, {__RM8, __R8, 0x00, 0x00}, 0x00},
 {"cmp", 0x00, 0x00, 0x39, 0x00, {__RM163264, __R163264, 0x00, 0x00}, 0x00},
 {"cmp", 0x00, 0x00, 0x3a, 0x00, {__R8, __RM8, 0x00, 0x00}, 0x00},
 {"cmp", 0x00, 0x00, 0x3b, 0x00, {__R163264, __RM163264, 0x00, 0x00}, 0x00},
 {"cmp", 0x00, 0x00, 0x3c, 0x00, {__AL, __IMM8, 0x00, 0x00}, 0x00},
 {"cmp", 0x00, 0x00, 0x3d, 0x00, {__RAX, __IMM1632, 0x00, 0x00}, 0x00},
 {"push", 0x00, 0x00, 0x50, 0x00, {__REG_6416_1, 0x00, 0x00, 0x00}, 0x00},
 {"push", 0x00, 0x00, 0x51, 0x00, {__REG_6416_2, 0x00, 0x00, 0x00}, 0x00},
 {"push", 0x00, 0x00, 0x52, 0x00, {__REG_6416_3, 0x00, 0x00, 0x00}, 0x00},
 {"push", 0x00, 0x00, 0x53, 0x00, {__REG_6416_4, 0x00, 0x00, 0x00}, 0x00},
 {"push", 0x00, 0x00, 0x54, 0x00, {__REG_6416_5, 0x00, 0x00, 0x00}, 0x00},
 {"push", 0x00, 0x00, 0x55, 0x00, {__REG_6416_6, 0x00, 0x00, 0x00}, 0x00},
 {"push", 0x00, 0x00, 0x56, 0x00, {__REG_6416_7, 0x00, 0x00, 0x00}, 0x00},
 {"push", 0x00, 0x00, 0x57, 0x00, {__REG_6416_8, 0x00, 0x00, 0x00}, 0x00},
 {"pop", 0x00, 0x00, 0x58, 0x00, {__REG_6416_1, 0x00, 0x00, 0x00}, 0x00},
 {"pop", 0x00, 0x00, 0x59, 0x00, {__REG_6416_2, 0x00, 0x00, 0x00}, 0x00},
 {"pop", 0x00, 0x00, 0x5a, 0x00, {__REG_6416_3, 0x00, 0x00, 0x00}, 0x00},
 {"pop", 0x00, 0x00, 0x5b, 0x00, {__REG_6416_4, 0x00, 0x00, 0x00}, 0x00},
 {"pop", 0x00, 0x00, 0x5c, 0x00, {__REG_6416_5, 0x00, 0x00, 0x00}, 0x00},
 {"pop", 0x00, 0x00, 0x5d, 0x00, {__REG_6416_6, 0x00, 0x00, 0x00}, 0x00},
 {"pop", 0x00, 0x00, 0x5e, 0x00, {__REG_6416_7, 0x00, 0x00, 0x00}, 0x00},
 {"pop", 0x00, 0x00, 0x5f, 0x00, {__REG_6416_8, 0x00, 0x00, 0x00}, 0x00},
 {"movsxd", 0x00, 0x00, 0x63, 0x00, {__R163264, __RM163264, 0x00, 0x00}, 0x00},
 {"push", 0x00, 0x00, 0x68, 0x00, {__IMM1632, 0x00, 0x00, 0x00}, 0x00},
 {"imul", 0x00, 0x00, 0x69, 0x00, {__R163264, __RM163264, __IMM1632, 0x00}, 0x00},
 {"push", 0x00, 0x00, 0x6a, 0x00, {__IMM8, 0x00, 0x00, 0x00}, 0x00},
 {"imul", 0x00, 0x00, 0x6b, 0x00, {__R163264, __RM163264, __IMM8, 0x00}, 0x00},
 {"insb", 0x00, 0x00, 0x6c, 0x00, {__RDI_BYTE, __DX, 0x00, 0x00}, 0x00},
 {"insd", 0x00, 0x00, 0x6d, 0x00, {__RDI_DWORD, __DX, 0x00, 0x00}, 0x00}, // TODO: operand size override
 {"outsb", 0x00, 0x00, 0x6e, 0x00, {__DX, __RSI_BYTE, 0x00, 0x00}, 0x00},
 {"outsd", 0x00, 0x00, 0x6f, 0x00, {__DX, __RSI_DWORD, 0x00, 0x00}, 0x00}, // TODO: operand size override
 {"jo", 0x00, 0x00, 0x70, 0x00, {__REL_8, 0x00, 0x00, 0x00}, 0x00},
 {"jno", 0x00, 0x00, 0x71, 0x00, {__REL_8, 0x00, 0x00, 0x00}, 0x00},
 {"jb", 0x00, 0x00, 0x72, 0x00, {__REL_8, 0x00, 0x00, 0x00}, 0x00},
 {"jnb", 0x00, 0x00, 0x73, 0x00, {__REL_8, 0x00, 0x00, 0x00}, 0x00},
 {"jz", 0x00, 0x00, 0x74, 0x00, {__REL_8, 0x00, 0x00, 0x00}, 0x00},
 {"jnz", 0x00, 0x00, 0x75, 0x00, {__REL_8, 0x00, 0x00, 0x00}, 0x00},
 {"jbe", 0x00, 0x00, 0x76, 0x00, {__REL_8, 0x00, 0x00, 0x00}, 0x00},
 {"jnbe", 0x00, 0x00, 0x77, 0x00, {__REL_8, 0x00, 0x00, 0x00}, 0x00},
 {"js", 0x00, 0x00, 0x78, 0x00, {__REL_8, 0x00, 0x00, 0x00}, 0x00},
 {"jns", 0x00, 0x00, 0x79, 0x00, {__REL_8, 0x00, 0x00, 0x00}, 0x00},
 {"jp", 0x00, 0x00, 0x7a, 0x00, {__REL_8, 0x00, 0x00, 0x00}, 0x00},
 {"jnp", 0x00, 0x00, 0x7b, 0x00, {__REL_8, 0x00, 0x00, 0x00}, 0x00},
 {"jl", 0x00, 0x00, 0x7c, 0x00, {__REL_8, 0x00, 0x00, 0x00}, 0x00},
 {"jnl", 0x00, 0x00, 0x7d, 0x00, {__REL_8, 0x00, 0x00, 0x00}, 0x00},
 {"jle", 0x00, 0x00, 0x7e, 0x00, {__REL_8, 0x00, 0x00, 0x00}, 0x00},
 {"jnle", 0x00, 0x00, 0x7f, 0x00, {__REL_8, 0x00, 0x00, 0x00}, 0x00},
 {"add", 0x00, 0x00, 0x80, 0x00, {__RM8, __IMM8, 0x00, 0x00}, 0x01},
 {"or", 0x00, 0x00, 0x80, 0x00, {__RM8, __IMM8, 0x00, 0x00}, 0x02},
 {"adc", 0x00, 0x00, 0x80, 0x00, {__RM8, __IMM8, 0x00, 0x00}, 0x03},
 {"sbb", 0x00, 0x00, 0x80, 0x00, {__RM8, __IMM8, 0x00, 0x00}, 0x04},
 {"and", 0x00, 0x00, 0x80, 0x00, {__RM8, __IMM8, 0x00, 0x00}, 0x05},
 {"sub", 0x00, 0x00, 0x80, 0x00, {__RM8, __IMM8, 0x00, 0x00}, 0x06},
 {"xor", 0x00, 0x00, 0x80, 0x00, {__RM8, __IMM8, 0x00, 0x00}, 0x07},
 {"cmp", 0x00, 0x00, 0x80, 0x00, {__RM8, __IMM8, 0x00, 0x00}, 0x08},
 {"add", 0x00, 0x00, 0x81, 0x00, {__RM163264, __IMM1632, 0x00, 0x00}, 0x01},
 {"or", 0x00, 0x00, 0x81, 0x00, {__RM163264, __IMM1632, 0x00, 0x00}, 0x02},
 {"adc", 0x00, 0x00, 0x81, 0x00, {__RM163264, __IMM1632, 0x00, 0x00}, 0x03},
 {"sbb", 0x00, 0x00, 0x81, 0x00, {__RM163264, __IMM1632, 0x00, 0x00}, 0x04},
 {"and", 0x00, 0x00, 0x81, 0x00, {__RM163264, __IMM1632, 0x00, 0x00}, 0x05},
 {"sub", 0x00, 0x00, 0x81, 0x00, {__RM163264, __IMM1632, 0x00, 0x00}, 0x06},
 {"xor", 0x00, 0x00, 0x81, 0x00, {__RM163264, __IMM1632, 0x00, 0x00}, 0x07},
 {"cmp", 0x00, 0x00, 0x81, 0x00, {__RM163264, __IMM1632, 0x00, 0x00}, 0x08},
 {"add", 0x00, 0x00, 0x83, 0x00, {__RM163264, __IMM1632, 0x00, 0x00}, 0x01},
 {"or", 0x00, 0x00, 0x83, 0x00, {__RM163264, __IMM1632, 0x00, 0x00}, 0x02},
 {"adc", 0x00, 0x00, 0x83, 0x00, {__RM163264, __IMM1632, 0x00, 0x00}, 0x03},
 {"sbb", 0x00, 0x00, 0x83, 0x00, {__RM163264, __IMM1632, 0x00, 0x00}, 0x04},
 {"and", 0x00, 0x00, 0x83, 0x00, {__RM163264, __IMM1632, 0x00, 0x00}, 0x05},
 {"sub", 0x00, 0x00, 0x83, 0x00, {__RM163264, __IMM1632, 0x00, 0x00}, 0x06},
 {"xor", 0x00, 0x00, 0x83, 0x00, {__RM163264, __IMM1632, 0x00, 0x00}, 0x07},
 {"cmp", 0x00, 0x00, 0x83, 0x00, {__RM163264, __IMM1632, 0x00, 0x00}, 0x08},
};

#endif