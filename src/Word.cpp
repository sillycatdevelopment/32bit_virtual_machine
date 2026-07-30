//
// Created by murder on 28/07/26.
// Copyright (c) 2026 sillycatdev. All rights reserved.
//
#include "Word.h"

#include <stdexcept>

Word::Word()
  : data(0)
{}

Word::Word(uint32_t value)
  : data(value)
{}

uint32_t Word::GetValue() const
{
  return data;
}

uint8_t Word::GetByte(int index) const
{
  // Ensure the index is strictly between 0 and 3
  if (index < 0 || index > 3)
  {
    throw std::out_of_range("Byte index must be between 0 and 3!");
  }

  return (data >> (index * 8)) & 0xFF;
}