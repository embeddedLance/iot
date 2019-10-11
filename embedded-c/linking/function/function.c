// author: ianw
// description:  separate file for functiona and variable declaration
// compiling:    gcc -S function.c

#include <stdio.h>

static int i = 100;

/* Declard as extern since defined in hello.c */
extern int global;

int function(char *input)
{
  printf("%s\n", input);
  return global;
}
