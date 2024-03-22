#include<iostream>
using namespace std;

// Function to move value from one register to another
int mov(int reg1, int reg2){
    reg1 = reg2;    // Move value from reg2 to reg1
    reg2 = 0;       // Clear reg2 (optional in this case)
    return reg1;    // Return the value in reg1
}

// Function to add values of two registers
int add(int reg1, int reg2){
    reg1 += reg2;   // Add value of reg2 to reg1
    return reg1;    // Return the result
}

// Function to subtract value of one register from another
int sub(int reg1, int reg2){
    reg1 -= reg2;   // Subtract value of reg2 from reg1
    return reg1;    // Return the result
}

// Function to multiply values of two registers
int imul(int reg1, int reg2){
    reg1 *= reg2;   // Multiply value of reg1 by reg2
    return reg1;    // Return the result
}

// Function to divide value of one register by another
int divi(int reg1, int reg2){
    if (reg2 == 0){ // Check if dividing by zero
        return -1;  // Return -1 to indicate error
    }
    reg1 = reg1 / reg2; // Divide reg1 by reg2
    return reg1;        // Return the result
}

// Function to increment the value of a register
int inc(int reg){
    return ++reg;   // Increment the value of reg and return
}

// Function to decrement the value of a register
int dec(int reg){
    return --reg;   // Decrement the value of reg and return
}

int main(){
    // Initialize registers ax, bx, cx, and dx to zero
    int ax = 0, bx = 0, cx = 0, dx = 0;
    
    // Display initial values of registers
    cout << "ax " << ax << endl;
    cout << "bx " << bx << endl;
    cout << "cx " << cx << endl;
    cout << "dx " << dx << endl;
    cout << endl;
    
    // Move values to registers
    cout << "mov ax, 0x10" << endl;
    ax = mov(ax, 0x10);
    cout << "ax " << ax << endl;
    cout << "bx " << bx << endl;
    cout << "cx " << cx << endl;
    cout << "dx " << dx << endl;
    cout << endl;
    
    cout << "mov bx, 0x4" << endl;
    bx = mov(bx, 0x4);
    cout << "ax " << ax << endl;
    cout << "bx " << bx << endl;
    cout << "cx " << cx << endl;
    cout << "dx " << dx << endl;
    cout << endl;
    
    // Addition
    cout << "Addition" << endl;
    cout << endl;
    cout << "add ax, bx" << endl;
    ax = add(ax, bx);
    cout << "ax " << ax << endl;
    cout << "bx " << bx << endl;
    cout << "cx " << cx << endl;
    cout << "dx " << dx << endl;
    cout << endl;
    
    // Subtraction
    cout << "Subtraction" << endl;
    cout << endl;
    cout << "sub ax, bx" << endl;
    ax = sub(ax, bx);
    cout << "ax " << ax << endl;
    cout << "bx " << bx << endl;
    cout << "cx " << cx << endl;
    cout << "dx " << dx << endl;
    cout << endl;
    
    // Multiplication
    cout << "Multiplication" << endl;
    cout << endl;
    cout << "imul ax, bx" << endl;
    ax = imul(ax, bx);
    cout << "ax " << ax << endl;
    cout << "bx " << bx << endl;
    cout << "cx " << cx << endl;
    cout << "dx " << dx << endl;
    cout << endl;
    
    // Move value to register
    cout << "mov cx, 0x2" << endl;
    cx = mov(cx, 0x2);
    cout << "ax " << ax << endl;
    cout << "bx " << bx << endl;
    cout << "cx " << cx << endl;
    cout << "dx " << dx << endl;
    cout << endl;
    
    // Division
    cout << "Division" << endl;
    cout << endl;
    cout << "div ax, cx" << endl;
    ax = divi(ax, cx);
    cout << "ax " << ax << endl;
    cout << "bx " << bx << endl;
    cout << "cx " << cx << endl;
    cout << "dx " << dx << endl;
    cout << endl;
    
    // Increment
    cout << "Increment" << endl;
    cout << endl;
    cout << "inc bx" << endl;
    bx = inc(bx);
    cout << "ax " << ax << endl;
    cout << "bx " << bx << endl;
    cout << "cx " << cx << endl;
    cout << "dx " << dx << endl;
    cout << endl;
    
    // Decrement
    cout << "Decrement" << endl;
    cout << endl;
    cout << "dec ax" << endl;
    ax = dec(ax);
    cout << "ax " << ax << endl;
    cout << "bx " << bx << endl;
    cout << "cx " << cx << endl;
    cout << "dx " << dx << endl;
    
    return 0;
}

