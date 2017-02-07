// select which module to use for matrix data type
// This has to be done when testing each modules
//#include "matrix_static.h"
#include "matrix_dynamic.h"

// function prototypes

// matrix -> matrix
// returns a matrix with the rows and columbs fliped
// A_out[i,j] = A_in[j,i]
matrix transpose(matrix m);
