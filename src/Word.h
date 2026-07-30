//
// Created by murder on 28/07/26.
// Copyright (c) 2026 sillycatdev. All rights reserved.
//
#pragma once
#include <cstdint>

class Word
{
public:
  Word();
  Word(uint32_t value);

  [[nodiscard]] uint32_t GetValue() const;
  [[nodiscard]] uint8_t GetByte(int index) const;

private:
  uint32_t data;
};
