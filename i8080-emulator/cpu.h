//
//  cpu.h
//  i8080-emulator
//
//  Created by Shaun Karran on 16/11/2015.
//  Copyright © 2015 Shaun Karran. All rights reserved.
//

#ifndef cpu_h
#define cpu_h

#define ZERO_FLAG      (1 << 0)
#define SIGN_FLAG      (1 << 1)
#define PARITY_FLAG    (1 << 2)
#define CARRY_FLAG     (1 << 3)
#define AUX_CARRY_FLAG (1 << 4)

struct i8080 {
    unsigned char b, c;
    unsigned char d, e;
    unsigned char h, l;
    unsigned char a;
    unsigned char flags;
    unsigned char w, z;
    
    unsigned short sp; /* Stack pointer. */
    unsigned short pc; /* Program counter. */
    unsigned char  ir; /* Instruction register. */
    
    unsigned char *ram; // Not sure if RAM should be separate file?
};

struct i8080 cpu;

/* NOP instruction. */
void NOP();

/* HLT instruction. */
void HLT();

/* Carry bit instructions. */
void STC();
void CMC();

/* Single register instructions. */
void INR(char r);
void DCR(char r);
void CMA();
void DAA();

/* Data transfer instructions. */
void MOV(char r1, char r2);

void STAX_B(); //   0x02
void STAX_D(); //   0x12

void LDAX_B(); //   0x0A
void LDAX_D(); //   0x1A

void ADD(); //  0x00
void ADC(); //  0x00
void SUB(); //  0x00
void SBB(); //  0x00
void ANA(); //  0x00
void XRA(); //  0x00
void ORA(); //  0x00
void CMP(); //  0x00
/* Rotate accumulator instructions. */
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
/* Register pair instructions. */
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
/* Immediate instructions. */
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
/* Direct addressing instructions. */
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
/* Jump instructions. */
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
/* Call instructions. */
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
/* Return instructions. */
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00
void NOP(); //  0x00

/* RST instruction. */
void RST(); //  0x00

/* Interrupt flip-flop instructions. */
void NOP(); //  0x00
void NOP(); //  0x00
/* Input/Output instructions. */
void NOP(); //  0x00
void NOP(); //  0x00

void NOP(); //  0x00
void NOP(); //  0x00

#endif /* cpu_h */
