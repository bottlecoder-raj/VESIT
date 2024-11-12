#include <stdio.h>

int sum(int k) {
  if (k > 1) {
    return k * sum(k - 1);  // Multiply k with the result of sum(k-1)
  } else { 
    return 1;  // Return 1 when k == 1 (base case for factorial)
  }
}

int main() {
  int result = sum(5);
  printf("%d", result);  // This will print 120 (5!)
  return 0;
}
