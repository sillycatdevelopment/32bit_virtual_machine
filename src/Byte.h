//
// Created by murder on 28/07/26.
// Copyright (c) 2026 sillycatdev. All rights reserved.
//
#pragma once
#include <cstdint>

class Byte
{
public:
  Byte();
  Byte(uint8_t value);

  [[nodiscard]] uint8_t GetValue() const;

private:
  uint8_t data; // Make each byte exactly one byte
};
