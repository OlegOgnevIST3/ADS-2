// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double y = 1;
  for (int i = n; i > 0; i--) {
    y *= value;
  }
  return y;
}

uint64_t fact(uint16_t n) {
  uint64_t y = 1;
  for (int i = n; i >= 1; i--) {
    y *= i;
  }
  return y;
}

double calcItem(double x, uint16_t n) {
    return ((pown(x, n)) / (fact(n)));
}

double expn(double x, uint16_t count) {
  double y = 0;
  for (int i = count; i >= 0; i--) {
    y += calcItem(x, i);
  }
  return y;
}

double sinn(double x, uint16_t count) {
  double y = 0;
  for (int i = count; i > 0; i--) {
    double k = calcItem(x, 2 * i - 1);
    y += pown(-1, i - 1) * k;
  }
  return y;
}

double cosn(double x, uint16_t count) {
  double y = 0;
  for (int i = count; i > 0; i--) {
    double k = calcItem(x, 2 * i - 2);
    y += pown(-1, i - 1) * k;
  }
  return y;
}
