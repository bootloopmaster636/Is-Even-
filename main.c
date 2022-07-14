#include <curses.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
  int num;
  char menu;
  bool res;

  do {
    // greetings!
    system("cls");
    printf("Want is odd or is even? 0dd / 3ven? ");
    menu = getch();

    switch (menu) {
    case '0':
      printf("Enter a number: ");
      scanf("%d", &num);
      res = (num % 2 != 0);
      printf("Is %d odd? %d (1 yes, 0 not)", num, res);
      break;

    case '3':
      printf("Enter a number: ");
      scanf("%d", &num);
      res = (num % 2 == 0);
      printf("Is %d even? %d (1 yes, 0 not)", num, res);
      break;

    case 27:
      printf("See you next time");
      break;

    default:
      break;
    }
    if (menu != 27)
      getch();

  } while (menu != 27);

  getch();
  return 0;
}
