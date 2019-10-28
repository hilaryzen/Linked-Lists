#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
  struct node *fourthN = malloc(sizeof(struct node));
  fourthN->i = 4;
  fourthN->next = NULL;


  struct node *front;
  front = insert_front(fourthN, 3);
  front = insert_front(front, 2);
  front = insert_front(front, 1);

  print_list(front);
  front = remove_val(front, 2);
  print_list(front);
  front = remove_val(front, 1);
  print_list(front);
  free_list(front);
  return 0;
}
