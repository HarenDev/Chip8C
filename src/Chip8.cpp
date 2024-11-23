#include "Chip8.h"
#include <iostream>
#include <cstdio>

using namespace std;

void Chip8::doInit(){
    pc = 0x200;
    opcode = 0;
    I = 0;
    sp = 0;

    //Setup Graphics & Other stuff

    for (int i = 0; i < 80; ++i){
        memory[i] = chip8_fontset[i];
    }
}

void Chip8::doLoad(FILE* ROM){

    cout << ROM;

    // for (int i = 0; i < bufferSize; ++i){

    // }
}

void Chip8::doCycle(){

}

