#include <stdio.h>

int check_prime(int input) {
  if (input <= 1)
    return 0;
  int factor_count = 0;
  for (int check = 1; check <= input; check++) {
    if (input % check == 0)
      factor_count++;
  }
  return factor_count == 2;
}

int main() {
  printf("Enter number: ");
  int input;
  scanf("%d", &input);
  printf("Input number %d was %sprime", input,
         check_prime(input) ? "" : "not ");
}
