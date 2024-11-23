#include "Chip8.h"

void Chip8::doInit(){
    pc = 0x200;
    opcode = 0;
    I = 0;
    sp = 0;

    //some stuff should go here

    for (int i = 0; i < 80; ++i){
        memory[i] = chip8_fontset[i];
    }
}

void Chip8::doCycle(){

}

