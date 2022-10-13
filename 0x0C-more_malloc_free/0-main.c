#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  char *c;
  int *i;
  float *f;
  double *d;

  c = malloc_checked(sizeof(char) * 1024);
  printf("c is %p\n", (void *)c);
  i = malloc_checked(sizeof(int) * 402);
  printf("i is %p\n", (void *)i);
  f = malloc_checked(sizeof(float) * 100000000);
  printf("f is %p\n", (void *)f);
  d = malloc_checked(INT_MAX);
  printf("d is %p\n", (void *)d);
  free(c);
  free(i);
  free(f);
  free(d);
  return (0);
}
