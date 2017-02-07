#include "transpose.h"

// matrix -> matrix
// returns a matrix with the rows and columbs fliped
// A_out[i,j] = A_in[j,i]

matrix transpose(matrix m) {
    matrix result = create_empty(m.col_dim, m.row_dim);

    for (int i = 0, x = m.col_dim; i < x; i++) {
        for (int j = 0, y = m.row_dim; j < y; j++) {
            result.element[i][j] = m.element[j][i];
        }
    }

    return result;
}
