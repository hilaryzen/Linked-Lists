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
  new->i = data;
  new->next = first;
  return new;
}

struct node * free_list(struct node *first) {
  struct node * copy = first;
  while (first != NULL) {
    first = first->next;
    free(copy);
    copy = first;
  }
  return first;
}

struct node * remove_val(struct node *front, int data) {
  if (front->i == data) {
    struct node * newFront = front->next;
    front->next = NULL;
    free_list(front);
    return newFront;
  }
  struct node * beginning = front;
  front = front->next;
  while (front != NULL) {
    if (front->i == data) {
      beginning->next = front->next;
      front->next = NULL;
      free_list(front);
      return beginning;
    }
  }
  return beginning;
}
