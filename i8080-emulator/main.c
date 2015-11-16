//
//  main.c
//  i8080-emulator
//
//  Created by Shaun Karran on 9/11/2015.
//  Copyright © 2015 Shaun Karran. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#include "cpu.h"

int main(int argc, const char * argv[])
{
    /* Main processor execution loop. Should only exit on NOP instruction. */
    for (;;) {
        cpu.ir = cpu.ram[cpu.pc];
        
        instructions[cpu.ir]();
    }
    
    return EXIT_SUCCESS;
}
