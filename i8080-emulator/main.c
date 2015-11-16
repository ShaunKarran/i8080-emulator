//
//  main.c
//  i8080-emulator
//
//  Created by Shaun Karran on 9/11/2015.
//  Copyright © 2015 Shaun Karran. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void decode_instruction(unsigned short *pc);

int main(int argc, const char * argv[])
{
    /* Internal registers. */
    unsigned char A;
    unsigned char B;
    unsigned char C;
    unsigned char D;
    unsigned char E;
    unsigned char H;
    unsigned char L;
    unsigned char W;
    unsigned char Z;
    
    unsigned short sp; /* Stack pointer. */
    unsigned short pc; /* Program counter. */
    unsigned char  ir; /* Instruction register. */
    
    /* Main processor execution loop. Should only exit on NOP instruction. */
    for (;;) {
        decode_instruction(&pc);
    }
    
    return EXIT_SUCCESS;
}

void decode_instruction(unsigned short *pc)
{
    switch (*pc)
    {
        case constant:
            <#statements#>
            break;
            
        default:
            break;
    }
}
