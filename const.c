#include <stdio.h>

double calculate() {
  const double pi = 3.1415;
  double radius = 10.0;
  double area = pi * radius * radius;  // Вычисление площади круга

  return area;
}

double test() {
  return 2.0 * 3.0;  // Должно стать 'ret double 6.0'
}

int main() {
  double result = calculate();
  printf("Result: %f\n", result);
  return 0;
}