# Changelog: Virtual Machine Core Components
Date: July 28, 2026  
Author: murder(sillycatdev)  
Project: Custom 32-Bit Virtual Machine / Processor Architecture
  
  
# Summary of Work
Completed fundamental data wrappers for both Words(32-Bits) and Bytes(8-Bits) and built a fully comprehensive Arithmetic Logic Unit (ALU) supporting both unsigned and signed arithmetic, bitwise logic, rotations, shifts, and comparisons. Inspired by two main different ALU architectures, the Minecraft computer and the PlayStation 1.

# Detailed changes
## 1.Core Data Structures

- Byte Class: Implemented base 8-bit storage unit for low level memory and instruction alignment.
- Word Class: Implemented base 32-bit word abstraction layer playing as the primary data and register unit in the virtual machine.
  
## 2.32-Bit ALU implementation 
Added a complete ALU for operations based on C++ operators (+, -, *, /, %, etc.), taking inspiration from the Minecraft and PS1 ALU with the next operators.

- Unsigned / Standard Arithmetic
    - ADD, SUB, MUL
    - DIV, MOD (with division-by-zero safety checks returning 0)
- Signed Arithmetic (using int32_t casting for correct signed handling)
    - SADD, SSUB, SMUL
    - SDIV, SMOD
- Bitwise Logic Operators
    - Standard: AND, OR, XOR, NOT
    - Inverted/Extended: NAND, NOR, XNOR, IMPLIES, NIMPLIES
- Shift & Rotation Operations
    - SHL (Logical Shift Left), SHR (Logical Shift Right)
    - SRA (Arithmetic Shift Right, preserving sign bits)
    - ROL (Rotate Left), ROR (Rotate Right)
- Comparison operators
    - SLT (Signed Less Than: Outputs 1 or 0)
    - ULT (Unsigned Less Than: Outputs 1 or 0)