#include <stdio.h>
#include "linkedlist.h"

void listInit(LinkedList *list) {
  list->head = NULL;
  list->tail = NULL;
  list->len = 0;
}

void listAdd(LinkedList *list,Item *item){
    // Implement your code here...
    
    list->head = item;
    list->tail = item;
    list->len = 1;
    item->next = NULL;
    
}