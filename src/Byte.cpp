//
// Created by murder on 28/07/26.
// Copyright (c) 2026 sillycatdev. All rights reserved.
//
#include "Byte.h"

Byte::Byte()
  : data(0)
{
}

Byte::Byte(uint8_t value)
  : data(value)
{
}

uint8_t Byte::GetValue() const
{
  return data;
}
