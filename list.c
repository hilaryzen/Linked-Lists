#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void print_list(struct node *first) {
  printf("[ ");
  while (first != NULL) {
    if (first->next == NULL) {
      printf("%d ]\n", first->i);
    } else {
      printf("%d ", first->i);
    }
    first = first->next;
  }
}

struct node * insert_front(struct node *first, int data) {
  struct node *new = malloc(sizeof(struct node));
  new->i = 3;
  new->next = first;
  return new;
}
