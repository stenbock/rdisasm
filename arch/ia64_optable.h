#ifndef __IA64_OPTABLE_H__
#define __IA64_OPTABLE_H__

#include <stdint.h>

#define IA64_NUM_INSTR (sizeof(ia64_optab)/sizeof(ia64_optab[1]))
//236

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
#define __SREG      0x17
#define __EDX       0x18
#define __M         0x19
#define __REG3216_1 0x1a
#define __REG3216_2 0x1b
#define __REG3216_3 0x1c
#define __REG3216_4 0x1d
#define __REG3216_5 0x1e
#define __REG3216_6 0x1f
#define __REG3216_7 0x20
#define __REG3216_8 0x21
#define __IMM64     0x22
#define __EAX       0x23
#define __REG8_1    0x24
#define __REG8_2    0x25
#define __REG8_3    0x26
#define __REG8_4    0x27
#define __REG8_5    0x28
#define __REG8_6    0x29
#define __REG8_7    0x2a
#define __REG8_8    0x2b
#define __IMM16     0x2c
#define __ONE       0x2d
#define __CL        0x2e
#define __STL       0x2f

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
 {"test", 0x00, 0x00, 0x84, 0x00, {__RM8, __R8, 0x00, 0x00}, 0x00},
 {"test", 0x00, 0x00, 0x85, 0x00, {__RM163264, __R163264, 0x00, 0x00}, 0x00}, // 16/32
 {"xchg", 0x00, 0x00, 0x86, 0x00, {__RM8, __R8, 0x00, 0x00}, 0x00},
 {"xchg", 0x00, 0x00, 0x87, 0x00, {__RM163264, __R163264, 0x00, 0x00}, 0x00}, // 16/32
 {"mov", 0x00, 0x00, 0x88, 0x00, {__RM8, __R8, 0x00, 0x00}, 0x00},
 {"mov", 0x00, 0x00, 0x89, 0x00, {__RM163264, __R163264, 0x00, 0x00}, 0x00}, // 16/32
 {"mov", 0x00, 0x00, 0x8a, 0x00, {__R8, __RM8, 0x00, 0x00}, 0x00},
 {"mov", 0x00, 0x00, 0x8b, 0x00, {__R163264, __RM163264, 0x00, 0x00}, 0x00}, // 16/32
 {"mov", 0x00, 0x00, 0x8c, 0x00, {__RM163264, __SREG, 0x00, 0x00}, 0x00}, // m16 r16/32
 {"lea", 0x00, 0x00, 0x8d, 0x00, {__RM163264, __M, 0x00, 0x00}, 0x00}, // r16/32 m
 {"mov", 0x00, 0x00, 0x8e, 0x00, {__SREG, __RM163264, 0x00, 0x00}, 0x00}, // r/m16
 {"pop", 0x00, 0x00, 0x8f, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x00},
 {"nop", 0x00, 0x00, 0x90, 0x00, {0x00, 0x00, 0x00, 0x00}, 0x00}, // xchg eax, eax
 {"pause", 0xF3, 0x00, 0x90, 0x00, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"xchg", 0x00, 0x00, 0x91, 0x00, {__RAX, __REG3216_2, 0x00, 0x00}, 0x00},
 {"xchg", 0x00, 0x00, 0x92, 0x00, {__RAX, __REG3216_3, 0x00, 0x00}, 0x00},
 {"xchg", 0x00, 0x00, 0x93, 0x00, {__RAX, __REG3216_4, 0x00, 0x00}, 0x00},
 {"xchg", 0x00, 0x00, 0x94, 0x00, {__RAX, __REG3216_5, 0x00, 0x00}, 0x00},
 {"xchg", 0x00, 0x00, 0x95, 0x00, {__RAX, __REG3216_6, 0x00, 0x00}, 0x00},
 {"xchg", 0x00, 0x00, 0x96, 0x00, {__RAX, __REG3216_7, 0x00, 0x00}, 0x00},
 {"xchg", 0x00, 0x00, 0x97, 0x00, {__RAX, __REG3216_8, 0x00, 0x00}, 0x00},
 //{"cbw", 0x00, 0x00, 0x98, 0x00, {__AX, __AL, 0x00, 0x00}, 0x00},
 {"cbde", 0x00, 0x00, 0x98, 0x00, {__RAX, __AL, 0x00, 0x00}, 0x00},
 {"cdq", 0x00, 0x00, 0x99, 0x00, {__EDX, __RAX, 0x00, 0x00}, 0x00}, // CWD
 // 9a CALLF ptr16:16/32?
 {"wait", 0x00, 0x00, 0x9b, 0x00, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"pushfq", 0x00, 0x00, 0x9c, 0x00, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"popfq", 0x00, 0x00, 0x9d, 0x00, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"sahf", 0x00, 0x00, 0x9e, 0x00, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"lahf", 0x00, 0x00, 0x9f, 0x00, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"movabs", 0x00, 0x00, 0xa0, 0x00, {__AL, __IMM64, 0x00, 0x00}, 0x00},
 {"movabs", 0x00, 0x00, 0xa1, 0x00, {__EAX, __IMM64, 0x00, 0x00}, 0x00},
 {"movabs", 0x00, 0x00, 0xa2, 0x00, {__IMM64, __AL, 0x00, 0x00}, 0x00},
 {"movabs", 0x00, 0x00, 0xa3, 0x00, {__IMM64, __EAX, 0x00, 0x00}, 0x00},
 {"movsb", 0x00, 0x00, 0xa4, 0x00, {__RDI_BYTE, __RSI_BYTE, 0x00, 0x00}, 0x00},
 {"movsd", 0x00, 0x00, 0xa5, 0x00, {__RDI_DWORD, __RSI_DWORD, 0x00, 0x00}, 0x00},
 {"cmpsb", 0x00, 0x00, 0xa6, 0x00, {__RSI_BYTE, __RDI_BYTE, 0x00, 0x00}, 0x00},
 {"cmpsd", 0x00, 0x00, 0xa7, 0x00, {__RSI_DWORD, __RDI_DWORD, 0x00, 0x00}, 0x00},
 {"test", 0x00, 0x00, 0xa8, 0x00, {__AL, __IMM8, 0x00, 0x00}, 0x00},
 {"test", 0x00, 0x00, 0xa9, 0x00, {__RAX, __IMM1632, 0x00, 0x00}, 0x00},
 {"stosb", 0x00, 0x00, 0xaa, 0x00, {__RDI_BYTE, __AL, 0x00, 0x00}, 0x00},
 {"stosd", 0x00, 0x00, 0xab, 0x00, {__RDI_DWORD, __EAX, 0x00, 0x00}, 0x00},
 {"lodsb", 0x00, 0x00, 0xac, 0x00, {__AL, __RSI_BYTE, 0x00, 0x00}, 0x00},
 {"lodsw", 0x00, 0x00, 0xad, 0x00, {__EAX, __RSI_DWORD, 0x00, 0x00}, 0x00},
 {"scasb", 0x00, 0x00, 0xae, 0x00, {__AL, __RDI_BYTE, 0x00, 0x00}, 0x00},
 {"scasw", 0x00, 0x00, 0xaf, 0x00, {__EAX, __RDI_DWORD, 0x00, 0x00}, 0x00},
 {"mov", 0x00, 0x00, 0xb0, 0x00, {__REG8_1, __IMM8, 0x00, 0x00}, 0x00},
 {"mov", 0x00, 0x00, 0xb1, 0x00, {__REG8_2, __IMM8, 0x00, 0x00}, 0x00},
 {"mov", 0x00, 0x00, 0xb2, 0x00, {__REG8_3, __IMM8, 0x00, 0x00}, 0x00},
 {"mov", 0x00, 0x00, 0xb3, 0x00, {__REG8_4, __IMM8, 0x00, 0x00}, 0x00},
 {"mov", 0x00, 0x00, 0xb4, 0x00, {__REG8_5, __IMM8, 0x00, 0x00}, 0x00},
 {"mov", 0x00, 0x00, 0xb5, 0x00, {__REG8_6, __IMM8, 0x00, 0x00}, 0x00},
 {"mov", 0x00, 0x00, 0xb6, 0x00, {__REG8_7, __IMM8, 0x00, 0x00}, 0x00},
 {"mov", 0x00, 0x00, 0xb7, 0x00, {__REG8_8, __IMM8, 0x00, 0x00}, 0x00},
 {"mov", 0x00, 0x00, 0xb8, 0x00, {__REG3216_1, __IMM1632, 0x00, 0x00}, 0x00},
 {"mov", 0x00, 0x00, 0xb9, 0x00, {__REG3216_2, __IMM1632, 0x00, 0x00}, 0x00},
 {"mov", 0x00, 0x00, 0xba, 0x00, {__REG3216_3, __IMM1632, 0x00, 0x00}, 0x00},
 {"mov", 0x00, 0x00, 0xbb, 0x00, {__REG3216_4, __IMM1632, 0x00, 0x00}, 0x00},
 {"mov", 0x00, 0x00, 0xbc, 0x00, {__REG3216_5, __IMM1632, 0x00, 0x00}, 0x00},
 {"mov", 0x00, 0x00, 0xbd, 0x00, {__REG3216_6, __IMM1632, 0x00, 0x00}, 0x00},
 {"mov", 0x00, 0x00, 0xbe, 0x00, {__REG3216_7, __IMM1632, 0x00, 0x00}, 0x00},
 {"mov", 0x00, 0x00, 0xbf, 0x00, {__REG3216_8, __IMM1632, 0x00, 0x00}, 0x00},
 {"rol", 0x00, 0x00, 0xc0, 0x00, {__RM8, __IMM8, 0x00, 0x00}, 0x01},
 {"ror", 0x00, 0x00, 0xc0, 0x00, {__RM8, __IMM8, 0x00, 0x00}, 0x02},
 {"rcl", 0x00, 0x00, 0xc0, 0x00, {__RM8, __IMM8, 0x00, 0x00}, 0x03},
 {"rcr", 0x00, 0x00, 0xc0, 0x00, {__RM8, __IMM8, 0x00, 0x00}, 0x04},
 {"shl", 0x00, 0x00, 0xc0, 0x00, {__RM8, __IMM8, 0x00, 0x00}, 0x05},
 {"shr", 0x00, 0x00, 0xc0, 0x00, {__RM8, __IMM8, 0x00, 0x00}, 0x06},
 {"shl", 0x00, 0x00, 0xc0, 0x00, {__RM8, __IMM8, 0x00, 0x00}, 0x07},
 {"sar", 0x00, 0x00, 0xc0, 0x00, {__RM8, __IMM8, 0x00, 0x00}, 0x08},
 {"rol", 0x00, 0x00, 0xc1, 0x00, {__RM163264, __IMM8, 0x00, 0x00}, 0x01},
 {"ror", 0x00, 0x00, 0xc1, 0x00, {__RM163264, __IMM8, 0x00, 0x00}, 0x02},
 {"rcl", 0x00, 0x00, 0xc1, 0x00, {__RM163264, __IMM8, 0x00, 0x00}, 0x03},
 {"rcr", 0x00, 0x00, 0xc1, 0x00, {__RM163264, __IMM8, 0x00, 0x00}, 0x04},
 {"shl", 0x00, 0x00, 0xc1, 0x00, {__RM163264, __IMM8, 0x00, 0x00}, 0x05},
 {"shr", 0x00, 0x00, 0xc1, 0x00, {__RM163264, __IMM8, 0x00, 0x00}, 0x06},
 {"shl", 0x00, 0x00, 0xc1, 0x00, {__RM163264, __IMM8, 0x00, 0x00}, 0x07},
 {"sar", 0x00, 0x00, 0xc1, 0x00, {__RM163264, __IMM8, 0x00, 0x00}, 0x08},
 {"retn", 0x00, 0x00, 0xc2, 0x00, {__IMM16, 0x00, 0x00, 0x00}, 0x00},
 {"retn", 0x00, 0x00, 0xc3, 0x00, {0x00, 0x00, 0x00, 0x00}, 0x00},
