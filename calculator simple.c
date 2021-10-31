#include <stdio.h>
int main() {
  char o;	
  double n1,n2;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &o);
  printf("Enter two operands: ");
  scanf("%lf %lf", &n1, &n2);

  switch (o) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", n1,n2, n1 + n2);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", n1,n2, n1 - n2);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", n1,n2, n1 * n2);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", n1,n2, n1 / n2);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
