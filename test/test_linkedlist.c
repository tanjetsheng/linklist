#include "unity.h"
#include "linkedlist.h"
#include "student.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_listInit_ensure_initialized_to_NULL_and_0(void){
  LinkedList list = {
    (Item *)-1,
    (Item *)-1,
    10
  };
  
  listInit(&list);
  
  TEST_ASSERT_NULL(list.head);
  TEST_ASSERT_NULL(list.tail);
  TEST_ASSERT_EQUAL(0,list.len);
  
    
}

void test_listAdd_given_linked_list_with_ali_then_add_baba_expect_2_items_in_list(void){
  LinkedList list;
  
  list.head = &item;
  list.tail = &item;
  list.len = 1;
  item.next = NULL;
  itemBaba.next = (Item *)-1;
  
  LinkedList list;
    Student Ali = {
      "Ali",                        //name
      23,                           //age
      72.35,                        //weight
      1.78                          //height  
    };
    Item item = {
      (Item *)-1,                   //next
      (void *)&Ali                 //data
    };
     Student Baba = {
      "Baba",                        //name
      26,                           //age
      75.35,                        //weight
      1.83                          //height  
    };
    Item item = {
      (Item *)-1,                   //next
      (void *)&Baba                 //data
    };
  
     printf("address of ite: %p\n", &item);
  
  listAdd(&list,&itemBaba);
  TEST_ASSERT_EQUAL_PTR(&item,list.head);
  TEST_ASSERT_EQUAL_PTR(&itemBaba,list.tail);
  TEST_ASSERT_EQUAL(2,list.len);
  TEST_ASSERT_EQUAL_PTR(&itemBaba,item.next);
  TEST_ASSERT_EQUAL_PTR(&Ali,item.data);
  TEST_ASSERT_NULL(itemBaba.next);
  TEST_ASSERT_EQUAL_PTR(&Baba,itemBaba.data);
}
/*  
void test_listAdd_given_an_empty_linked_list_then_add_Ali_expect_1_item_in_list(void)
{
  
  LinkedList list;
    Student Ali = {
      "Ali",                        //name
      23,                           //age
      72.35,                        //weight
      1.78                          //height  
    };
    Item item = {
      (Item *)-1,                   //next
      (void *)&Ali                 //data
    };
 
    printf("address of ite: %p\n", &item);
    
    listInit(&list);
    listAdd(&list,&item);
    TEST_ASSERT_EQUAL_PTR(&item,list.head);    
    TEST_ASSERT_EQUAL_PTR(&item,list.tail);   
    TEST_ASSERT_EQUAL(1,list.len);
    TEST_ASSERT_NULL(item.next);
    TEST_ASSERT_EQUAL_PTR(&Ali,item.data);
    
}
*/