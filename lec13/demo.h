#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct node {
  char *data;
  struct node *next;
} Node;

Node* create_list();

void destroy_list(Node *list);

Node* add_node(Node *list, char *str);

void print_list(Node *list);

#endif
