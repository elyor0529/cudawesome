/*
 * @Name: random.h
 * @Description: Common utilities for random sequence generation.
 *
 * @Author: Giacomo Marciani <gmarciani@acm.org>
 * @Institution: University of Rome Tor Vergata
 */

#ifndef __RANDOM_H__
#define __RANDOM_H__

#define MIN 1
#define MAX 10

static int random_int(const int min, const int max) {
  return (rand() % (max + 1 - min)) + min;
}

static void random_matrix_double(double *a, const unsigned int rows, const unsigned int cols) {
  for (unsigned int i = 0; i < rows * cols; i++) {
    a[i] = (double) rand();
  }
}

static void random_matrix_float(float *a, const unsigned int rows, const unsigned int cols) {
  for (unsigned int i = 0; i < rows * cols; i++) {
    a[i] = (float) rand();
  }
}

static void random_matrix_int(int *a, const unsigned int rows, const unsigned int cols) {
  for (unsigned int i = 0; i < rows * cols; i++) {
    a[i] = random_int(MIN, MAX);
  }
}

static void random_matrix_int_2(int *a, const int rows, const int cols) {
  for (int r = 0; r < rows; r++) {
    for (int c = 0; c < cols; c++) {
      const int pos = (r * cols) + c;
      a[pos] = random_int(MIN, MAX);
    }
  }
}

static void random_matrix_int_3(int *a, const int rows, const int cols, const int dimz) {
  for (int z = 0; z < dimz; z++) {
    for (int r = 0; r < rows; r++) {
      for (int c = 0; c < cols; c++) {
        const int pos = (z * rows * cols) + (r * cols) + c;
        a[pos] = random_int(MIN, MAX);
      }
    }
  }
}

static void random_matrix_long(long *a, const unsigned int rows, const unsigned int cols) {
  for (unsigned int i = 0; i < rows * cols; i++) {
    a[i] = (long) rand();
  }
}

static void random_matrix_short(short *a, const unsigned int rows, const unsigned int cols) {
  for (unsigned int i = 0; i < rows * cols; i++) {
    a[i] = (short )rand();
  }
}

static void random_matrix_double_2d(double **a, const unsigned int rows, const unsigned int cols) {
  for (unsigned int r = 0; r < rows; r++) {
    for (unsigned int c = 0; c < cols; c++) {
      a[r][c] = (double) rand();
    }
  }
}

static void random_matrix_float_2d(float **a, const unsigned int rows, const unsigned int cols) {
  for (unsigned int r = 0; r < rows; r++) {
    for (unsigned int c = 0; c < cols; c++) {
      a[r][c] = (float) rand();
    }
  }
}

static void random_matrix_int_2d(int **a, const unsigned int rows, const unsigned int cols) {
  for (unsigned int r = 0; r < rows; r++) {
    for (unsigned int c = 0; c < cols; c++) {
      a[r][c] = (int) rand();
    }
  }
}

static void random_matrix_long_2d(long **a, const unsigned int rows, const unsigned int cols) {
  for (unsigned int r = 0; r < rows; r++) {
    for (unsigned int c = 0; c < cols; c++) {
      a[r][c] = (long) rand();
    }
  }
}

static void random_matrix_short_2d(short **a, const unsigned int rows, const unsigned int cols) {
  for (unsigned int r = 0; r < rows; r++) {
    for (unsigned int c = 0; c < cols; c++) {
      a[r][c] = (short) rand();
    }
  }
}

static void random_matrix_double_3d(double ***a, const unsigned int rows, const unsigned int cols, const unsigned int dimz) {
  for (unsigned int z = 0; z < dimz; z++) {
    for (unsigned int r = 0; r < rows; r++) {
      for (unsigned int c = 0; c < cols; c++) {
        a[z][r][c] = (double) rand();
      }
    }
  }
}

static void random_matrix_float_3d(float ***a, const unsigned int rows, const unsigned int cols, const unsigned int dimz) {
  for (unsigned int z = 0; z < dimz; z++) {
    for (unsigned int r = 0; r < rows; r++) {
      for (unsigned int c = 0; c < cols; c++) {
        a[z][r][c] = (float) rand();
      }
    }
  }
}

static void random_matrix_int_3d(int ***a, const unsigned int rows, const unsigned int cols, const unsigned int dimz) {
  for (unsigned int z = 0; z < dimz; z++) {
    for (unsigned int r = 0; r < rows; r++) {
      for (unsigned int c = 0; c < cols; c++) {
        a[z][r][c] = (int) rand();
      }
    }
  }
}

static void random_matrix_long_3d(long ***a, const unsigned int rows, const unsigned int cols, const unsigned int dimz) {
  for (unsigned int z = 0; z < dimz; z++) {
    for (unsigned int r = 0; r < rows; r++) {
      for (unsigned int c = 0; c < cols; c++) {
        a[z][r][c] = (long) rand();
      }
    }
  }
}

static void random_matrix_short_3d(short ***a, const unsigned int rows, const unsigned int cols, const unsigned int dimz) {
  for (unsigned int z = 0; z < dimz; z++) {
    for (unsigned int r = 0; r < rows; r++) {
      for (unsigned int c = 0; c < cols; c++) {
        a[z][r][c] = (short) rand();
      }
    }
  }
}

static void random_vector_double(double *a, const unsigned int n) {
  for (unsigned int i = 0; i < n; i++) {
    a[i] = (double) rand();
  }
}

static void random_vector_float(float *a, const unsigned int n) {
  for (unsigned int i = 0; i < n; i++) {
    a[i] = (float) rand();
  }
}

static void random_vector_int(int *a, const unsigned int n) {
  for (unsigned int i = 0; i < n; i++) {
    a[i] = rand();
  }
}

static void random_vector_long(long *a, const unsigned int n) {
  for (unsigned int i = 0; i < n; i++) {
    a[i] = (long) rand();
  }
}

static void random_vector_short(short *a, const unsigned int n) {
  for (unsigned int i = 0; i < n; i++) {
    a[i] = (short) rand();
  }
}

#endif  // __RANDOM_H__
