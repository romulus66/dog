//Exercise 3: Formatted Printing
#include <stdio.h>

int main()
{
  int age, height;

  puts("Please enter you age:	");
  scanf("%d", &age);
  puts("Please enter you height:	");
  scanf("%d", &height);

  printf("I am %d years old.\n", age);
  printf("I am %d inches tall.\n", height);

  return 0;
}
