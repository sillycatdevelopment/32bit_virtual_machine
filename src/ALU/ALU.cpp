//
// Created by murder on 28/07/26.
// Copyright (c) 2026 sillycatdev. All rights reserved.
//
#include "ALU.h"

// --- Unsigned Arithmetic ---

Word ALU::ADD(Word &input1, Word &input2)
{
  uint32_t w1 = input1.GetValue();
  uint32_t w2 = input2.GetValue();

  return Word(w1 + w2);
}

Word ALU::SUB(Word &input1, Word &input2)
{
  uint32_t w1 = input1.GetValue();
  uint32_t w2 = input2.GetValue();

  return Word(w1 - w2);
}

Word ALU::MUL(Word &input1, Word &input2)
{
  uint32_t w1 = input1.GetValue();
  uint32_t w2 = input2.GetValue();

  return Word(w1 * w2);
}

Word ALU::DIV(Word &input1, Word &input2)
{
  uint32_t w1 = input1.GetValue();
  uint32_t w2 = input2.GetValue();

  if (w2 == 0)
    return Word(0);

  return Word(w1 / w2);
}

Word ALU::MOD(Word &input1, Word &input2)
{
  uint32_t w1 = input1.GetValue();
  uint32_t w2 = input2.GetValue();

  if (w2 == 0)
    return Word(0);

  return Word(w1 % w2);
}

// --- Signed Arithmetic ---

Word ALU::SADD(Word &input1, Word &input2)
{
  int32_t w1 = static_cast<int32_t>(input1.GetValue());
  int32_t w2 = static_cast<int32_t>(input2.GetValue());

  return Word(static_cast<uint32_t>(w1 + w2));
}

Word ALU::SSUB(Word &input1, Word &input2)
{
  int32_t w1 = static_cast<int32_t>(input1.GetValue());
  int32_t w2 = static_cast<int32_t>(input2.GetValue());

  return Word(static_cast<uint32_t>(w1 - w2));
}

Word ALU::SMUL(Word &input1, Word &input2)
{
  int32_t w1 = static_cast<int32_t>(input1.GetValue());
  int32_t w2 = static_cast<int32_t>(input2.GetValue());

  return Word(static_cast<uint32_t>(w1 * w2));
}

Word ALU::SDIV(Word &input1, Word &input2)
{
  int32_t w1 = static_cast<int32_t>(input1.GetValue());
  int32_t w2 = static_cast<int32_t>(input2.GetValue());

  if (w2 == 0)
    return Word(0);

  return Word(static_cast<uint32_t>(w1 / w2));
}

Word ALU::SMOD(Word &input1, Word &input2)
{
  int32_t w1 = static_cast<int32_t>(input1.GetValue());
  int32_t w2 = static_cast<int32_t>(input2.GetValue());

  if (w2 == 0)
    return Word(0);

  return Word(static_cast<uint32_t>(w1 % w2));
}

// --- Bitwise Logic ---

Word ALU::AND(Word &input1, Word &input2)
{
  uint32_t w1 = input1.GetValue();
  uint32_t w2 = input2.GetValue();

  return Word(w1 & w2);
}

Word ALU::NAND(Word &input1, Word &input2)
{
  uint32_t w1 = input1.GetValue();
  uint32_t w2 = input2.GetValue();

  return Word(~(w1 & w2));
}

Word ALU::OR(Word &input1, Word &input2)
{
  uint32_t w1 = input1.GetValue();
  uint32_t w2 = input2.GetValue();

  return Word(w1 | w2);
}

Word ALU::NOR(Word &input1, Word &input2)
{
  uint32_t w1 = input1.GetValue();
  uint32_t w2 = input2.GetValue();

  return Word(~(w1 | w2));
}

Word ALU::XOR(Word &input1, Word &input2)
{
  uint32_t w1 = input1.GetValue();
  uint32_t w2 = input2.GetValue();

  return Word(w1 ^ w2);
}

Word ALU::XNOR(Word &input1, Word &input2)
{
  uint32_t w1 = input1.GetValue();
  uint32_t w2 = input2.GetValue();

  return Word(~(w1 ^ w2));
}

Word ALU::NOT(Word &input1)
{
  uint32_t w1 = input1.GetValue();

  return Word(~w1);
}

Word ALU::IMPLIES(Word &input1, Word &input2)
{
  uint32_t w1 = input1.GetValue();
  uint32_t w2 = input2.GetValue();

  return Word(~w1 | w2);
}

Word ALU::NIMPLIES(Word &input1, Word &input2)
{
  uint32_t w1 = input1.GetValue();
  uint32_t w2 = input2.GetValue();

  return Word(w1 & ~w2);
}

// --- Shifts & Rotations ---

Word ALU::SHL(Word &input1)
{
  uint32_t w1 = input1.GetValue();

  return Word(w1 << 1);
}

Word ALU::SHR(Word &input1)
{
  uint32_t w1 = input1.GetValue();

  return Word(w1 >> 1);
}

Word ALU::SRA(Word &input1)
{
  int32_t w1 = static_cast<int32_t>(input1.GetValue());

  return Word(static_cast<uint32_t>(w1 >> 1));
}

Word ALU::ROL(Word &input1)
{
  uint32_t w1 = input1.GetValue();

  uint32_t result = (w1 << 1) | (w1 >> 31);
  return Word(result);
}

Word ALU::ROR(Word &input1)
{
  uint32_t w1 = input1.GetValue();

  uint32_t result = (w1 >> 1) | (w1 << 31);
  return Word(result);
}

// --- Comparisons ---

Word ALU::SLT(Word &input1, Word &input2)
{
  int32_t w1 = static_cast<int32_t>(input1.GetValue());
  int32_t w2 = static_cast<int32_t>(input2.GetValue());

  return Word(w1 < w2 ? 1 : 0);
}

Word ALU::ULT(Word &input1, Word &input2)
{
  uint32_t w1 = input1.GetValue();
  uint32_t w2 = input2.GetValue();

  return Word(w1 < w2 ? 1 : 0);
}