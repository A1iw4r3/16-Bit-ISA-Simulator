#include<iostream>
using namespace std;

int mov(int reg1, int reg2) {
    reg1 = reg2;
    reg2 = 0;
    return reg1;
}

int add(int reg1, int reg2) {
    reg1 += reg2;
    return reg1;
}

int sub(int reg1, int reg2) {
    reg1 -= reg2;
    return reg1;
}

int imul(int reg1, int reg2) {
    reg1 *= reg2;
    return reg1;
}

int divi(int reg1, int reg2) {
    if (reg2 == 0) {
        return -1; // return -1 to indicate division by zero
    }
    reg1 = reg1 / reg2;
    return reg1;
}

int inc(int reg) {
    return ++reg;
}

int dec(int reg) {
    return --reg;
}

int main() {
    int ax = 0, bx = 0, cx = 0, dx = 0;
    
    // Move values to registers
    ax = mov(ax, 0x10);
    bx = mov(bx, 0x4);
    cx = mov(cx, 0x2);
    
    // Perform arithmetic operations
    ax = add(ax, bx);
    ax = sub(ax, cx);
    ax = imul(ax, bx);
    ax = divi(ax, cx);
    
    // Increment and decrement
    bx = inc(bx);
    ax = dec(ax);
    
    // Display register values
    cout << "Final register values:" << endl;
    cout << "ax: " << ax << endl;
    cout << "bx: " << bx << endl;
    cout << "cx: " << cx << endl;
    cout << "dx: " << dx << endl;
    
    return 0;
}

