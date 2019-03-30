#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Simple singly linked list
// Currently, data is uint32 values
// Experimenting with the interface
// Errors?

struct node {
  int32_t data;
  struct node *next;
};

typedef struct node list;

static inline list *new_node() {
  list *l;
  l = malloc(sizeof(*l));
  // TODO: error no malloc
  l->next = NULL;
  return l;
};

static inline void insert_value(list **l, int32_t data) {
  list *new = new_node();
  new->next = *l;
  new->data = data;
  *l = new;
}

int main() {
  list *l = new_node();
  insert_value(&l, 1);
  insert_value(&l, 2);
  insert_value(&l, 3);
  insert_value(&l, 4);

  while (l->next) {
    printf("%d\n", l->data);
    l = l->next;
  }
}
