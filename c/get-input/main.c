#include <locale.h>
#include <stdio.h>

int main() {
  int numberInserted;
  printf("Insert a number:\n");
  scanf("%d", &numberInserted);
  printf("The number you have inserted is: %d\n", numberInserted);

  /* 
   * It's necessary to put an space before "%c" in scanf to avoid the defautl behaviour that gets the "\n" string
   * and not waits the user.
   * */
  char charInserted;
  printf("Insert a char: ");
  scanf(" %c", &charInserted);
  printf("The character you have inserted is: %c\n", charInserted);
  return 0;
}
