// THIS IS A LINKED LIST
// demo 3 Feb 2016

#inclide "demo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Node* init_node() {
  // setup a node with NULL values
  Node *n = malloc(sizeof(*n));

  if (n == NULL) {
    // panic something died terribly
    fprintf(stderr, "init_node: malloc failed\n");
    exit(1);
  }

  n->data = NULL;
  n->next = NULL;
  return n;
}

Node* create_list() {
  return init_node();
}

Node* add_node(Node *list, char *str) {
  // go down list until we get to the end, then dump the node there
  // next node is null because we said so in init_node
  while (list->next != NULL) {
    // move the pointer along
    // we can do this without breaking the original list because the pointer is copied
    // this is how we get pointer to pointer shite when we DO need to change the original
    list = list->next;
  }
  list->next = init_node();
  // list->next->data = str; // this is super dangerous holy shit careful bro
  list->next->data = malloc(strlen(str) + 1);
  //do a malloc check at some point...
  strncpy(list->next->data, str, strlen(str + 1));
  return list->next;
}

void print_list(Node *list) {
  while (list->next != NULL) {
    printf("%s -> ", list->data);
    list = list->next;
  }

  printf("%s\n", list->data);
}

void destroy_list(Node *list) {
  // you could do this shit recrsively but you might blow the stack. so yeah.
}
