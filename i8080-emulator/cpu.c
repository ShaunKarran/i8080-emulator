//
//  cpu.c
//  i8080-emulator
//
//  Created by Shaun Karran on 16/11/2015.
//  Copyright © 2015 Shaun Karran. All rights reserved.
//

#include "cpu.h"

/* No operations are performed. */
void NOP()
{
    cpu.pc++;
}

/* Processor is stopped. */
void HLT()
{
    // TODO
}

/* Carry flag is set to 1. */
void STC()
{
    cpu.flags &= CARRY_FLAG;
    cpu.pc++;
}

/* Carry flag is flipped. */
void CMC()
{
    cpu.flags ^= CARRY_FLAG;
    cpu.pc++;
}

/* Contents of register r is incremented by 1. */
void INR(char r)
{
    r += 1;
    // TODO: What happens to flags?
    cpu.pc++;
}

/* Contents of register r is decremented by 1. */
void DCR(char r)
{
    r -= 1;
    // TODO: What happens to flags?
    cpu.pc++;
}

/* Contents of the accumulator is complemented. */
void CMA()
{
    cpu.a = ~cpu.a;
    cpu.pc++;
}

/* The eight-bit number in the accumulator is adjusted to form two four-bit
 *  Binary-Coded-Decimal digits by the following process:
 * If the value of the least significant 4 bits of the accumulator is greater
 *  than 9 or if the AC flag is set, 6 is added to the accumulator.
 * If the value of the most significant 4 bits of the accumulator is now greater
 *  than 9, or if the CY flag is set, 6 is added to the most significant 4 bits
 *  of the accumulator.
 */
void DAA()
{
    if (cpu.flags & AUX_CARRY_FLAG || (cpu.a & 0x0F) > 0x09)
    {
        cpu.a += 6;
    }
    if (cpu.flags & CARRY_FLAG || (cpu.a >> 4) > 0x09)
    {
        cpu.a += (0x06 << 4);
    }
    cpu.pc++;
}

/* Contents of r2 is moved into r1. */
void MOV(char r1, char r2)
{
    r1 = r2;
    cpu.pc++;
}

/*  */
void STAX(char r)
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}

/*  */
void NOP()
{
    // TODO
}
