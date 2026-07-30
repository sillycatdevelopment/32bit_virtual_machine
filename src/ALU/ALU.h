//
// Created by murder on 28/07/26.
// Copyright (c) 2026 sillycatdev. All rights reserved.
//
#pragma once

#include "../Byte.h"
#include "../Word.h"

class ALU
{
public:
  // Arithmetic operators (Unsigned / Standard)
  Word ADD(Word &input1, Word &input2);
  Word SUB(Word &input1, Word &input2);
  Word MUL(Word &input1, Word &input2);
  Word DIV(Word &input1, Word &input2);
  Word MOD(Word &input1, Word &input2);

  // Arithmetic operators (Signed)
  Word SADD(Word &input1, Word &input2);
  Word SSUB(Word &input1, Word &input2);
  Word SMUL(Word &input1, Word &input2);
  Word SDIV(Word &input1, Word &input2);
  Word SMOD(Word &input1, Word &input2);

  // Bitwise Logic Operators
  Word AND(Word &input1, Word &input2);
  Word NAND(Word &input1, Word &input2);
  Word OR(Word &input1, Word &input2);
  Word NOR(Word &input1, Word &input2);
  Word XOR(Word &input1, Word &input2);
  Word XNOR(Word &input1, Word &input2);
  Word NOT(Word &input1);
  Word IMPLIES(Word &input1, Word &input2);
  Word NIMPLIES(Word &input1, Word &input2);

  // Shift operators
  Word SHL(Word &input1);
  Word SHR(Word &input1);
  Word SRA(Word &input1);
  Word ROL(Word &input1);
  Word ROR(Word &input1);

  // Comparison operators
  Word SLT(Word &input1, Word &input2);   // Signed Less Than
  Word ULT(Word &input1, Word &input2);  // Unsigned Less Than
};