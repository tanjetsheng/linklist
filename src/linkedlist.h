#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H
#include "student.h"

typedef struct Item Item;
typedef struct LinkedList LinkedList;

struct Item {
  Item *next;
  void *data;
};

struct LinkedList{
  Item *head;
  Item *tail;
  int len;
};

void listInit(LinkedList *list);
void listAdd(LinkedList *list,Item *item);
Item *LinkRemove(LinkedList *list,char *name);
#endif // _LINKEDLIST_H
