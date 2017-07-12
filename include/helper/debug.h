#ifndef HELPER_DEBUG
#define HELPER_DEBUG
#include "stdio.h"
#define PRINT(var,type)  printf( #var " : %" #type "\n", (var) )
#endif // HELPER_DEBUG
