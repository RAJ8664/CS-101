#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double solve(int n, double X[2][n], double Y[2][n]) {
  double result = 0;
  for (int i = 0; i < n; i++) {
    double term = abs(pow(X[1][i] - X[0][i], 2) - pow(Y[1][i] - Y[0][i], 2));
    result += sqrt(term);
  }
  return result / n;
}
int main() {
    //example;
  int n = 10;
  double X[2][n];
  double Y[2][n];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < n; j++) {
      X[i][j] = rand();
      Y[i][j] = rand();
    }
  }
  double result = solve(n, X, Y);
  printf("Result: %f\n", result);
  return 0;
}
