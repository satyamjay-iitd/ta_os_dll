#include "dll.h"

void testInsertAt(){
  printf("\n****************** TESTING INSERT ***************************\n");
  struct Node* head = NULL;

  int arr[] = {100};

  if(insertAt(&head, 0, 100) == 0 && isEqualTo(head, arr, 1))
    printf("Test - 1. Insert at index = 0. Passed\n");
  else
    printf("Test - 1. Insert at index = 0. Failed\n");

  if(insertAt(&head, 1000, 100) == -1 && isEqualTo(head, arr, 1))
    printf("Test - 2. Insert at index > len. Passed\n");
  else
    printf("Test - 2. Insert at index > len. Failed\n");

  int arr2[] = {100, 200};
  if(insertAt(&head, 1, 200) == 0 && isEqualTo(head, arr2, 2))
    printf("Test - 3. Insert at index = len. Passed\n");
  else
    printf("Test - 3. Insert at index = len. Failed\n");

  int arr3[] = {100, 150, 200};
  if(insertAt(&head, 1, 150) == 0 && isEqualTo(head, arr3, 3))
    printf("Test - 4. Insert at 0<index<len. Passed\n");
  else
    printf("Test - 4. Insert at 0<index<len. Failed\n");
 
  clear(&head);

}

void testDeleteAt(){
  printf("\n****************** TESTING DELETE ***************************\n");

  struct Node* head = NULL;

  if(deleteAt(&head, 0) == -1)
    printf("Test - 1.0. Delete from Empty - 1. Passed\n");
  else
    printf("Test - 1.0. Delete from Empty - 1. Failed\n");

  if(deleteAt(&head, 1) == -1)
    printf("Test - 1.1. Delete from Empty - 2. Passed\n");
  else
    printf("Test - 1.1. Delete from Empty - 2. Failed\n");

  insertAt(&head, 0, 400);
  insertAt(&head, 0, 300);
  insertAt(&head, 0, 200);
  insertAt(&head, 0, 100);

  int arr[] = {200, 300, 400};
  if(deleteAt(&head, 0) == 0 && isEqualTo(head, arr, 3))
    printf("Test - 2. Delete at index = 0. Passed\n");
  else
    printf("Test - 2. Delete at index = 0. Failed\n");

  int arr2[] = {200, 400};
  if(deleteAt(&head, 1) == 0 && isEqualTo(head, arr2, 2))
    printf("Test - 3. Delete at 0<index<len. Passed\n");
  else
    printf("Test - 3. Delete at 0<index<len. Failed\n");


  int arr3[] = {200};
  if(deleteAt(&head, 1) == 0 && isEqualTo(head, arr3, 1))
    printf("Test - 4. Insert at index=len-1. Passed\n");
  else
    printf("Test - 4. Insert at index=len-1. Failed\n");

  if(deleteAt(&head, 1) == -1 && isEqualTo(head, arr3, 1))
    printf("Test - 5.1. Insert at len-1<index. Passed\n");
  else
    printf("Test - 5.1. Insert at len-1<index. Failed\n");
 
  if(deleteAt(&head, 2) == -1 && isEqualTo(head, arr3, 1))
    printf("Test - 5.2. Insert at len-1<index. Passed\n");
  else
    printf("Test - 5.2. Insert at len-1<index. Failed\n");

  clear(&head);
}

void testAt(){
  

}

void runTestCases(){
  testInsertAt();
  testDeleteAt();
  testAt();
}


int main(){
  runTestCases();
}