// c4 LES
// c5 LDS
 {"mov", 0x00, 0x00, 0xc6, 0x00, {__RM8, __R8, 0x00, 0x00}, 0x01},
 {"mov", 0x00, 0x00, 0xc7, 0x00, {__RM163264, __R163264, 0x00, 0x00}, 0x01},
 {"enter", 0x00, 0x00, 0xc8, 0x00, {__IMM16, __IMM8, 0x00, 0x00}, 0x00},
 {"leave", 0x00, 0x00, 0xc9, 0x00, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"retf", 0x00, 0x00, 0xca, 0x00, {__IMM16, 0x00, 0x00, 0x00}, 0x00},
 {"retf", 0x00, 0x00, 0xcb, 0x00, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"int3", 0x00, 0x00, 0xcc, 0x00, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"int", 0x00, 0x00, 0xcd, 0x00, {__IMM8, 0x00, 0x00, 0x00}, 0x00},
 {"iretd", 0x00, 0x00, 0xce, 0x00, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"rol", 0x00, 0x00, 0xd0, 0x00, {__RM8, __ONE, 0x00, 0x00}, 0x01},
 {"ror", 0x00, 0x00, 0xd0, 0x00, {__RM8, __ONE, 0x00, 0x00}, 0x02},
 {"rcl", 0x00, 0x00, 0xd0, 0x00, {__RM8, __ONE, 0x00, 0x00}, 0x03},
 {"rcr", 0x00, 0x00, 0xd0, 0x00, {__RM8, __ONE, 0x00, 0x00}, 0x04},
 {"shl", 0x00, 0x00, 0xd0, 0x00, {__RM8, __ONE, 0x00, 0x00}, 0x05},
 {"shr", 0x00, 0x00, 0xd0, 0x00, {__RM8, __ONE, 0x00, 0x00}, 0x06},
 {"sal", 0x00, 0x00, 0xd0, 0x00, {__RM8, __ONE, 0x00, 0x00}, 0x07},
 {"sar", 0x00, 0x00, 0xd0, 0x00, {__RM8, __ONE, 0x00, 0x00}, 0x08},
 {"rol", 0x00, 0x00, 0xd1, 0x00, {__RM163264, __ONE, 0x00, 0x00}, 0x01},
 {"ror", 0x00, 0x00, 0xd1, 0x00, {__RM163264, __ONE, 0x00, 0x00}, 0x02},
 {"rcl", 0x00, 0x00, 0xd1, 0x00, {__RM163264, __ONE, 0x00, 0x00}, 0x03},
 {"rcr", 0x00, 0x00, 0xd1, 0x00, {__RM163264, __ONE, 0x00, 0x00}, 0x04},
 {"shl", 0x00, 0x00, 0xd1, 0x00, {__RM163264, __ONE, 0x00, 0x00}, 0x05},
 {"shr", 0x00, 0x00, 0xd1, 0x00, {__RM163264, __ONE, 0x00, 0x00}, 0x06},
 {"sal", 0x00, 0x00, 0xd1, 0x00, {__RM163264, __ONE, 0x00, 0x00}, 0x07},
 {"sar", 0x00, 0x00, 0xd1, 0x00, {__RM163264, __ONE, 0x00, 0x00}, 0x08},
 {"rol", 0x00, 0x00, 0xd2, 0x00, {__RM8, __CL, 0x00, 0x00}, 0x01},
 {"ror", 0x00, 0x00, 0xd2, 0x00, {__RM8, __CL, 0x00, 0x00}, 0x02},
 {"rcl", 0x00, 0x00, 0xd2, 0x00, {__RM8, __CL, 0x00, 0x00}, 0x03},
 {"rcr", 0x00, 0x00, 0xd2, 0x00, {__RM8, __CL, 0x00, 0x00}, 0x04},
 {"shl", 0x00, 0x00, 0xd2, 0x00, {__RM8, __CL, 0x00, 0x00}, 0x05},
 {"shr", 0x00, 0x00, 0xd2, 0x00, {__RM8, __CL, 0x00, 0x00}, 0x06},
 {"sal", 0x00, 0x00, 0xd2, 0x00, {__RM8, __CL, 0x00, 0x00}, 0x07},
 {"sar", 0x00, 0x00, 0xd2, 0x00, {__RM8, __CL, 0x00, 0x00}, 0x08},
 {"rol", 0x00, 0x00, 0xd3, 0x00, {__RM163264, __CL, 0x00, 0x00}, 0x01},
 {"ror", 0x00, 0x00, 0xd3, 0x00, {__RM163264, __CL, 0x00, 0x00}, 0x02},
 {"rcl", 0x00, 0x00, 0xd3, 0x00, {__RM163264, __CL, 0x00, 0x00}, 0x03},
 {"rcr", 0x00, 0x00, 0xd3, 0x00, {__RM163264, __CL, 0x00, 0x00}, 0x04},
 {"shl", 0x00, 0x00, 0xd3, 0x00, {__RM163264, __CL, 0x00, 0x00}, 0x05},
 {"shr", 0x00, 0x00, 0xd3, 0x00, {__RM163264, __CL, 0x00, 0x00}, 0x06},
 {"sal", 0x00, 0x00, 0xd3, 0x00, {__RM163264, __CL, 0x00, 0x00}, 0x07},
 {"sar", 0x00, 0x00, 0xd3, 0x00, {__RM163264, __CL, 0x00, 0x00}, 0x08},
 {"salc", 0x00, 0x00, 0xd6, 0x00, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"xlatb", 0x00, 0x00, 0xd7, 0x00, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fadd", 0x00, 0x00, 0xd8, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x01},
 {"fmul", 0x00, 0x00, 0xd8, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x02},
 {"fcom", 0x00, 0x00, 0xd8, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x03},
 {"fcomp", 0x00, 0x00, 0xd8, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x04},
 {"fsub", 0x00, 0x00, 0xd8, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x05},
 {"fsubr", 0x00, 0x00, 0xd8, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x06},
 {"fdiv", 0x00, 0x00, 0xd8, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x07},
 {"fdivr", 0x00, 0x00, 0xd8, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x08},
 {"fcom", 0x00, 0x00, 0xd8, 0xd1, {__STL, 0x00, 0x00, 0x00}, 0x00},
 {"fcomp", 0x00, 0x00, 0xd8, 0xd9, {__STL, 0x00, 0x00, 0x00}, 0x00},
 {"fxch", 0x00, 0x00, 0xd9, 0xc9, {__STL, 0x00, 0x00, 0x00}, 0x00},
 {"fnop", 0x00, 0x00, 0xd9, 0xd0, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fchs", 0x00, 0x00, 0xd9, 0xe0, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fabs", 0x00, 0x00, 0xd9, 0xe1, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"ftst", 0x00, 0x00, 0xd9, 0xe4, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fxam", 0x00, 0x00, 0xd9, 0xe5, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fld1", 0x00, 0x00, 0xd9, 0xe8, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fldl2t", 0x00, 0x00, 0xd9, 0xe9, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fldl2e", 0x00, 0x00, 0xd9, 0xea, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fldpi", 0x00, 0x00, 0xd9, 0xeb, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fldlg2", 0x00, 0x00, 0xd9, 0xec, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fldln2", 0x00, 0x00, 0xd9, 0xed, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"f2xm1", 0x00, 0x00, 0xd9, 0xf0, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fyl2x", 0x00, 0x00, 0xd9, 0xf1, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fptan", 0x00, 0x00, 0xd9, 0xf2, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fpatan", 0x00, 0x00, 0xd9, 0xf3, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fxtract", 0x00, 0x00, 0xd9, 0xf4, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fprem1", 0x00, 0x00, 0xd9, 0xf5, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fdecstp", 0x00, 0x00, 0xd9, 0xf6, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fincstp", 0x00, 0x00, 0xd9, 0xf7, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fprem", 0x00, 0x00, 0xd9, 0xf8, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fyl2xp1", 0x00, 0x00, 0xd9, 0xf9, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fsqrt", 0x00, 0x00, 0xd9, 0xfa, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fsincos", 0x00, 0x00, 0xd9, 0xfb, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"frndint", 0x00, 0x00, 0xd9, 0xfc, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fscale", 0x00, 0x00, 0xd9, 0xfd, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fsin", 0x00, 0x00, 0xd9, 0xfe, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fcos", 0x00, 0x00, 0xd9, 0xff, {0x00, 0x00, 0x00, 0x00}, 0x00},
 {"fld", 0x00, 0x00, 0xd9, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x01},
 {"fst", 0x00, 0x00, 0xd9, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x03},
 {"fstp", 0x00, 0x00, 0xd9, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x04},
 {"fldcw", 0x00, 0x00, 0xd9, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x05},
 {"fldenv", 0x00, 0x00, 0xd9, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x06},
 {"fnstenv", 0x00, 0x00, 0xd9, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x07},
 {"fnstcw", 0x00, 0x00, 0xd9, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x08},
 {"fiadd", 0x00, 0x00, 0xda, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x01},
 {"fimul", 0x00, 0x00, 0xda, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x02},
 {"ficom", 0x00, 0x00, 0xda, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x03},
 {"ficomp", 0x00, 0x00, 0xda, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x04},
 {"fisub", 0x00, 0x00, 0xda, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x05},
 {"fisubr", 0x00, 0x00, 0xda, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x06},
 {"fidiv", 0x00, 0x00, 0xda, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x07},
 {"fidivr", 0x00, 0x00, 0xda, 0x00, {__RM163264, 0x00, 0x00, 0x00}, 0x08},
 {"fucompp", 0x00, 0x00, 0xda, 0xe9, {0x00, 0x00, 0x00, 0x00}, 0x00},


};
#endif
