#include <stdio.h>
int main(void) {
  int length, width, area, parameter;
  
  printf("Enter the length and the width: ");
  scanf("%d %d", &length, &width);

  area = length * width;
  parameter = (length*2) + (width*2);

  printf("\nThe area is: %d\n", area);
  printf("The parameter is: %d", parameter);
  return 0;
}