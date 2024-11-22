#ifndef CHIP8C_H
#define CHIP8C_H

class Chip8 {
public:
    void doInit();
    void doCycle();
    void doLoad();

private:
    //variables
    unsigned short opcode; //2 byte long opcodes
    unsigned char memory[4096]; //4 kilobytes of memory
    unsigned char V[16]; //CPU Registers (15 8-bit general purpose registers and one 16-bit register)
    unsigned short I; //Index register
    unsigned short pc; //program counter
    unsigned char gfx[64 * 32];
    unsigned char delay_timer;
    unsigned char sound_timer;
    unsigned short stack[16];
    unsigned short sp;
    unsigned char key[16];

};

#endif // CHIP8C_H
