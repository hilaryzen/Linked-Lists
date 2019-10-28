#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
  struct node *fourthN;
  fourthN->i = 4;
  fourthN->next = NULL;

  /*
  struct node *front;
  front = insert_front(fourthN, 3);
  */
  print_list(insert_front(fourthN, 3));
  return 0;
}
