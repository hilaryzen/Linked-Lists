struct node {
  int i;
  struct node *next;
};

void print_list(struct node *first);
struct node * insert_front(struct node *first, int data);
struct node * free_list(struct node *first);
struct node * remove_val(struct node *front, int data);
